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
        property int print_id;
        property String^ format;
        property int num_pages;

        

    };
}
#endif //_FILE_H