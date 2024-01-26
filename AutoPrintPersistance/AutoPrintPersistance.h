#pragma once

using namespace System;
using namespace AutoPrintModel;
using namespace System::Collections::Generic;

namespace AutoPrintPersistance {
	public ref class Persistance
	{
	private:
		static List<User^>^ CustomerListDB = gcnew List<User^>();// base de datos

	public:
		static String^ USER_FILE_NAME = "Users.txt";


		static void PersistTextFile(String^ fileName, Object^ persistObject);

		static Object^ LoadTextFile(String^ fileName);

		//Copy paste del controller xd
		static int AddCustomer(User^ user); //"static" sirve para crear este método global ()
		static void UpdateCustomer(User^ user);
		static void DeleteCustomer(int CustomerId);
		static User^ QueryCustomerById(int CustomerId); // Buscar el id del custome
		static List<User^>^ QueryAllCustomers();//Tener la lista de usuarios
//intento para login
		static bool Login(String^ dni, String^ password);

	};
}
