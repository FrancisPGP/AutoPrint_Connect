/**
 * Project Untitled
 */
#pragma once

#ifndef _PAYMENT_METHODS_H
#define _PAYMENT_METHODS_H

using namespace System;

namespace AutoPrintModel {
    public ref class Payment_Methods {
    public:
        String^ owner;

        property String^ Owner {
            String^ get() { return owner; }
            void set(String^ value) { owner = value; }
        }
    };
}
#endif //_PAYMENT_METHODS_H