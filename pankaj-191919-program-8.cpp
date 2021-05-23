#include<iostream>
using namespace std;

class Shape
{
    public:
    virtual void numberOfSides() = 0 ;

};
class Trapezoid:public Shape
{
    public:
      void numberOfSides()
        {
               cout<<"number of sides in trapezoid : 4 "<<endl;
        }
};
class Triangle:public Shape
{
    public:

     void numberOfSides()
        {
               cout<<"number of sides in triangle : 3 "<<endl;
        }

};
class Hexagon:public Shape
{
    public:
     void numberOfSides()
        {
               cout<<"number of sides in hexagon : 6 "<<endl;
        }

};

int main()
{
    Trapezoid t;
    Triangle tr;
    Hexagon h;
    t.numberOfSides();
    tr.numberOfSides();
    h.numberOfSides();
    
     return 0;
}