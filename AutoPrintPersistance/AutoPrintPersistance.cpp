#include "pch.h"

#include "AutoPrintPersistance.h"

using namespace System::IO;
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
            u->User_Id++;

            writer->WriteLine(u->User_Id + "," + u->Name + ","
                + u->LastName + "," + u->Email + ","+ u->Dni+ "," + u->Password);

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
                user->Dni = record[4];
                user->Password = record[5];


                ((List<User^>^)result)->Add(user);
            }
        }
        if (reader != nullptr) reader->Close();
        if (file != nullptr) file->Close();
    }
    return result;
}

int AutoPrintPersistance::Persistance::AddCustomer(User^ user)
{
    CustomerListDB->Add(user);
    PersistTextFile(USER_FILE_NAME, CustomerListDB);
    return 1;
}

void AutoPrintPersistance::Persistance::UpdateCustomer(User^ user)
{
    for (int i = 0; i < CustomerListDB->Count; i++) {
        if (CustomerListDB[i]->User_Id == user->User_Id) {
            CustomerListDB[i] = user;
            PersistTextFile(USER_FILE_NAME, CustomerListDB);
            return;
        }
    }
}

void AutoPrintPersistance::Persistance::DeleteCustomer(int CustomerId)
{
    for (int i = 0; i < CustomerListDB->Count; i++) {
        if (CustomerListDB[i]->User_Id == CustomerId) {
            CustomerListDB->RemoveAt(i);
            return;
        }
    }
}

User^ AutoPrintPersistance::Persistance::QueryCustomerById(int CustomerId)
{
    CustomerListDB = (List<User^>^) LoadTextFile (USER_FILE_NAME);
    User^ user = nullptr;
    for (int i = 0; i < CustomerListDB->Count; i++) {
        if (CustomerListDB[i]->User_Id == CustomerId) {
            user = CustomerListDB[i];
            return user;

        }
        return user;

    }
}

List<User^>^ AutoPrintPersistance::Persistance::QueryAllCustomers()
{
    CustomerListDB = (List<User^>^) LoadTextFile(USER_FILE_NAME );
    if (CustomerListDB == nullptr)
        CustomerListDB = gcnew List<User^>();
    return CustomerListDB;
}
//intento para login
bool AutoPrintPersistance::Persistance::Login(String^ dni, String^ password) {
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

