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
    };
}
#endif //_PRINTER_H