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
    };
}
#endif //_FILE_H