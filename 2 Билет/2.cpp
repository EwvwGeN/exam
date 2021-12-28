#include <iostream>
#include <windows.h>

using std:: cout;
using std:: endl;

int status(int);

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    status(101);
    return 0;
}

int status(int a)
{
    if ((a < 7) && (a >= 0))
    {
        cout << "Ваш статус: дошкольник" << endl;
    }
    else if ((a > 7) && (a < 14))
    {
        cout << "Ваш статус: школьник" << endl;
    }
    else if ((a >= 14) && (a < 18))
    {
        cout << "Ваш статус: подросток" << endl;
    }
    else if ((a >= 18) && (a < 24))
    {
        cout << "Ваш статус: юноша/девушка" << endl;
    }
    else if ((a >= 24) && (a < 55))
    {
        cout << "Ваш статус: мужчина/женщина" << endl;
    }
    else if ((a >= 55) && (a <= 100))
    {
        cout << "Ваш статус: дедушка/бабушка" << endl;
    }
    else if ((a < 0) || (a > 100))
    {
        cout << "Скорее всего вы ошиблись с возрастом" << endl;
    }
    return a;
}