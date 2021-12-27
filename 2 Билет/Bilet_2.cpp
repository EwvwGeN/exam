#include <iostream>
#include <cstring>
using namespace std;

class Status
{
private:
	string name;
	int age;
public:
	Status(string name,int age)
	{
		this->name = name;
		this->age = age;
    }

	void Compare()
	{
		if (age < 7) 
		{
			cout << name << " Child"; 
		}
		else if ((age >= 7) && (age <= 17))
		{
			cout << name <<" School"; 
		}
		else if (age >= 17 && age < 22)
		{
			cout << name << " Student";
		}
		else if (age >= 22 && age < 60)
		{
			cout << name << " Worker";
		}
	}
};

int main()
{
	setlocale(LC_ALL, "RU");
	Status Stas("Stas", 48);
	Stas.Compare();

	cout << endl;

	Status Kirill("Kirill", 18);
	Kirill.Compare();

	return 0;
}
