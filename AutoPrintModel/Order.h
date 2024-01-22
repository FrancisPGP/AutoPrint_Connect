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

        property int Order_id {
            int get() { return order_id; }
            void set(int value) { order_id = value; }
        }
        property bool Color_page {
            bool get() { return color_page; }
            void set(bool value) { color_page = value; }
        }

        property int Num_spooler {
            int get() { return num_spooler; }
            void set(int value) { num_spooler = value; }
        }
        property String^ Status_order {
            String^ get() { return status_order; }
            void set(String^ value) { status_order = value; }
        }

        void PrintDocument();

        void CheckState();
    };
}
#endif //_ORDER_H