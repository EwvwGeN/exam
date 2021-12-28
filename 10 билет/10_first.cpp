#include <iostream>
#include <cmath>
using namespace std;

void function(int f[])//создается функция 
{
    for (int n = 3; n < 13; n++)//для отображения первых 10-ти чисел
    {
        f[n] = f[n - 1] + f[n - 2] + f[n - 3];
        cout << f[n];
        cout << "" << endl;
    }
}

int main() //переменным присваиваем первые 3 значения
{
    int a = 0;
    int b = 0;
    int c = 0;

    cout << " enter 1st element: ";
    cin >> a;
    cout << " enter 2nd element: ";
    cin >> b;
    cout << " enter 3rd element: ";
    cin >> c;

    int f[10];
    f[0] = a;
    f[1] = b;
    f[2] = c;

    function(f);

}