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
        int printer_id;
        String^ status_printer;
        int print_time;

        property int Printer_id {
            int get() { return printer_id; }
            void set(int value) { printer_id = value; }
        }
        property String^ Status_printer {
            String^ get() { return status_printer; }
            void set(String^ value) { status_printer = value; }
        }
        property int Print_time {
            int get() { return print_time; }
            void set(int value) { print_time = value; }
        }
        
    };
}
#endif //_PRINTER_H