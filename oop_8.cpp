/*
8. Suppose you have a Bank with an initial amount of $50 and you have to add some more
amount to it. Create a class 'AddAmount' with a data member named 'amount' with an
initial value of $50. Now make two constructors of this class as follows:
a. without any parameter - no amount will be added to the  Bank
b. Having a parameter which is the amount that will be added to the Bank
Create an object of the 'AddAmount' class and display the final amount in the
Bank.
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
class AddAmount
{
    double amount = 50;

public:
    AddAmount()
    {
    }
    AddAmount(int amnt)
    {
        amount += amnt;
    }
    void displayamount()
    {
        cout << "Amount: " << amount << endl;
    }
};
int main()
{
    AddAmount obj1;
    AddAmount obj2(50);
    obj1.displayamount();
    obj2.displayamount();

    return 0;
}
