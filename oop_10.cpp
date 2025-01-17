/*
10. Create a class named 'PrintNumber' to print various numbers of different datatypes by
creating different functions with the same name 'printn' having a parameter for each
datatype.
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

class PrintNumber
{
public:
    void printin(int num)
    {
        cout << num << endl;
    }
    void printin(float num)
    {
        cout << num << endl;
    }
    void printin(double num)
    {
        cout << num << endl;
    }
    void printin(ll num)
    {
        cout << num << endl;
    }
};

int main()
{
    PrintNumber num;
    num.printin(5);
    num.printin(5.555);
    num.printin(5.104);
    num.printin(500000000000000000);

    return 0;
}