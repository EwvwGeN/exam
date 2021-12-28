#include <iostream>
#include <time.h>
using namespace std;

float avr (float* arr, int size);

int main(int argc, char const *argv[]){
    int size = 5;
    float *array = new float[size];
    srand(static_cast<unsigned int>(time(nullptr)));
    for (int i = 0; i < size; i++){
        array[i] = rand() % 100 / 0.3;
        cout << array[i] << " ";
    }
    cout << "" << endl;
    cout << "Avarage value: " << avr(array, size) << endl;
    return 0;
}

float avr (float* arr, int size){
    float avr = 0;
    for (int i = 0; i < size; i++){
        avr += arr[i];
        
    }
    avr = avr / size;
    return avr;
}