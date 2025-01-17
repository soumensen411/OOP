/*
11. Create a class to print an integer and a character using two functions having the same
name but different sequence of the integer and the character parameters.
For example, if the parameters of the first function are of the form (int n, char c), then
that of the second function will be of the form (char c, int n).
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
    void print(int num, char c)
    {
        cout << "number: " << num << " char :" << c << endl;
    }
    void print(char c, int num)
    {
        cout << "char : " << c << " number: " << num << endl;
    }
};

int main()
{
    Print num;
    num.print(10, 'A');
    num.print('A', 10);

    return 0;
}