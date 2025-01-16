/*
4. Create a class named 'Rectangle' with two data members 'length' and 'breadth' and two
functions to print the area and perimeter of the rectangle respectively. Its constructor
having parameters for length and breadth is used to initialize the length and breadth of
the rectangle. Let class 'Square' inherit the 'Rectangle' class with its constructor
having a parameter for its side (suppose s) calling the constructor of its parent class.
Print the area and perimeter of a rectangle and a square.
Now repeat the above example to print the area of 10 squares.
[Hint-Use array of objects]
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
void inputOutput()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
class Rectangle
{
public:
    int length, breadth;
    Rectangle(int l, int R)
    {
        length = l;
        breadth = R;
    }
    void area()
    {
        cout << (length * breadth) << endl;
    }
    void perimeter()
    {
        cout << 2 * (length + breadth) << endl;
    }
};
class Square : public Rectangle
{
public:
    int length;
    Square(int s) : Rectangle(s, s)
    {
        length = s;
    }
    void area()
    {
        cout << (length * length) << endl;
    }
    void perimeter()
    {
        cout << 4 * length << endl;
    }
};
int main()
{
    Rectangle r(10, 20);
    r.area();
    r.perimeter();
    cout << "array of objects \n";
    for (int i = 1; i <= 10; i++)
    {
        Square s(i);
        cout << "area of square: ";
        s.area();
        cout << " perimeter of square: ";
        s.perimeter();
    }

    return 0;
}
