/*
5. Create a class named 'Shape' with a function to print "This is a shape". Then create
two other classes named 'Rectangle' and 'Circle' inheriting the Shape class, both
having a function to print "This is rectangular shape" and "This is circular shape"
respectively. Create a subclass 'Square' of 'Rectangle' having a function to print
"Square is a rectangle". Now call the function of the 'Shape' and the 'Rectangle' class
by the object of the 'Square' class.
*/
#include <bits/stdc++.h>
using namespace std;
class Shape
{
public:
    void print()
    {
        cout << "This is a Shape\n";
    }
};
class Rectangle : public Shape
{
public:
    void recfun()
    {
        cout << "This is rectangular shape\n";
    }
};
class Circle : public Shape
{
public:
    void cirfun()
    {
        cout << "this is a circular shape\n";
    }
};
class Square : public Rectangle
{
public:
    void squFun()
    {
        cout << "Square is a rectangle\n";
    }
};
int main()
{
    Square sh;
    sh.print();
    sh.recfun();
    return 0;
}