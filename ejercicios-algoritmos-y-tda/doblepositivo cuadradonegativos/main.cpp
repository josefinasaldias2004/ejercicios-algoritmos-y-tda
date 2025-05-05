#include <iostream>

using namespace std;

int main()
{
int numero;
 for(int i=1; i<=30; i++ )
{
    cout << "ingrese un numero" << endl;
    cin>>numero;
    if(numero>0){
    cout<<numero*2<<endl;
    }
    if (numero<0)
{
cout<<numero*numero;
}
else{
cout<<"el numero es 0";
}
}
    return 0;
}
