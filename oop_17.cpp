/*
17. All the banks operating in Bangladesh are controlled by BB. BB has set a well-defined
guideline (e.g. minimum interest rate, minimum balance allowed, maximum withdrawal
limit etc) which all banks must follow. For example, suppose BB has set minimum
interest rate applicable to a saving bank account to be 4% annually; however, banks are
free to use 4% interest rate or to set any rates above it.
*/
#include <bits/stdc++.h>
using namespace std;
class Bank
{
public:
    double minimum_interest_rate;
    double minimum_balance;
    double maximum_withdraw_limit;
    Bank()
    {
        minimum_interest_rate = 4.0;
        minimum_balance = 1000.0;
        maximum_withdraw_limit = 50000.0;
    }
    void display_guideline()
    {
        cout << "minimum_interest_rate " << minimum_interest_rate << "%" << endl;
        cout << "minimum_balance " << minimum_balance << endl;
        cout << "maximum_withdraw_limit " << maximum_withdraw_limit << endl;
    }
};
class specificBank : public Bank
{
public:
    double minimum_rate, minimum_balance, withdraw_limit;
    specificBank(double mr, double mb, double wl)
    {
        minimum_rate = mr;
        minimum_balance = mb;
        withdraw_limit = wl;
    }
    void displaydetails()
    {
        cout << minimum_rate << endl;
        cout << minimum_balance << endl;
        cout << withdraw_limit << endl;
    }
};
int main()
{
    Bank obj;
    obj.display_guideline();
    specificBank obj2(5.5, 15000, 60000);
    obj2.displaydetails();
    return 0;
}