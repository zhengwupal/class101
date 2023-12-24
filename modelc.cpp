#include "modelc.h"
#include <QDebug>

ModelC::ModelC() {}

void ModelC::fly()
{
    Airplane::fly();
    qDebug() << "ModelC fly";
}
