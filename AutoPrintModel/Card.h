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
    };
}
#endif //_CARD_H