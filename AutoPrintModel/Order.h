/**
 * Project Untitled
 */
#pragma once

#ifndef _ORDER_H
#define _ORDER_H

using namespace System;

namespace AutoPrintModel {
    public ref class Order {
    public:
        property int order_id;
        property bool color_page;
        property int num_spooler;
        property int num_copies;
        property String^ status_order;
        property  double price;

        
        void PrintDocument();

        void CheckState();
    };
}
#endif //_ORDER_H