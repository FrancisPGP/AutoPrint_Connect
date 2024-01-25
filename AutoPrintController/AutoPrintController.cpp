#include "pch.h"

#include "AutoPrintController.h"

using namespace System::IO;


int AutoPrintController::Controller::AddCustomer(User^ user)
{
    CustomerListDB->Add(user);
    return 1;
}

void AutoPrintController::Controller::UpdateCustomer(User^ user)
{
    for (int i = 0; i < CustomerListDB->Count; i++) {
        if (CustomerListDB[i]->User_Id == user->User_Id) {
            CustomerListDB[i] == user;
        }
    }
}

void AutoPrintController::Controller::DeleteCustomer(int CustomerId)
{
    for (int i = 0; i < CustomerListDB->Count; i++) {
        if (CustomerListDB[i]->User_Id == CustomerId) {
            CustomerListDB->RemoveAt(i);
            return;
        }
    }
}

User^ AutoPrintController::Controller::QueryCustomerById(int CustomerId)
{
    
    User^ user = nullptr;
    for (int i = 0; i < CustomerListDB->Count; i++) {
        if (CustomerListDB[i]->User_Id == CustomerId) {
            user = CustomerListDB[i];
            return user;

        }
        return user;

    }
}

List<User^>^ AutoPrintController::Controller::QueryAllCustomers()
{
    return CustomerListDB;
}
