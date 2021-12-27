#include <iostream>

using namespace std;

long double f(int N)
{
    if (N < 0) 
    {
        return 0; 
    }
    if (N == 0) 
    {
        return 1; 
    }
    else {
        return N * f(N - 1); 
    }
}

int main()
{
    int N = 9;
   
    cout << N << " = " << f(N) << endl << endl; // f(N) - функция для вычисления факториала.
    return 0;
}
