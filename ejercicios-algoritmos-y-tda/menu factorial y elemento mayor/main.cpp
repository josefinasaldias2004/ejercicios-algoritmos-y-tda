#include <iostream>

using namespace std;

int main()
{

    int opcion, numero, numeromayor= 0, factorial=1, cantidad , wiwi=0;
cout<<"------MENU------- \n1. factorial \n2. elemento mayor \n3. salir"<<endl;

        do{
    cout << "ingrese una opcion" << endl;
    cin>>opcion;
                switch(opcion){

            case 1:
                cout<< "ingrese un numero"<<endl;
                cin>> numero;
                for (int i=1; i<=numero ; i++){
                   if (numero>0){

                    factorial= factorial* i;
                }
                   }
                cout<< "el factorial de"<<numero<<" es de "<<factorial<<endl;


                break;

            case 2:
                  cout<< "ingrese la cantidad"<<endl;
                cin>> cantidad;
                  for (int i; i<cantidad; i++){
                cout<<"ingrese un numero"<<endl;
                        cin>>numero;
                    if (numero>= numeromayor){
                        numeromayor= numero;
                    }

                  }

                cout<<"el numero mayor fue "<< numeromayor<<endl;
                break;


            case 3:
                wiwi=1;
                break;
            default:
                cout<<"el numero no está disponible, ingrese una opcion nuevamente"<<endl;
                cin>>opcion;

                 break;

                }
        }while(wiwi == 0);


    return 0;
}
