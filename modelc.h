#ifndef MODELC_H
#define MODELC_H

#include "airplane.h"

class ModelC : public Airplane
{
public:
    ModelC();
    virtual void fly();
};

#endif // MODELC_H
