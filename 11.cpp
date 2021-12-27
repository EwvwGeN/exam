#include<iostream>
#include <string>

using namespace std;

class Index
{
private:
	string name;
	string street;
	int numberD;
	int numberK;
	string city;
	string area;
	int index;
public:
	Index(string name, string street, int numberD, int numberK, string city, string area, int index)
	{
		this->name = name;
		this->street = street;
		this->numberD = numberD;
		this->numberK = numberK;
		this->city = city;
		this->area = area;
		this->index = index;
	}
	void Information()
	{
		cout << "Name: " << name << endl;
		cout << "Street: " << street << endl;
		cout << "NumberD: " << numberD << endl;
		cout << "NumberK: " << numberK << endl;
		cout << "City: " << city << endl;
		cout << "Area: " << area << endl;
		cout << "Index: "<< index << endl;
	}
};
int main()
{
	Index I("Ekaterina", "Kavaleriskaya", 16, 238, "Ivanovo", "Ivanovo region", 153013);
	I.Information();
}