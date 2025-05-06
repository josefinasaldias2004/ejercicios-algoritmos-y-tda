#include <iostream>

using namespace std;

int main()
{
int l, numero, numeromayor=0, numeromenor=0;
    cout << "ingrese la cantidad de numeros a ingresar" << endl;
  cin>>l;

  for (int i; i<l; i++){
  cin>>numero;

  if (numero>numeromayor)
  {
  numeromayor= numero;

  }
  if ((numero<numeromenor) || (numeromenor= 0))
  {
  numeromenor= numero;
  }
  }
   cout<<"el numero mayor es"<<endl;
   cout<<"el numero menor es" <<endl;
    return 0;
}
