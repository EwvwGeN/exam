#include <iostream>
using namespace std;

int** zapolnenie (int M, int N)
{
    int** arr = new int* [M]; 

    for (int i = 0; i < M; i++)

    {

        arr[i] = new int[N];

    }
 
    for (int i = 0; i < M; i++) 
    { 
        // заполнение матрицы

        for (int j = 0; j < N; j++) 
        {
            arr[i][j] = 1 + N * i + j;
        }
    }
    return arr;
}

int main(int argc, char const *argv[])

{

int M = 6;
int N = 3;

    // создание динмаческой матрицы
    int** matrix = zapolnenie(M,N); 
    
    for (int i = 0; i < M; i++) 
    { 

        // Вывод матрицы
        for (int j = 0; j < N; j++) 
        
        {

            cout << matrix[i][j] << '\t';
        }
        cout << endl;
    }
    return 0;
}

