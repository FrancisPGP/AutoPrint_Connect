#pragma once

using namespace System;
using namespace AutoPrintModel;
using namespace System::Collections::Generic;

namespace AutoPrintPersistance {
	public ref class Persistance
	{
	public:
		static void PersistTextFile(String^ fileName, Object^ persistObject);

		static void LoadTextFile(String^ fileName);

		//Copy paste del controller xd
		static int AddCustomer(User^ user); //"static" sirve para crear este método global ()
		static void UpdateCustomer(User^ user);
		static void DeleteCustomer(int CustomerId);
		static User^ QueryCustomerById(int CustomerId); // Buscar el id del custome
		static List<User^>^ QueryAllCustomers();//Tener la lista de usuarios
	};
}
