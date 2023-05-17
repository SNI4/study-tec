#include "bay.h"
#include <iostream>

void Bay::setName(string N)
{
    name = N;
}

void Bay::setDeep(float D)
{
    deep = D;
}

void Bay::setSize(float S)
{
    size = S;
}

ostream& operator<<(ostream& out, Bay obj)
{
    out << obj.name << " залив; ";
    out << "глубина: " << obj.deep << "м; ";
    out << "площадь: " << obj.size << "км²";

    return out;
}
