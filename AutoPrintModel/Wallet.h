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
        property int wallet_id;
        property  double money_page;

        
    };
}
#endif //_WALLET_H