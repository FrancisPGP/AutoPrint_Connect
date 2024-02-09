/**
 * Project Untitled
 */
#pragma once

#ifndef _USER_H
#define _USER_H

using namespace System;

namespace AutoPrintModel {
    [Serializable]
    public ref class User {
    public:

        void Register();

        void Login();
    private:
        int user_Id;
        String^ name;
        String^ lastName;
        String^ phone_number;
        int dni;
        String^ gender;
        String^ password;
        String^ email;
        String^ birthdate;
        array<Byte>^ photo;
        //atributo creado por comodidad en el walletForm y otros que se necesite en el futuro ;v
        double money_in_wallet;

    public: 
        property int User_Id; /* {
            int get() { return user_Id; }
            void set(int value) { user_Id = value; }
        }*/
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
        property int Dni {
            int get() { return dni; }
            void set(int value) { dni = value; }
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
        property String^ Birthdate {
            String^ get() { return birthdate; }
            void set(String^ value) { birthdate = value; }
        }
        property array<Byte>^ Photo {
            array<Byte>^ get() { return photo; }
            void set(array<Byte>^ value) { photo = value; }
        }
        property double Money_in_wallet {
            double get() { return money_in_wallet; }
            void set(double value) { money_in_wallet = value; }
        }
    };
}
#endif //_USER_H