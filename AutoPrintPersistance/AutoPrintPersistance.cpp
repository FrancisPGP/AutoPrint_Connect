#include "pch.h"

#include "AutoPrintPersistance.h"

using namespace System::IO;

void AutoPrintPersistance::Persistance::PersistTextFile(String^ fileName, Object^ persistObject)
{
    FileStream^ file;
    StreamWriter^ writer;
    file = gcnew FileStream(fileName, FileMode::Create, FileAccess::Write);
    writer = gcnew StreamWriter(file);
    //.... Falta
}

void AutoPrintPersistance::Persistance::LoadTextFile(String^ fileName)
{
    throw gcnew System::NotImplementedException();
}

int AutoPrintPersistance::Persistance::AddCustomer(User^ user)
{
    return 0;
}

void AutoPrintPersistance::Persistance::UpdateCustomer(User^ user)
{
    throw gcnew System::NotImplementedException();
}

void AutoPrintPersistance::Persistance::DeleteCustomer(int CustomerId)
{
    throw gcnew System::NotImplementedException();
}

User^ AutoPrintPersistance::Persistance::QueryCustomerById(int CustomerId)
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}

List<User^>^ AutoPrintPersistance::Persistance::QueryAllCustomers()
{
    throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
}
