#ifndef UNTITLED1_POINT_H
#define UNTITLED1_POINT_H

class Point{
    private:
        double y;
        double x;
    public:
        Point(double x, double y);
        bool equals(Point &other);
        double getX();
        double getY();
        void move(double x,double y);
        void flip();
        std::string toString();
};
    #endif