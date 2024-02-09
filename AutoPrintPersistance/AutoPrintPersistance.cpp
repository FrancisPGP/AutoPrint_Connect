#include "pch.h"

#include "AutoPrintPersistance.h"

using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace AutoPrintModel;
using namespace AutoPrintPersistance;
using namespace System::Xml::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;

/*Ricardo y Luis*/
void AutoPrintPersistance::Persistance::PersistTextFile(String^ fileName, Object^ persistObject)
{
    FileStream^ file;
    StreamWriter^ writer;
    file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
    writer = gcnew StreamWriter(file);
    if (persistObject->GetType() == List<User^>::typeid) {
        List<User^>^ users = (List<User^>^) persistObject;
        for (int i = 0; i < users->Count; i++) {
            User^ u = users[i];
            u->User_Id = costumerid;

            writer->WriteLine(u->User_Id + "," + u->Name + ","
                + u->LastName + "," + u->Email + ","+ u->Dni+ "," + u->Password + "," + u->Money_in_wallet);
        }
        
    }
    if (writer != nullptr) writer->Close();
    if (file != nullptr) file->Close();
}

Object^ AutoPrintPersistance::Persistance::LoadTextFile(String^ fileName)
{
    FileStream^ file;
    StreamReader^ reader;
    Object^ result;
    if (System::IO::File::Exists(fileName)) {
        file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
        reader = gcnew StreamReader(file);
        if (fileName->Equals(USER_FILE_NAME)) {
            result = gcnew List<User^>();
            while (true) {
                String^ line = reader->ReadLine();
                if (line == nullptr) break;
                array<String^>^ record = line->Split(',');
                User^ user = gcnew User();
                user->User_Id = Convert::ToInt32(record[0]);
                user->Name = record[1];
                user->LastName = record[2];
                user->Email = record[3];
                user->Dni = Int32::Parse(record[4]);
                user->Password = record[5];
                user->Money_in_wallet = Double::Parse(record[6]);


                ((List<User^>^)result)->Add(user);
            }
        }
        if (reader != nullptr) reader->Close();
        if (file != nullptr) file->Close();
    }
    return result;
}

