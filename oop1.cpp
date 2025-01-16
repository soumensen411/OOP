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
class print
{
public:
    void printfun()
    {
        cout << "This is a parent class\n";
    }
};
class child : public print
{
public:
    void childfun()
    {
        cout << "This is a child class\n";
    }
};
int main()
{
    print p1;
    child c1;
    
    p1.printfun();
    c1.childfun();
    c1.printfun();

    return 0;
}
