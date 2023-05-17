#include "Ocean.h"

void Ocean::setName(string N)
{
    name = N;
}

void Ocean::setDeep(float D)
{
    deep = D;
}

void Ocean::setSize(float S)
{
    size = S;
}

ostream& operator<<(ostream& stream, const Ocean obj)
{
    stream << obj.name << " океан; ";
    stream << "глубина: " << obj.deep << "м; ";
    stream << "площадь: " << obj.size << "км²";

    return stream;
}

istream& operator>>(istream& stream, Ocean& obj)
{
    cout << "Введите название океана: ";
    stream >> obj.name;
    cout << "Введите глубину океана (в метрах): ";
    stream >> obj.deep;
    cout << "Введите площадь океана (в квадратных километрах): ";
    stream >> obj.size;

    return stream;
}
