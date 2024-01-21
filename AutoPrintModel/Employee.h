/**
 * Project Untitled
 */
#pragma once

#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include "User.h"

using namespace System;

namespace AutoPrintModel {
    public ref class Employee : public User {
    public:

        void SendNotific();
    };
}
#endif //_EMPLOYEE_H