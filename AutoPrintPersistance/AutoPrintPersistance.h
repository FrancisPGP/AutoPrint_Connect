#pragma once

using namespace System;
using namespace AutoPrintModel;
using namespace System::Collections::Generic;

namespace AutoPrintPersistance {
	public ref class Persistance
	{
	private:
		static List<User^>^ CustomerListDB = gcnew List<User^>();// base de datos
		/*Francis*/
		static List<Order^>^ orderList = gcnew List<Order^>();
		/*Cesar*/


	public:
		//Luis y ricardo
		static String^ USER_FILE_NAME = "Users.txt";
		//Francis
		static String^ Lista_Order_BIN = "Orders.bin";
		//Cesar



		/*Luis y ricardo*/
		static void PersistTextFile(String^ fileName, Object^ persistObject);

		static Object^ LoadTextFile(String^ fileName);

		/*Francis*/
		static void PersistBinaryFile(String^ fileName, Object^ persistObject);
		static Object^ LoadBinaryFile(String^ fileName);


		/*Luis y ricardo*/
		//Copy paste del controller xd
		static int AddCustomer(User^ user); //"static" sirve para crear este método global ()
		static void UpdateCustomer(User^ user);
		static void DeleteCustomer(int CustomerId);
		static User^ QueryCustomerById(int CustomerId); // Buscar el id del custome
		static List<User^>^ QueryAllCustomers();//Tener la lista de usuarios
		//intento para login
		static bool Login(String^ dni, String^ password);

		/*Francis*/
		//           Files
		static void AddFile(Order^ file);
		static List<Order^>^ QueryAllFiles();


		/*Cesar*/


	};
}