void AutoPrintPersistance::Persistance::PersistXMLFile(String^ fileName, Object^ persistObject)
{
    StreamWriter^ writer;
    try {
        writer = gcnew  StreamWriter(fileName);
        if (persistObject->GetType() == List<User^>::typeid) {
            XmlSerializer^ xmlSerializer = gcnew XmlSerializer(List<User^>::typeid);
            xmlSerializer->Serialize(writer, persistObject);
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally { //Es el más importante
        if (writer != nullptr) writer->Close();
    }
}

Object^ AutoPrintPersistance::Persistance::LoadXMLFile(String^ fileName)
{
    StreamReader^ reader;
    Object^ result;
    XmlSerializer^ xmlSerializer;
    try {
        if (System::IO::File::Exists(fileName)) {
            reader = gcnew StreamReader(fileName);
            if (fileName->Equals(USER_XML_FILE_NAME)) {
                xmlSerializer = gcnew XmlSerializer(List<User^>::typeid);
                result = (List<User^>^)xmlSerializer->Deserialize(reader);
            }
         
            if (reader != nullptr) reader->Close();
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (reader != nullptr) reader->Close();
    }
    return result;
}

int AutoPrintPersistance::Persistance::AddCustomer(User^ user)
{
    CustomerListDB = (List<User^>^)Persistance::LoadXMLFile(USER_XML_FILE_NAME);

    if (CustomerListDB == nullptr) {
        CustomerListDB = gcnew List<User^>();
    }
    CustomerListDB->Add(user);
    //PersistTextFile(USER_FILE_NAME, CustomerListDB);
    PersistXMLFile(USER_XML_FILE_NAME, CustomerListDB);
    return 1;
    /*if (orderList == nullptr) {
        // Inicializar orderList si es nulo
        orderList = gcnew List<Order^>();
    }
    orderList->Add(file);
    PersistBinaryFile(Lista_Order_BIN, orderList);*/
}

void AutoPrintPersistance::Persistance::UpdateCustomer(User^ user)
{
    for (int i = 0; i < CustomerListDB->Count; i++) {
        if (CustomerListDB[i]->Dni == user->Dni) {
            CustomerListDB[i] = user;
            //PersistTextFile(USER_FILE_NAME, CustomerListDB);
            PersistXMLFile(USER_XML_FILE_NAME, CustomerListDB);

            return;
        }
    }
}

void AutoPrintPersistance::Persistance::DeleteCustomer(int userDNI)
{
   /* for (int i = 0; i < CustomerListDB->Count; i++) {
        if (CustomerListDB[i]->Name == Nameid) {
            CustomerListDB->RemoveAt(i);
            return;
        }
    }*/
   //PersistXMLFile(USER_XML_FILE_NAME, CustomerListDB);
    CustomerListDB = (List<User^>^)Persistance::LoadXMLFile(USER_XML_FILE_NAME);

    // Verificar si el archivo binario contiene datos
    if (CustomerListDB != nullptr) {
        for (int i = CustomerListDB->Count - 1; i >= 0; i--) {
            if (userDNI == CustomerListDB[i]->Dni) {
                CustomerListDB->RemoveAt(i);
            }
        }
        // Guardar la lista actualizada en el archivo binario
        PersistXMLFile(USER_XML_FILE_NAME, CustomerListDB);
    }


}

User^ AutoPrintPersistance::Persistance::QueryCustomerByDNI(int CustomerDNI)
{
   // CustomerListDB = (List<User^>^) LoadTextFile (USER_FILE_NAME);
    CustomerListDB = (List<User^>^) LoadXMLFile(USER_XML_FILE_NAME);

    User^ user = nullptr;
    for (int i = 0; i < CustomerListDB->Count; i++) {
        if (CustomerListDB[i]->Dni == CustomerDNI) {
            user = CustomerListDB[i];
            return user;

        }

    }
    return user;

}

List<User^>^ AutoPrintPersistance::Persistance::QueryAllCustomers()
{
    //CustomerListDB = (List<User^>^) LoadTextFile(USER_FILE_NAME );
    CustomerListDB = (List<User^>^) LoadXMLFile(USER_XML_FILE_NAME);

    if (CustomerListDB == nullptr)
        CustomerListDB = gcnew List<User^>();
    return CustomerListDB;
}
//intento para login
bool AutoPrintPersistance::Persistance::Login(int dni, String^ password) {
    List<User^>^ userList = QueryAllCustomers();
    for each (User ^ u  in userList) {
        if (u->Dni == dni && u->Password == password) {
            return true;
        }
    }
    return false;
}

/*Francis*/

void Persistance::PersistBinaryFile(String^ fileName, Object^ persistObject) {
    FileStream^ file;
    BinaryFormatter^ formatter = gcnew BinaryFormatter();
    try {
        file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
        formatter->Serialize(file, persistObject);
    }
    catch (Exception^ ex) { //Si ocurre algo distinto entra aquí
        //Todo error puede se considerado como una Exception, no al revés
        throw ex;
    }
    finally { //El más importante: serán las instrucciones que se vana ejecutar si o si
        if (file != nullptr) file->Close();
    }
}

Object^ Persistance::LoadBinaryFile(String^ fileName) {
    Object^ result;
    FileStream^ file;
    BinaryFormatter^ formatter;
    //Programar la lectura de datos
    try {
        if (System::IO::File::Exists(fileName)) {
            file = gcnew FileStream(fileName, FileMode::Open, FileAccess::Read);
            formatter = gcnew BinaryFormatter();
            if (fileName->Equals(Lista_Order_BIN)) {
                result = formatter->Deserialize(file);
            }
        }
    }
    catch (Exception^ ex) {
        throw ex;
    }
    finally {
        if (file != nullptr) file->Close();
    }

    return result;
}

void Persistance::AddFile(Order^ file) {
    // Asegúrate de que orderList está inicializado
    if (orderList == nullptr) {
        // Inicializar orderList si es nulo
        orderList = gcnew List<Order^>();
    }
    orderList->Add(file);
    PersistBinaryFile(Lista_Order_BIN, orderList);
}
List<Order^>^ Persistance::QueryAllFiles() {
    orderList = (List<Order^>^)LoadBinaryFile(Lista_Order_BIN);
    return orderList;
}

Order^ Persistance::QueryFileById(int orderId) {
    orderList = (List<Order^>^)LoadBinaryFile(Lista_Order_BIN);
    for (int i = 0; i < orderList->Count; i++) {
        if (orderList[i]->order_id == orderId)
            return orderList[i];
    }
    return nullptr;
}

/*Cesar*/

