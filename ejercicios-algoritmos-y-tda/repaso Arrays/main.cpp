#include <iostream>
//Cargar 10 números enteros cualesquiera en un array

using namespace std;

int main()
{
    int numero[10];

    for (int i=0; i<=9 ; i++)
    {
        cout << "Ingrese sus numeros en array" << endl;

        cin>> numero[i];


    }

    for (int j=0; j<=9 ; j++)
    {
        cout<< numero[j];
    }

    return 0;
}
