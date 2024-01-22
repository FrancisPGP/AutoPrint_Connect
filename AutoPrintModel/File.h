/**
 * Project Untitled
 */
#pragma once

#ifndef _FILE_H
#define _FILE_H

using namespace System;

namespace AutoPrintModel {
    public ref class File {
    public:
        int print_id;
        String^ format;
        int num_pages;

        property int Print_id {
            int get() { return print_id; }
            void set(int value) { print_id = value; }
        }
        property int Num_pages {
            int get() { return num_pages; }
            void set(int value) { num_pages = value; }
        }
        property String^ Format {
            String^ get() { return format; }
            void set(String^ value) { format = value; }
        }


    };
}
#endif //_FILE_H