#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //datos de entrada 
    
    int a = 0;
    int b = 0;
    int result = 0;

    //proceso

    cout << "ingrese el valor de a: ";
    cin >> a;
    cout << endl;
    cout << "ingrese el valor de b: ";
    cin >> b;

    //proceso

    result = a + b;
    
    //salidad

    cout << "la suma es: "<< result << endl;

    return 0;
}
