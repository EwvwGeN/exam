#include <iostream>
#include <cmath>
using namespace std;

void mu(int a, int b, int n){
	float y;
	for(int x = 0; x <= 30; x+=n ) {
		y = pow((a*x + b), 0.333);
		cout <<x<<" "<<y<<endl;
	}
}

int main()
{
	int b = 2;
	int a = 1.5;
	int n = 1;
	mu(a,b,n);
}
