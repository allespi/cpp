#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int pares = 0;
    int impares = 0;
    int total = 0;

    cout << endl;

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            pares = pares + i;
        }
        else
        {
            impares += i;
        }

        total = pares + impares;

        
        cout << i << "  ";
    }

    cout << endl;
    
    cout << "Total pares: " << pares << endl;
    cout << "Total impares: " << impares << endl;
    cout << "Suma total de pares + impares: " << total;
    
    cout << endl;

    return 0;
}