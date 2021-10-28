#include "Interval.h"
#include <iostream>

Interval::Interval(double b, double a)
{
    if (b < a)
    {
        this->min = b;
        this->max = a;


    }
    else
    {
        this->min = a;
        this->max = b;

    }
}

double Interval::valeur_min()
{
    return this->min;
}

double Interval::valeur_max()
{
    return this->max;
}

bool Interval::operator[](double m)
{
    return (m >= this->min && m <= this->max);
}

void Interval::consulter()
{
    std::cout <<"[" << this->min << "," << this->max << "]\n";
}

Interval* Interval::operator+(Interval& z)
{
    double mi, ma;
    if (this->min < z.min)
        mi = this->min;
    else mi = z.min;
    if (this->max > z.max)
        ma = this->max;
    else ma = z.max;
    Interval* a = new Interval(mi, ma);

    return a;
}

Interval* Interval::operator-(Interval& z)
{
    double mi, ma;
    if (this->min > z.min) mi = this->min;
    else mi = z.min;
    if (this->max < z.max) ma = this->max;
    else ma = z.max;
    Interval* a = new Interval(mi, ma);
    return a;
}
