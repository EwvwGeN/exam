#include <iostream>
using namespace std;

class LengthConverter
{
private:
	
	double km_;
	double mil_;
public: LengthConverter(double e, string d)
{
	 mil_ = e;
	cout << e << "mil is " << e * 1, 609;
}
    
		LengthConverter(string s,double f)
		{
			km_ = f;
			cout << f << "km is" << f / 1, 609 ;
		}
};
int main()
{
	int m;
	cout << "enter, what you choose: mil or km" << endl << "enter '1'if you choose mil or enter '2'if you choose km ----->";
	cin >> m;
	if (m == 1)
	{
		double e;
		cout << endl << "you choose mil!" << endl;
		cout << endl << "enter amount of mil -----> ";
		cin >> e;
		LengthConverter	LengthConverter(e, "mil");
	}
	else if (m == 2)
	{
		double f;
		cout << endl << "you choose km" << endl;
		cout << endl << "enter amount of km-----> ";
		cin >> f;
		LengthConverter	LengthConverter("km", f);
	}
	else if (m>2)
	{
		cout << "sorry, try again!" << endl;
		return main();
	}
	
	

}
