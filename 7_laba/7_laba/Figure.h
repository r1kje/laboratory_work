#pragma once
#include <typeinfo>
#include <string>
#include <iostream>
using namespace std;

class Figure
{
protected:
    static int count;
public:
    Figure();
    ~Figure();
    virtual double getPerimeter();
    virtual void Show() = 0;
};

class Rectangle : public Figure  // класс прямоугольника
{
public:
    Rectangle(double w, double h) : width(w), height(h)
    { }
    double getPerimeter() override;
    void Show();
private:
    double width;   // ширина
    double height;  // высота
};

class Circle : public Figure     // круг
{
public:
    Circle(double r) : radius(r)
    { }
    double getPerimeter() override;
    void Show() override;
private:
    double radius;  // радиус круга
};

class Penta : public Figure     // пятиугольник
{
public:
    Penta(double s1, double s2, double s3, double s4, double s5) : side1(s1), side2(s2), side3(s3), side4(s4), side5(s5)
    { }
    double getPerimeter() override;
    void Show() override;

private:
    double side1;
    double side2;
    double side3;
    double side4;
    double side5;
};

class Triangle : public Figure     // пятиугольник
{
public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3)
    { }
    double getPerimeter() override;
    void Show() override;

private:
    double side1;
    double side2;
    double side3;
};