#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char treygolnik('@');
    int j=20,l=0;
    for (int i=0; i <= 7;i++)
    {
        cout << setw(j/2) << setfill(' ') << ' ' << setw(l) << setfill(treygolnik);
        j-=2, l+=2;
        cout<<"\n";
    };
    return 0;
}