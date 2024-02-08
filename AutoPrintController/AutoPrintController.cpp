#include "pch.h"

#include "AutoPrintController.h"

using namespace AutoPrintPersistance;
using namespace AutoPrintController;

/*Ricardo y Luis*/

int AutoPrintController::Controller::AddCustomer(User^ user) {
    return ::Persistance::AddCustomer(user);

}

void AutoPrintController::Controller::UpdateCustomer(User^ user) {
    return ::Persistance::UpdateCustomer(user);
}

void AutoPrintController::Controller::DeleteCustomer(int userDNI) {
    return ::Persistance::DeleteCustomer(userDNI);

}

User^ AutoPrintController::Controller::QueryCustomerByDNI(int CustomerDNI) {
    return Persistance::QueryCustomerByDNI(CustomerDNI);

}

List<User^>^ AutoPrintController::Controller::QueryAllCustomers() {
    return Persistance::QueryAllCustomers();
}

//intento para login
bool AutoPrintController::Controller::Login(int dni, String^ password) {
    return Persistance::Login(dni,password);
}

/*Francis*/
void Controller::AddOrder(Order^ file) {
    //using namespace|Clase|Metodo || Los nombres son diferentes
     Persistance::AddFile(file);
}

List<Order^>^ Controller::QueryAllFiles() {
    return Persistance::QueryAllFiles();
}

Order^ Controller::QueryFileById(int orderId) {
    return Persistance::QueryFileById(orderId);
}

/*Cesar*/
