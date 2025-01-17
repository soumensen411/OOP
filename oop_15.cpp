/*
15. A boy has his money deposited $1000, $1500 and $2000 in banks-Bank A, Bank B and
Bank C respectively. We have to print the money deposited by him in a particular bank.
Create a class 'Bank' with a function 'getBalance' which returns 0. Make its three
subclasses named 'BankA', 'BankB' and 'BankC' with a function with the same name
'getBalance' which returns the amount deposited in that particular bank. Call the
function 'getBalance' by the object of each of the three banks.
*/
#include <bits/stdc++.h>
using namespace std;
class Bank
{
public:
    int getBalance()
    {
        return 0;
    }
};
class BankA : public Bank
{
public:
    int balance = 1000;
    int getBalance()
    {
        return balance;
    }
};
class BankB : public Bank
{
public:
    int balance = 1500;
    int getBalance()
    {
        return balance;
    }
};
class BankC : public Bank
{
public:
    int balance = 2000;
    int getBalance()
    {
        return balance;
    }
};
int main()
{
    BankA ba;
    BankB bb;
    BankC bc;
    cout << ba.getBalance() << endl;
    cout << bb.getBalance() << endl;
    cout << bc.getBalance() << endl;
    return 0;
}
