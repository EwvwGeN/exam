#include <iostream>

int main(int argc, char const *argv[]){
    int number = 15;
    for ( int i = 1; i <= number; i++){
            std::cout << i << " ";
    }
    for ( int i = number-2; i >= 1; i-=2){
            std::cout << i << " ";
    }
    
    return 0;
}