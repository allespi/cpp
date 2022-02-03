#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
int a=0, b=0; 
int resultado=0;
int suma, resta, multi, division;

cout << "ingrese el primer numero: "<<endl;
cin>> a;
cout << "ingrese el segundo numero: "<<endl;
cin>> b;

suma = a + b;
resta = a - b;
multi = a * b;
division = a / b;

cout <<" la suma es igual a: "<<suma<<endl;
cout <<" la resta es igual a: "<<resta<<endl;
cout <<" la multiplicacion es igual a: "<<multi<<endl;
cout << " la division es igual a: "<<division<<endl;



    return 0;
}
