/*
23. Create a class named Shape with a function that prints "This is a shape". Create another
class named Polygon inheriting the Shape class with the same function that prints
"Polygon is a shape". Create two other classes named Rectangle and Triangle having the
same function which prints "Rectangle is a polygon" and "Triangle is a polygon"
respectively. Again, make another class named Square having the same function which
prints "Square is a rectangle".
Now, try calling the function by the object of each of these classes.
*/

#include <bits/stdc++.h>
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define yes "YES\n"
#define no "NO\n"
using namespace std;
class Shape
{
public:
    void fun()
    {
        cout << "This is shape\n";
    }
};
class polygon : public Shape
{
public:
    void fun()
    {
        cout << "Polygon is shape\n";
    }
};
class Rectangle
{
public:
    void fun()
    {
        cout << "Rectangle is a polygon\n";
    }
};
class triangle
{
public:
    void fun()
    {
        cout << "triangle is a polygon\n";
    }
};
class square
{
public:
    void fun()
    {
        cout << "square is a rectangle\n";
    }
};
int main()
{
    Shape obj;
    obj.fun();
    Rectangle rect;
    rect.fun();
    triangle tri;
    tri.fun();
    square sq;
    sq.fun();

    return 0;
}
