#include <iostream>
using namespace std;

void mu(int* new_Array){
	int max=-1000;
	int pred_max=-1100;
	int proizv;
	for(int i=0; i<10; i++){
		if(max<new_Array[i]){
			pred_max = max;
			max=new_Array[i];
		}
	}
	proizv=max*pred_max;
	cout<<proizv<<endl;
}

int main()
{
	int new_Array[10];
	for (int i=0; i<10; i++){
		new_Array[i]=i;
		cout<<new_Array[i]<<" ";
	}
	cout<<"\nproizvedenie: ";
	mu(new_Array);
}
