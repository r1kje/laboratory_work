#include "Figure.h"

Figure::Figure()
{
    count++;
    cout << "Amount of figures now: " << count << endl;
}

Figure::~Figure()
{
    cout << endl;
    count--;
    cout <<"Amount of figures after deleting is: " << count << endl;
}

double Figure::getPerimeter()
{
    double result = 0;
    return result;
}

double Rectangle::getPerimeter()
{
    double result = width * 2 + height * 2;
    return result;
}

void Rectangle::Show()
{
    double P = this->getPerimeter();
    cout << " -Rectangle perimeter: " << P << endl;
}

double Circle::getPerimeter()
{
    return 2 * 3.14 * radius;
}

void Circle::Show()
{
    double P = this->getPerimeter();
    cout << " -Circle perimeter: " << P << endl;
}

double Penta::getPerimeter()
{
    double result = side1 + side2 + side3 + side4 + side5;
    return result;
}

void Penta::Show()
{
    double P = this->getPerimeter();
    cout << " -Penta perimeter: " << P << endl;
}

double Triangle::getPerimeter()
{
    double result = side1 + side2 + side3;
    return result;
}

void Triangle::Show()
{
    double P = this->getPerimeter();
    cout << " -Triangle perimeter: " << P << endl;
}