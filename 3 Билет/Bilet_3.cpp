
#include <iostream>
#include <string>
using namespace std;

class utka{

public:
	string name;
	
	void swim(){
		cout<<name<<" is swimming"<<endl;
	}
	
	void fly(){
		cout<<name<<" is flying"<<endl;
	}
	
	void quack(){
		cout<<name<<" is quacking"<<endl;
	}
};

int main(){
	utka the_best;
	the_best.name="UTOCHKA";
	the_best.swim();
	the_best.fly();
	the_best.quack();
}
