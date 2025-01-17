/*
20. Make a class named Fruit with a data member to calculate the number of fruits in a
basket. Create two other class named Apples and Mangoes to calculate the number of
apples and mangoes in the basket. Print the number of fruits of each type and the total
number of fruits in the basket.
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
class fruits
{
public:
    int calfrute = 0;
    void totalfruit(int num)
    {
        calfrute += num;
    }
    void dispaly()
    {
        cout << "total fruit :" << calfrute << endl;
    }
};
class apple : public fruits
{
public:
    int applenum = 0;
    void totalapple(int app)
    {
        applenum = app;
        totalfruit(app);
    }

    void displayapple()
    {
        cout << "Apple: " << applenum << endl;
    }
};
class mangoes : public fruits
{
public:
    int mango = 0;
    void totalmango(int man)
    {
        mango = man;
        totalfruit(man);
    }
    void displaymango()
    {
        cout << "Mango: " << mango << endl;
    }
};
int main()
{
    apple app;
    mangoes man;
    app.totalapple(50);
    man.totalmango(70);
    app.dispaly();
    man.dispaly();
    return 0;
}