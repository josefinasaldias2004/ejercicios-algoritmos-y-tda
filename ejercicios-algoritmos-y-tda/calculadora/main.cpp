#include <iostream>

using namespace std;

int main()
{
int numero1, numero2, opcion;
    cout<<"ingrese el primer numero"<<endl;
    cin>>numero1;
    cout<<"ingrese el segundo numero"<<endl;
    cin>>numero2;

    cout << "Que desea usted hacer? \n 1.Sumar 2 numeros \n 2. Restar dos numeros \n 3.multiplicar dos numeros \n 4.dividir dos numeros" << endl;
    cin>>opcion;
    switch(opcion){
    case 1:
    cout<< numero1+numero2;
    break;
    case 2:
    cout<< numero1-numero2;
    break;
    case 3:
    cout<<numero1*numero2;
    break;
    case 4:
    if(numero2==0){
    cout<<"NO SE PUEDE DIVIDIR POR 0";
    }
    else{
    cout<<numero1/numero2;
    }
    break;
    }

    return 0;
}
