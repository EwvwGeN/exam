#include <iostream>

class Car {
public:
    void Start() {

    }
    void Stop() {

    }
    int Drive(int howLong) {
        return howLong * 60;
    }
};

int main() {
    Car myFirstCar;
    std::cout << myFirstCar.Drive(50) << std::endl;
    return 0;
}