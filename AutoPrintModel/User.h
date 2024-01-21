/**
 * Project Untitled
 */
#pragma once

#ifndef _USER_H
#define _USER_H

using namespace System;

namespace AutoPrintModel {
    public ref class User {
    public:

        void Register();

        void Login();
    private:
        int user_Id;
        String^ name;
        String^ lastName;
        String^ phone_number;
        String^ dni;
        String^ gender;
        String^ password;
        String^ email;
        int birthdate;
        array<Byte>^ photo;
    };
}
#endif //_USER_H