/*
6.Write a program to print the names of students by creating a Student class. If no name
is passed while creating an object of the Student class, then the name should be
"Unknown", otherwise the name should be equal to the String value passed while
creating the object of the Student class.
*/
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    Student(string nm)
    {
        if (nm.empty())
        {
            name = "Unknown";
        }
        else
            name = nm;
    }
    void displayName()
    {
        cout << "Name of the Student: " << name << endl;
    }
};

int main()
{
    Student s1("Soumen Sen");
    Student s2("");
    s1.displayName();
    s2.displayName();
    return 0;
}