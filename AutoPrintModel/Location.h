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
        property int loca_id;
        property String^ place_printer;
        property  array<Byte>^ image;
    
       
    
    };
}
#endif //_LOCATION_H