#include "triangle.h"

Triangle::Triangle(double a, double b, double c) : a_(a), b_(b), c_(c) {}

Triangle::Triangle(const Triangle& other) : a_(other.a_), b_(other.b_), c_(other.c_) {}

Triangle::Triangle(Triangle&& other) noexcept : a_(other.a_), b_(other.b_), c_(other.c_) {}

Triangle::~Triangle() {}

Triangle& Triangle::operator=(const Triangle& other) {
    if (this != &other) {
        a_ = other.a_;
        b_ = other.b_;
        c_ = other.c_;
    }
    return *this;
}

Triangle& Triangle::operator=(Triangle&& other) noexcept {
    if (this != &other) {
        a_ = other.a_;
        b_ = other.b_;
        c_ = other.c_;
    }
    return *this;
}

bool Triangle::operator==(const Triangle& other) const {
    return (a_ == other.a_ && b_ == other.b_ && c_ == other.c_) ||
        (a_ == other.b_ && b_ == other.c_ && c_ == other.a_) ||
        (a_ == other.c_ && b_ == other.a_ && c_ == other.b_) ||
        (a_ == other.c_ && b_ == other.b_ && c_ == other.a_) ||
        (a_ == other.b_ && b_ == other.a_ && c_ == other.c_) ||
        (a_ == other.a_ && b_ == other.c_ && c_ == other.b_);
}

bool Triangle::operator<(const Triangle& other) const {
    return area() < other.area();
}

bool Triangle::operator>(const Triangle& other) const {
    return area() > other.area();
}

Triangle Triangle::operator+(double num) const {
    return Triangle(a_ + num, b_ + num, c_ + num);
}

Triangle& Triangle::operator+=(double num) {
    a_ += num;
    b_ += num;
    c_ += num;
    return *this;
}

Triangle Triangle::operator*(double num) const {
    return Triangle(a_ * num, b_ * num, c_ * num);
}

Triangle& Triangle::operator*=(double num) {
    a_ *= num;
    b_ *= num;
    c_ *= num;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Triangle& triangle) {
    os << "Triangle(" << triangle.a_ << ", " << triangle.b_ << ", " << triangle.c_ << ")";
    return os;
}

std::istream& operator>>(std::istream& is, Triangle& triangle) {
    is >> triangle.a_ >> triangle.b_ >> triangle.c_;
    return is;
}

double Triangle::area() const {
    double p = (a_ + b_ + c_) / 2;
    return std::sqrt(p * (p - a_) * (p - b_) * (p - c_));
}
