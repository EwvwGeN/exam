#include <iostream>
using namespace std;

void random(int(*a), int n)
{
	for (int i = 0; i < n; i++) {
		
			a[i] = rand() % 130 - 80;
			cout <<"a["<<i<<"]="<< a[i] <<endl;
	}
}
void nechet(int(*a), int n)
{
	for (int i = 0; i < n; i++)
	{
		if ((a[i] + 1) % 2 == 0)
			cout << "a[" << i << "]=" << a[i] << endl;
	}
}
int main()
{
	cout << "enter size of massive -----> ";
	int n;
	cin >> n;
	int *A= new int [n];
	cout << "Massive:" << endl;
	random(A, n);
	cout << "Odd numbers:" << endl;
	nechet(A, n);
	cout << "\n";
	return 0;
}
