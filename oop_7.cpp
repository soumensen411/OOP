/*
7. Create a class named 'Rectangle' with two data members- length and breadth and a
function to calculate the area which is 'length*breadth'. The class has three constructors
which are:
1 - having no parameter - values of both length and breadth are assigned zero.
2 - Having two numbers as parameters - the two numbers are assigned as length and breadth respectively.
3 - Having one number as parameter - both length and breadth are assigned that number.
Now, create objects of the 'Rectangle' class having none, one and two parameters and
print their areas
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

class Rectangle
{
protected:
    int length, breadth;

public:
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }
    Rectangle(int l, int R)
    {
        length = l;
        breadth = R;
    }
    Rectangle(int num)
    {
        length = num;
        breadth = num;
    }
    void area()
    {
        cout << (length * breadth) << endl;
    }
};
int main()
{
    Rectangle Ract;
    Ract.area();
    Rectangle Ract2(5, 10);
    Ract2.area();
    Rectangle Rect3(5);
    Rect3.area();
    return 0;
}