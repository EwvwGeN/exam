#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Employee

{

private:

    string Familya;

    int Staj;

    string position;

    int hours;

    int hourWork;

public:

    Employee(string FIO, int Staj, string position, int hours, int hourWork)

    {

        this->Familya = FIO;

        this->Staj = Staj;

        this->position = position;

        this->hours = hours;

        this->hourWork = hourWork;

    }

    void showInfo()

    {

        cout << "FIO: " << Familya << endl;

        cout << "Staj: " << Staj << endl;

        cout << "Position: " << position << endl;

        cout << "Hours: " << hours << endl;

        cout << "The cost of one hour of work: " << hourWork << endl;

        cout << endl;

    }

};

int main()

{

    Employee One("Batasov Sergey Olegovich", 3, "Disigner", 204, 450);

    Employee Two("Butusov Alexander Olegovich", 6, "IT Support Manager", 560, 456);

    One.showInfo();

    Two.showInfo();
    
    return 0;
}