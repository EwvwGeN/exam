#include <iostream>
#include <cmath>
using namespace std;

void function(int a, int b, int c)//создается функция 
{   
    int buffer = 0;
    cout << a << " ";
    cout << b << " ";
    cout << c << " ";
    for (int n = 0; n < 7; n++)//для отображения первых 10-ти чисел
    {
        buffer = a + b + c;
        a = b;
        b = c;
        c = buffer;
        cout << buffer << " ";
    }
}

int main() //переменным присваиваем первые 3 значения
{
    int a = 0;
    int b = 1;
    int c = 1;
    function(a, b, c);

}