#include<iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
};

class Rectangle : public Shape
{
private:
    int l,b;

public:
    Rectangle(int x,int y)
    {
        l = x;
        b = y;
    }

    void area()
    {
        cout<<"Area of Rectangle : "<<l*b<<endl;
    }
};

class Circle : public Shape
{
private:
    float r;

public:
    Circle(float x)
    {
        r = x;
    }

    void area()
    {
        cout<<"Area of Circle : "<<3.14*r*r<<endl;
    }
};

int main()
{
    Rectangle r(10,5);
    Circle c(4);

    r.area();
    c.area();

    return 0;
}