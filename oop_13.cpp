/*
13. Create a class 'Student' with three data members which are name, age and address. The
 constructor of the class assigns default values to name as "unknown", age as '0' and address as
 "not available". It has two functions with the same name 'setInfo'. First function has two
 parameters for name and age and assigns the same whereas the second function takes has three
 parameters which are assigned to name, age and address respectively. Print the name, age and
 address of 5 students. [Hint- Use array of objects]
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

class Student
{
public:
    string name, address;
    int age;
    Student()
    {
        name = "Unknown";
        age = 0;
        address = "Not available";
    }
    void setInfo(string n, int a)
    {
        name = n;
        age = a;
    }
    void setInfo(string n, int a, string add)
    {
        name = n;
        age = a;
        address = add;
    }
    void display()
    {
        cout << "Name: " << name << " age :" << age << " address: " << address << endl;
    }
};

int main()
{
    Student obj[10];
    obj[0].setInfo("David", 25, "USA");
    obj[1].setInfo("kelvin", 15, "London");
    obj[2].setInfo("kelvin", 15, "London");
    obj[3].setInfo("kelvin", 15, "London");
    obj[4].setInfo("kelvin", 15, "London");
    obj[5].setInfo("kelvin", 15, "London");
    for (int i = 0; i < 5; i++)
    {
        obj[i].display();
    }

    return 0;
}