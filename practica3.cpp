#include <iostream>

using namespace std;

int main()
{
    int n = 0;

    cout << "Ingrese un numero entero: \n";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << "\n";
        }
    }

    return 0;
}
