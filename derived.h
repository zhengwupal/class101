#ifndef DERIVED_H
#define DERIVED_H

#include "base.h"

class Derived : public Base
{
public:
    using Base::mf1;
    virtual void mf1();
    void mf3();
    void mf4();
};

#endif // DERIVED_H
