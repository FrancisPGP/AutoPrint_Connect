/**
 * Project Untitled
 */
#pragma once

#ifndef _ORDER_H
#define _ORDER_H

using namespace System;

namespace AutoPrintModel {
    [Serializable]
    public ref class Order {
    public:
        property int order_id;
        property String^ color_page;
        property int num_spooler;
        property int num_copies;
        property String^ sheet_type;
        property String^ sheet_size;
        property String^ status_order;
        property  double price; //fuiste usado
        property String^ Location;
        property String^ PDF_URL;
        property array<Byte>^ PDF;

        
        void PrintDocument();

        void CheckState();
    };
}
#endif //_ORDER_H