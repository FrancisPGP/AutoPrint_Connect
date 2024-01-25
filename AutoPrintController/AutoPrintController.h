#pragma once

using namespace System;
using namespace AutoPrintModel;
using namespace System::Collections::Generic;


namespace AutoPrintController {
    public ref class Controller
    {
        private:
            static List<User^>^ CustomerListDB=gcnew List<User^>();
    public:
        static int AddCustomer(User^ user); //"static" sirve para crear este método global ()
        static void UpdateCustomer(User^ user);
        static void DeleteCustomer(int CustomerId);
        static User^ QueryCustomerById(int CustomerId); // Buscar el id del custome
        static List<User^>^ QueryAllCustomers();//Tener la lista de usuarios
    };
}
