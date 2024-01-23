/**
 * Project Untitled
 */
#pragma once

#ifndef _PRINTER_H
#define _PRINTER_H

using namespace System;

namespace AutoPrintModel {
    public ref class Printer {
    public:
        property int printer_id;
        property String^ status_printer;
        property int print_time;

        
        
    };
}
#endif //_PRINTER_H