#include <iostream>
#include <windows.h>

using std:: cout;
using std:: endl;

void calc(int, int);

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    calc(10, 10);
    return 0;
}

void calc(int a, int b)
{
    if ((a < 0) || (b < 0))
    {
        cout << "Ошибка! Числа должны быть положительными!" << endl;
    }
    else
    {
        int show;
        for (int i = 1; i <= a; i++)
        {
            cout << i << "\t";
            for (int j = 2; j <= b; j++)
            {
            show = j * i;
            cout << show << "\t";
            }
            cout << endl; 
        }
    }
}