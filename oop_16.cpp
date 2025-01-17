/*
16.A class has an integer data member 'i' and a function named 'printNum' to print the
value of 'i'. Its subclass also has an integer data member 'j' and a function named
'printNum' to print the value of 'j'. Make an object of the subclass and use it to assign a
value to 'i' and to 'j'. Now call the function 'printNum' by this object.
*/
#include <bits/stdc++.h>
using namespace std;
class A
{

public:
    int i;
    void printnum()
    {
        cout << "I = " << i;
    }
};
class B : public A
{
public:
    int j;
    void printnum()
    {
        cout << "J = " << j;
    }
};
int main()
{
    B obj;
    obj.i = 50;
    obj.j = 70;
    obj.printnum();
    return 0;
}
