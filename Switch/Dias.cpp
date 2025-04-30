#include <iostream>
using namespace std;

int main()
{

    int Day;
    cout << "Ingrese un numero del 1 al 7 " << endl;
    cin >> Day;

    switch (Day)
    {
    case 1:
        cout << "Usted eligio el dia lunes" << endl;
        break;

    case 2:
        cout << "Usted eligio el dia martes" << endl;
        break;

    case 3:
        cout << "Usted eligio el dia miercoles " << endl;
        break;

    case 4:
        cout << "Usted eligio el dia jueves " << endl;
        break;

    case 5:
        cout << "Usted eligio el dia viernes " << endl;
        break;

    case 6:
        cout << "Usted eligio el dia Sabado " << endl;
        break;

    case 7:
        cout << "Usted eligio el dia Domingo" << endl;
        break;

    default:
        cout << "Usted no eligio un dia dentro del rango" << endl;
        break;
    }

    return 0;
}