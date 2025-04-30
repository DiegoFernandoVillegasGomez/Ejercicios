#include <iostream>
using namespace std;

int main()
{

    float Conversion, Dolar;
    int Opcion;

    cout << "Bienvenido al sistema de conversion de dolar a la maneda de su elexion" << endl;
    cout << "1. Conversion a peso yen " << endl;
    cout << "2. Conversion a colón " << endl;
    cout << "3. Conversion a reales " << endl;
    cout << "Opcion: " << endl;
    cin >> Opcion;

    cout << "Ingrese la cantidad que quiere convertir" << endl;
    cin >> Dolar;

    switch (1)
    {
    case 1:
        Conversion = Dolar * 142.83;
        cout << "Su conversion es: " << Conversion << endl;
        break;

    case 2:
        Conversion = Dolar * 504.97;
        cout << "Su conversion es: " << Conversion << endl;
        break;

    case 3:
        Conversion = Dolar * 5.67;
        cout << "Su conversion es: " << Conversion << endl;
        break;

    default:
        cout << "Su eleccion esta fuera del rango" << endl;
        break;
    }

    return 0;
}