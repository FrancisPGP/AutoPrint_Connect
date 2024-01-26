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

void AutoPrintController::Controller::DeleteCustomer(int CustomerId) {
    return ::Persistance::DeleteCustomer(CustomerId);

}

User^ AutoPrintController::Controller::QueryCustomerById(int CustomerId) {
    return Persistance::QueryCustomerById(CustomerId);

}

List<User^>^ AutoPrintController::Controller::QueryAllCustomers() {
    return Persistance::QueryAllCustomers();
}

//intento para login
bool AutoPrintController::Controller::Login(String^ dni, String^ password) {
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

List<Order^>^ Controller::QueryFileById(int orderId) {
    return Persistance::QueryFileById(orderId);
}

/*Cesar*/
