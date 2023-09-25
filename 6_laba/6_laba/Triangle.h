#pragma once
#include <iostream>
#include <cmath>

class Triangle {
public:
    Triangle(double a = 0, double b = 0, double c = 0);
    Triangle(const Triangle& other);
    Triangle(Triangle&& other) noexcept;
    ~Triangle();

    Triangle& operator=(const Triangle& other);
    Triangle& operator=(Triangle&& other) noexcept;

    bool operator==(const Triangle& other) const;
    bool operator<(const Triangle& other) const;
    bool operator>(const Triangle& other) const;

    Triangle operator+(double num) const;
    Triangle& operator+=(double num);

    Triangle operator*(double num) const;
    Triangle& operator*=(double num);

    friend std::ostream& operator<<(std::ostream& os, const Triangle& triangle);
    friend std::istream& operator>>(std::istream& is, Triangle& triangle);

private:
    double a_, b_, c_;

    double area() const;
};