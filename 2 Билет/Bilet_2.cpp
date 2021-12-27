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
			cout << name << " - ��� ����������!"; 
		}
		else if ((age >= 7) && (age <= 17))
		{
			cout << name << " - ��� ��������!"; 
		}
		else if (age >= 17 && age < 22)
		{
			cout << name << " - ��� �������!";
		}
		else if (age >= 22 && age < 60)
		{
			cout << name << " - ��� ��������! ";
		}
	}
};

int main()
{
	setlocale(LC_ALL, "RU");
	Status Stas("Stas", 18);
	Stas.Compare();

	cout << endl;

	Status Jkonst("�������", 35);
	Jkonst.Compare();

	return 0;
}
