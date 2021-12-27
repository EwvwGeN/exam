#include <iostream>

int main(int argc, char const *argv[]){
    int number = 15;
    bool trigger = 0;
    for ( int i = 1; i > 0; (!trigger) ? i++ : i-=2){
        if(i <= 0){
            break;
        }else{
            if (i == 15){
                trigger = 1;
            }
            std::cout << i << " ";
        }
    }
    
    return 0;
}