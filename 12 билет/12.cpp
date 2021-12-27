#include <iostream>

void check(int first, int second){
    int substraction = first - second;
    if ((substraction == 2 || substraction < 0) && substraction != -2){
        std::cout << "First player win!" <<  std::endl;
    }else{
        std::cout << "Second player win!" <<  std::endl;
    }
}

int main(int argc, char const *argv[]){
    int firs_p = 1;
    int second_p = 3;
    check(firs_p, second_p);
    return 0;
}
