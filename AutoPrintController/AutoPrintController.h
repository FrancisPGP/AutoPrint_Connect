#pragma once

using namespace System;
using namespace AutoPrintModel;
using namespace System::Collections::Generic;
using namespace System::IO::Ports;

namespace AutoPrintController {
    public ref class Controller
    {
      
    public:
        /*Ricardo y Luis*/
        static int AddCustomer(User^ user); //"static" sirve para crear este método global ()
        static void UpdateCustomer(User^ user);
        static void DeleteCustomer(int CustomerId);
        static User^ QueryCustomerById(int CustomerId); // Buscar el id del custome
        static List<User^>^ QueryAllCustomers();//Tener la lista de usuarios
        //intento para login
        static bool Login(String^ dni, String^ password);

        /*Francis*/
        static void AddOrder(Order^);
        static List<Order^>^ QueryAllFiles();
        static List<Order^>^ QueryFileById(int orderId);

        
        /*Cesar*/

    };
}
