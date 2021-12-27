#include <iostream>
#include <cmath>
using namespace std;

const int P = 3.14;

void mu(int b){
	float y;
	for(float x = 0; x < 3; x += 0.1) {
		y = 1 + sin(pow(b,3)+pow(x*P,3));
		cout <<x<<" P "<<"     "<<y<<endl;
	}
}

int main()
{
	int b = 2;
	mu(b);
}
