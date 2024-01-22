/**
 * Project Untitled
 */
#pragma once

#ifndef _WALLET_H
#define _WALLET_H

#include "Payment_Methods.h"

using namespace System;

namespace AutoPrintModel {
    public ref class Wallet : public Payment_Methods {
    public:
        int wallet_id;
        double money_page;

        property int Wallet_id {
            int get() { return wallet_id; }
            void set(int value) { wallet_id = value; }
        }
        property double Money_page {
            double get() { return money_page; }
            void set(double value) { money_page = value; }
        }
    };
}
#endif //_WALLET_H