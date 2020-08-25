#include "cat.h"

Cat::Cat(QObject *parent) : QObject(parent)
{

}

void Cat::meow()
{
    qInfo() << this << "meow";
}
