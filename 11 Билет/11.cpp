#include <iostream>
#include <string>
using namespace std;
class MailAddress
{
public:
	string name;
	string adress;
	int index;
	MailAddress(string n, string d, int a)
	{
		name = n; index = a; adress = d;
		
	}
	void display()
	{
		cout << "____________________________________________________________" << endl;
		cout << "Name:  " << name << endl;
		cout << "Address:  " << adress << endl;
		cout << "Index:  " << index << endl;
		cout << "____________________________________________________________" << endl << "" << endl;

	}
	~MailAddress() {};
};
int main()
{
	MailAddress ONE = MailAddress("PUPKIN IVAN FEDOROVICH", "Ivanovo, Ivanovo oblast, Gideleva street, 34/2", 153022);
	MailAddress TWO = MailAddress("PRESNOV DMITRII EVGENIEVICH", "Ivanovo, Ivanovo oblast, Slobodskaya street, 15/33", 153043);
	MailAddress THREE = MailAddress("PAUL MILAN ", "Ivanovo, Ivanovo oblast, Lenina street, 44", 153019);
	MailAddress FOUR = MailAddress("FOKINA VERONICA WORSHIP", "Ivanovo, Ivanovo oblast, Timeryazeva street, 29", 153041);
	MailAddress FIVE = MailAddress("LULINA LUDMILA IVANOVNA", "Ivanovo, Ivanovo oblast, Lulina street, 3", 153028);
	ONE.display();
	TWO.display();
	THREE.display();
	FOUR.display();
	FIVE.display();
	return 0;
}