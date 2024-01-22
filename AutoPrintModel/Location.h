/**
 * Project Untitled
 */
#pragma once

#ifndef _LOCATION_H
#define _LOCATION_H

using namespace System;

namespace AutoPrintModel {
    public ref class Location {
    public:
        int loca_id;
        String^ place_printer;
        array<Byte>^ image;
    
        property int Loca_id {
            int get() { return loca_id; }
            void set(int value) { loca_id = value; }
        }
        property String^ Place_printer {
            String^ get() { return place_printer; }
            void set(String^ value) { place_printer = value; }
        }
        property array<Byte>^ Image {
            array<Byte>^ get() { return image; }
            void set(array<Byte>^ value) { image = value; }
        }
    
    };
}
#endif //_LOCATION_H