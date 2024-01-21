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
        array<Byte^>^ image;
    };
}
#endif //_LOCATION_H