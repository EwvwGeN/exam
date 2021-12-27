#include <iostream>
#include <string>

using namespace std;

class Animals 
{
public:
    string location;
    string boundaries;
    void sleep()
    {
        cout << "Animal is sleeping" << endl;
    }
    virtual void display() = 0;
};

class Lion : public Animals
{
public:
    void display() override
    {
        cout << "Location of lion is " << location << endl;
        cout << "Boundaries of lion is " << boundaries << endl;
    }
};

class Cat : public Animals
{
public:
    void display() override
    {
        cout << "Location of cat is " << location << endl;
        cout << "Boundaries of cat is " << boundaries << endl;
    }
};

int main(int argc, char const *argv[])
{
    Lion Lev;
    Lev.location = "Africa";
    Lev.boundaries = "???";
    Lev.display();
    Lev.sleep();
    Cat kotik;
    kotik.location = "Australia";
    kotik.boundaries = "???";
    kotik.display();
    kotik.sleep();
    return 0;
}
