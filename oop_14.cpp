/*
 14. Create a class 'Degree' having a function 'getDegree' that prints "I got a degree". It has two
 subclasses namely 'Undergraduate' and 'Postgraduate' each having a function with the same
 name that prints "I am an Undergraduate" and "I am a Postgraduate" respectively. Call the
 function by creating an object of each of the three classes.
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
class Degree
{
public:
    void getdegree()
    {
        cout << "I got a degree\n";
    }
};
class undergraduate : public Degree
{
public:
    void getdegree()
    {
        cout << "I am undergraduate\n";
    }
};
class postgraduate : public Degree
{
public:
    void getdegree()
    {
        cout << "I am postgraduate\n";
    }
};
int main()
{
    Degree deg;
    undergraduate undeg;
    postgraduate postdeg;
    deg.getdegree();
    undeg.getdegree();
    postdeg.getdegree();
    return 0;
}
