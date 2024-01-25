/**
 * Project Untitled
 */
#pragma once

#ifndef _CUSTOMER_H
#define _CUSTOMER_H

#include "User.h"

using namespace System;
using namespace System::Collections::Generic;
//"using namespace System::Collections::Generic;" || Lo usamos para que "List<String^>^ record;" pueda existir

namespace AutoPrintModel {
    public ref class Customer : public User {
    public:
        property List<String^>^ record;
        property  double money_page;

     
        void BuyPrint();

        void Reload();
    };
}
#endif //_CUSTOMER_H