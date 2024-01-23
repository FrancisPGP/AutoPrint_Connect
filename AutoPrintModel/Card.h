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
        property String^ account_number;
        property String^ cvv;
        property String^ dueDate;

        

    };


}
#endif //_CARD_H