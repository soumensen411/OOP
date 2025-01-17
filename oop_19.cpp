/*
19. Create two classes named Mammals and MarineAnimals. Create another class named
BlueWhale which inherits both the above classes. Now, create a function in each of
these classes which prints "I am mammal", "I am a marine animal" and "I belong to both
the categories: Mammals as well as Marine Animals" respectively. Now, create an
object for each of the above class and try calling
a. function of Mammals by the object of Mammal
b. of MarineAnimal by the object of MarineAnimal
c. function of BlueWhale by the object of BlueWhale
d. function of each of its parent by the object of BlueWhale
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
class Mammals
{
public:
    void printmam()
    {
        cout << "I am mammal\n";
    }
};
class Marine_Animals
{
public:
    void printmarine()
    {
        cout << "I am Marine_Animals\n";
    }
};
class BlueWhale : public Mammals, public Marine_Animals
{
public:
    void printblue()
    {
        cout << "I belong to both the categories : Mammals as well as Marine Animals\n ";
    }
};
int main()
{
    Mammals mam;
    mam.printmam();
    Marine_Animals marine;
    marine.printmarine();
    BlueWhale blue;
    blue.printblue();
    blue.printmam();
    blue.printmarine();

    return 0;
}