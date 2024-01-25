/**
 * Project Untitled
 */
#pragma once

#ifndef _CARD_H
#define _CARD_H

using namespace System;

namespace AutoPrintModel {
    public ref class Card {
    public:
        property String^ account_number;
        property String^ cvv;
        property String^ dueDate;

        

    };


}
#endif //_CARD_H