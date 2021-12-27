#include <iostream>
using namespace std;

void mu(int m){
	for(int i=1; i<=m; i++){
		for(int j=1; j<=m; j++){
			cout<<i<<"*"<<j<<"="<<i*j<<endl;
		}
	}
}

int main()
{
	mu(5);
}
