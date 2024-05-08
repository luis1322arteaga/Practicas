#include <iostream>

using namespace std;

int main()
{
    char l;

    do
    {
        cout << "\n Ingrese una de las siguientes opciones para conocer el menu: \n a.\n b.\n c.\n d.\n e.\n O presione 'x' para salir. \n";
        cin >> l;
        switch (l)
        {
        case 'a':
            cout << "Pizza";
            break;
        case 'b':
            cout << "Pollo";
            break;
        case 'c':
            cout << "Carne";
            break;
        case 'd':
            cout << "Ensalada";
            break;
        case 'e':
            cout << "Dulces";
            break;
        case 'x':
            cout << "Saliendo del programa...";
            break;
        default:
            cout << "Opcion no valida";
            break;
        }
    } while (l != 'x');
    return 0;
}
