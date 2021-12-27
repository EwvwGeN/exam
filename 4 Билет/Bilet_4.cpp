#include <iostream>
using namespace std;

void mu(int* new_Array){
	int max=-1000;
	for(int i=0; i<10; i++){
		if(max<new_Array[i]){
			max=new_Array[i];
		}
	}
	cout<<max<<endl;
}

int main()
{
	int new_Array[10];
	for (int i=0; i<10; i++){
		new_Array[i]=i;
		cout<<new_Array[i]<<" ";
	}
	cout<<"\nmaximum: ";
	mu(new_Array);
}
