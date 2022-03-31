#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int d1;
    int i;  
    int d2;
    string lanzar;
    int tirod;
    
    tirod= d1 + d2;

    while (true)
    {
        cout << "**************************************************" << endl;
        cout << "             Bienvenido al juego                  " << endl; 
        cout << "**************************************************" << endl << endl;
        
        cout<<"Presione cualquier tecla para lanzar los dados: "<< endl;
        cin >> lanzar;

        system ("cls");
        for (int i = 0; i <= 3; i++)
        {
        srand (time (NULL));
        d1 = rand()% 6+1;
        d2 = rand()% 6+1;  
        }
        
        cout << "Dado 1: "<< d1 << endl;
        cout << "Dado 2: "<< d2 <<endl;
                
        cout<<"La suma de los dados es: "<< tirod << endl <<endl;
        
        if (tirod == 4 || tirod == 6 || tirod == 8)
        {
            cout<< endl << "***********************************"<< endl;
            cout<< endl << "            Haz ganado             "<< endl;
            cout<< endl << "***********************************"<< endl;
            break;
        }
        if (tirod == 2 || tirod == 12)
        {
            cout<< endl << "***********************************"<< endl;
            cout<< endl << "       Haz perdido el juego        "<< endl;
            cout<< endl << "***********************************"<< endl;
            
            break;
        }
        
        system("pause");
        system ("cls");
    }

    return 0;
}