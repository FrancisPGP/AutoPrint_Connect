/**
 * Project Untitled
 */
#pragma once

#ifndef _BOSS_H
#define _BOSS_H

#include "User.h"

using namespace System;

namespace AutoPrintModel {
    public ref class Boss : public User {
        public:

            void ViewProfits();
    };
}
#endif //_BOSS_H