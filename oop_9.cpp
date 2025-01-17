/*
9.  Create a class named 'Programming'. While creating an object of the class, if nothing is
passed to it, then the message "I love programming languages" should be printed. If
some String is passed to it, then in place of "programming languages" the name of that
String variable should be printed.
For example, while creating the object if we pass "cpp", then "I love cpp" should be
printed.
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

class Programming{
    public:
    Programming(){
        cout<<"I love Programming language\n";
    }
    Programming(string str){
        cout<<"I love "<<str<<"\n";
    }
};
int main()
{
    Programming obj;
    Programming obj1("Python");
    return 0;
}