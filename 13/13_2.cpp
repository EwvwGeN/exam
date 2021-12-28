#include <iostream>

enum CarState {
    off = 0,
    on = 1,
};

class Car {
private:
    CarState state = off;
public:
    void Start() {
        std::cout << ((state) ? "I start" : "I'm already started") << std::endl;
        state = on;
    }
    void Stop() {
        std::cout << ((state) ? "I'm already stopped" : "I stop") << std::endl;
        state = off;
    }
    int Drive(int howLong) {
        return (state) ? howLong * 60 : 0;
        }
};


int main() {
    Car myFirstCar;
    myFirstCar.Start();
    std::cout << myFirstCar.Drive(50) << std::endl;
    return 0;
}