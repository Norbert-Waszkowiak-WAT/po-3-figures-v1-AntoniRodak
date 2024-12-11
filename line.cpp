#include "line.h"
#include <iostream>
#include <string>
#include <iomanip>

Line::Line(Point a, Point b): a(a), b(b) {};
Line::Line(const Line &other): a(other.a), b(other.b) {};



bool Line::equals(Figure &other) {
    Line* otherLine = dynamic_cast<Line*>(&other);
    if (otherLine == nullptr) {
        return false;
    }
    return a.equals(otherLine -> a) && b.equals(otherLine -> b);
}

void Line::flip() {
    a.flip();
    b.flip();
};

void Line::move(double x, double y) {
    a.move(x, y);
    b.move(x, y);
};


string Line::toString() {
        return "Line(" + a.toString() + ", " + b.toString() + ")";
};

double Line::getSurface() {return 0.0;};
std::vector<Point> Line::getPoints()  {
    return std::vector<Point>{a, b};
};
Line* Line::clone() const {
    return new Line(*this);
};