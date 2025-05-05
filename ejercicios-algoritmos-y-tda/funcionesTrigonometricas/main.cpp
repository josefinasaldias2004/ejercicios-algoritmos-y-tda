#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int opcion, numero;

    cout << "Que valor desea usted ingresar?" << endl;
    cin >> numero;
    cout << "que deseas hacer \n 1. sin(x) \n 2.cos(x) \n 3.tan(x)" << endl;
    cin >> opcion;


    switch(opcion){
        case 1:
            cout << "el numero es de "<<sin(numero)<<endl;
        break;
        case 2:
            cout<<"el numero es de "<<cos(numero)<<endl;
        break;
        case 3:
            cout<<"el numero es de "<<tan(numero)<<endl;
        break;
    }
}
