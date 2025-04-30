#include <iostream>
using namespace std;

int main()
{

    int Score;

    cout << "Ingrese su puntaje de estrellas del 1-5 " << endl;
    cin >> Score;

    switch (Score)
    {
    case 1:
        cout << "Su puntaje es lamentable" << endl;
        break;

    case 2:
        cout << "Su puntaje es pesimo" << endl;
        break;

    case 3:
        cout << "Su puntaje es mejorable" << endl;
        break;

    case 4:
        cout << "Su puntaje esta decente" << endl;
        break;

    case 5:
        cout << "Su puntaje es muy bueno" << endl;
        break;

    default:
        cout << "Su numero de estrellas no esta en el rango" << endl;
        break;
    }
}