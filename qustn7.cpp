#include<iostream>
using namespace std;
class Shape
{
    string shape;
public:
    Shape()
    {

    }
    Shape(string s)
    {
        shape=s;
    }
    void setShape(string s)
    {
        shape=s;
    }
    string getShape()
    {
        return shape;
    }
};
template<typename t>
class rectangle:public Shape
{
    t l;
    t b;
public:
    rectangle()
    {

    }
    rectangle(t length,t breadth,string s):Shape(s)
    {
        l=length;
        b=breadth;
    }
    rectangle(t length,t breadth)
    {
         l=length;
         b=breadth;
    }
    t area()
    {
        return l*b;
    }
    t perimeter()
    {
        return 2*(l+b);
    }
};
int main()
{
    rectangle<int>r(5,6,"rectangle");
    cout<<"area="<<r.area()<<" perimeter="<<r.perimeter()<<" shape="<<r.getShape();
    rectangle<float>r1(5.5,100.9);
    cout<<endl<<"area="<<r1.area()<<" perimeter="<<r1.perimeter();

}
