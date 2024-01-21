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
        int order_id;
        bool color_page;
        int num_spooler;
        int num_copies;
        String^ status_order;

        void PrintDocument();

        void CheckState();
    };
}
#endif //_ORDER_H