#include <iostream>
#include <string>
using namespace std;
class EMPLOYEE
{
public:
	string surname;
	int stage;
	int dinh;
	int hour;
	EMPLOYEE(string s, int n, int a, int d)
	{
		surname = s; dinh = a; hour = d;  stage = n;
	}
	void display()
	{
		cout << "_____________________________" << endl;
		cout << "SURNAME:  " << surname <<endl;
		cout << "START WORK "<<stage << " YEARS AGO"<<endl;
		cout << "$ IN HOUR: " << dinh << endl;
		cout << "AMOUNT OF HOURS: " << hour << endl;
		cout << "PROFIT: " << dinh * hour <<"$"<< endl;
		cout << "_____________________________" << endl;
		cout << endl;
	}
};
int main()
{
	EMPLOYEE ONE = EMPLOYEE("LOPPY", 4,6,100);
	EMPLOYEE TWO = EMPLOYEE("HERRANY", 5,5,120);
	EMPLOYEE THREE = EMPLOYEE("MILAN", 10,15,150);
	EMPLOYEE FOUR = EMPLOYEE("POOL",3,4,80 );
	EMPLOYEE FIVE = EMPLOYEE("POTO",2,3,100);

	ONE.display();
	TWO.display();
	THREE.display();
	FOUR.display();
	FIVE.display();
	return 0;
}
