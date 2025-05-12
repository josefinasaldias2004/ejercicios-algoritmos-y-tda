#include <iostream>

using namespace std;

int main()
{
    int kg, contador10, contador20, contador30, contador40, contadorotronumeros=0;

    do
    {
        cout << "ingrese los kilos" << endl;
        cin>>kg;
        if (kg>0 )
        {
            switch (kg)
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
            default:


                contadorotronumeros = contadorotronumeros + 1;

                break;
            }
        }
        else
        {
            cout<<"usted no puede ingresar kilos negativos"<<endl;
        }
    }
    while(kg!=-1);
    cout<< "las veces que el numero 10 fue ingresado fueron  " <<contador10<< " las veces que el 20 fue ingresado fueron  "<<contador20<< " el 30 fueron "<<contador30<<" y el 40 fueron "<<contador40<<" otros numeros "<<contadorotronumeros;

    return 0;
}
