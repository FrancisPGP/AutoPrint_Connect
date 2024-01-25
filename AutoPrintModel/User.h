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

    public: 
        property int User_Id {
            int get() { return user_Id; }
            void set(int value) { user_Id = value; }
        }
        property String^ Name {//------------------------------------------MODIFICACIONES DE LUIS------------------
            String^ get() { return name; }
            void set(String^ value) { name = value; }
        }//--------------------------------------------------------------------------------------------------------
        property String^ LastName {
            String^ get() { return lastName; }
            void set(String^ value) { lastName = value; }
        }
        property String^ Phone_number {
            String^ get() { return phone_number; }
            void set(String^ value) { phone_number = value; }
        }
        property String^ Dni {
            String^ get() { return dni; }
            void set(String^ value) { dni = value; }
        }
        property String^ Gender {
            String^ get() { return gender; }
            void set(String^ value) { gender = value; }
        }
        property String^ Password {
            String^ get() { return password; }
            void set(String^ value) { password = value; }
        }
        property String^ Email {
            String^ get() { return email; }
            void set(String^ value) { email = value; }
        }
        property int Birthdate {
            int get() { return birthdate; }
            void set(int value) { birthdate = value; }
        }
        property array<Byte>^ Photo {
            array<Byte>^ get() { return photo; }
            void set(array<Byte>^ value) { photo = value; }
        }
    };
}
#endif //_USER_H