#include <iostream>

//se ingresa por teclado un conjunto de números ,uno a uno. contar cuantas veces se presenta el 10, el 20, el 30 y el 40, y cuantos numeros distintos a ellos se presentan, cortar el proceso cuando el nnummero ingresado sea -1.

using namespace std;

int main()
{
    int numero, contador10, contador20, contador30, contador40, contadorotronumeros;

    cout << "ingrese un numero " << endl;
    cin>>numero;
    while (numero !=-1){
        switch (numero)
        {
        case 10:
            contador10=contador10+1;
            break;
        case 20:
            contador20= contador20 +1;
            break;
        case 30:
            contador30 = contador30 + 1;
            break;
        case 40:
            contador40= contador40+1;
            break;
            default: contadorotronumeros = contadorotronumeros + 1;
            break;
        }
    cout<< "ingrese un nunmero"<<endl;
    cin>>numero;
    }
    cout<< "las veces que el numero 10 fue ingresado fueron  " <<contador10<< " las veces que el 20 fue ingresado fueron  "<<contador20<< " el 30 fueron "<<contador30<<" y el 40 fueron "<<contador40<<" otros numeros "<<contadorotronumeros;
    return 0;
}
