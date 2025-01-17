/*
12. Create a class to print the area of a square and a rectangle. The class has two functions
with the same name but different number of parameters. The function for printing the
area of rectangle has two parameters which are its length and breadth respectively while
the other function for printing the area of square has one parameter which is the side of
the square.
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

class Print
{
public:
    void print(int length, int breadth)
    {
        cout << "rectangle: " << length * breadth << endl;
    }
    void print(int side)
    {
        cout << "square : " << side * side;
    }
};

int main()
{
    Print num;
    num.print(10, 20);
    num.print(10);

    return 0;
}