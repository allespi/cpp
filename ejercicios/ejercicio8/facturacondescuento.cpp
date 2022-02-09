#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //datos de entrada 
    double subtotal = 0;
    double total = 0;
    double impuesto =0.15;
    int descuento = 0;
    double calculodesc = 0;
    double calculoimp = 0;

    cout << "ingrese el subtotal de la factura: ";
    cin >> subtotal;
    cout << "ingrese el descuento (o, 10, 15, 20)";
    cin >> descuento;

//proceso
    calculodesc = (subtotal * descuento) / 100;
    calculoimp = (subtotal - calculodesc) *0.15;
    total= subtotal - calculodesc + calculoimp;

//salida 
    cout << endl;
    cout << "Total a pagar es: "<<total;

    return 0;
}