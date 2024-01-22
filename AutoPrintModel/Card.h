/**
 * Project Untitled
 */
#pragma once

#ifndef _CARD_H
#define _CARD_H

#include "Payment_Methods.h"

using namespace System;

namespace AutoPrintModel {
    public ref class Card : public Payment_Methods {
    public:
        String^ account_number;
        String^ cvv;
        String^ dueDate;

        property String^ Account_number {
            String^ get() { return account_number; }
            void set(String^ value) { account_number = value; }
        }
        property String^ Cvv {
            String^ get() { return cvv; }
            void set(String^ value) { cvv = value; }
        }
        property String^ DueDate {
            String^ get() { return dueDate; }
            void set(String^ value) { dueDate = value; }
        }

    };


}
#endif //_CARD_H