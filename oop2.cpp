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
class members{
    public:
    string name,phone_num,address;
    int age;
    double salary;
    void printSalary(){
        cout<<"Salary: "<<salary<<endl;
    }

};
class Emloyee:public members{
    public:
    string specialization;
    void displaydetails(){
        cout<<"name: "<<name<<endl<<"Phone: "<<phone_num<<endl;
        cout<<"age: "<<age<<endl<<"specialization: "<<specialization<<endl;
        printSalary();
    }
    
};
class manager:public members{
    public:
    string dept;
    void displaydetails(){
        cout<<"name: "<<name<<endl<<"Phone: "<<phone_num<<endl;
        cout<<"age: "<<age<<endl<<"department: "<<dept;
        printSalary();
    }
};
int main()
{
    Emloyee e1;
    e1.name = "David";
    e1.age = 25;
    e1.salary = 35000.00;
    e1.specialization = "Software Engineering";
    e1.displaydetails();
    manager m1;
    cout<<"details of manager\n";
    m1.name = "TOny stark";
    m1.age = 65;
    m1.salary = 55000.00;
    m1.dept = "cse\n";
    m1.displaydetails();

    return 0;
}
