#include <iostream>

using namespace std;

extern void agregarProducto (string descripcion, int cantidad, double precio);

void productos (int opcion)
{
    system ("cls");

    int opcionProducto = 0;

    switch (opcion)
    {
    case 1:
    {
        
        cout << "BEBIDAS CALIENTES" << endl;
        cout << "*****************" << endl;
        cout << "1 - Capuccino" << endl;
        cout << "2 - Expresso" << endl;
        cout << "3 - cafe latte" << endl;
        cout << "4 - Cafe Moca" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;
                    
        switch (opcionProducto)
        {
        case 1:
            agregarProducto ("1 Capuccino - L 42.00", 1, 42);
            break;
                        
        case 2:
            agregarProducto ("1 Expresso -  L 35.00", 1, 35);
            break;
                        
        case 3:
            agregarProducto ("1 cafe latte -  L 38.00", 1, 38);
            break;
                        
        case 4:
            agregarProducto ("1 Cafe Moca -  L 45.00", 1, 45);
            break;
                        
        default:
            {
                cout << "opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system ("pause");

        break;
        
    }
    case 2:
    {
        cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        cout << "1 - Frappe de frutas" << endl;
        cout << "2 - Granita" << endl;
        cout << "3 - iced coffee" << endl;
        cout << "4 - soda" << endl;
        cout << endl;
        

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto ("1 Frappe de frutas - L 60.00", 1, 60);
            break;
                        
        case 2:
            agregarProducto ("1 Granita -  L 25.00", 1, 25);
            break;
                        
        case 3:
            agregarProducto ("1 iced coffee -  L 45.00", 1, 45);
            break;
                        
        case 4:
            agregarProducto ("1 soda -  L 20.00", 1, 20);
            break;
                        
        default:
            {
                cout << "opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system ("pause");
        break;
    }
    case 3:
    {
        cout << "REPOSTERIA" << endl;
        cout << "**********" << endl;
        cout << "1 - mollette" << endl;
        cout << "2 - torta de guineo" << endl;
        cout << "3 - cheescake" << endl;
        cout << "4 - pastel de tres leches" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionProducto;
                    
        switch (opcionProducto)
        {
        case 1:
            agregarProducto ("1 mollette - L 30.00", 1, 30);
            break;
                        
        case 2:
            agregarProducto ("1 torta de guineo -  L 30.00", 1, 30);
            break;
        
        case 3:
            agregarProducto ("1 cheescake - L 75.00", 1, 75);
            break;
        
        case 4:
            agregarProducto ("1 pastel de tres leches - L 65.00", 1, 65);
            break;
         
                        
        default:
            {
                cout << "opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system ("pause");
        break;
    }

    default:
        break;
    }
}