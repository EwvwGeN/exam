#include <iostream>
#include <string>

using namespace std;

string convertTemp (int temperature, char converTo)
{   
    float converTemp;
    if (converTo == 'F')
    {
        converTemp = 1.8 * temperature + 32;
    }
    if (converTo == 'C')
    {
        converTemp = (temperature - 32) / 1.8;
    }
    return to_string(converTemp);
}
int main(int argc, char const *argv[])
{
    int tC = 30;
    char c = 'C';
    int tF = 56;
    char f = 'F';
    cout << convertTemp(tC, c) << endl;
    cout << convertTemp(tF, f) << endl;
}