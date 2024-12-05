#include "line.h"
#include <sstream>
#include <iomanip>
#include "point.h"
#include "point.cpp"

Line::Line(Point a,Point b): a(a), b(b);

Line::Line(Point &other);
: a(other.a), b(other.b);
bool Line :: equals(const Line &other){
  return a.equals(other.a) && b.equals(other.b);
}
void Line::flip(){
    a.flip();
    b.flip();
   
}
void Line :: move(double x, double y){
   a.move(x,y);
   b.move(x,y);
   
   }
string Line:: toString(){
    return "Line(" + a.toString() +", " + b.toString()+ ", ")" ;
 }
 
#endif