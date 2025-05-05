/*
Ejercicio 9: Ingresar por teclado tres valores que representan la cantidad de gajos de pinos,
robles y álamos en un vivero. Se pide un programa que realice lo siguiente:
a. Calcular el monto de los ingresos del vivero, sabiendo que cada gajo se vende a 5.2
pesos, y a ese monto le reste los gatos de mantenimiento del vivero (30% de los
ingresos). La diferencia entre ingresos y gastos será la ganancia neta del vivero.
b. El vivero debe abonar un impuesto a las ganancias, cuando su ganancia neta supere
los $1200. Determine si debe pagarlo, y cuál será el monto (sabiendo que es un 3% de
las ganancias netas)
*/
#include <iostream>

using namespace std;

int main()
{
  int gajosPinos, gajosRobles, gajosAlamos;
  float totalGajos,
   gastosMantenimiento , ingreso , gananciaNeta, impuesto;
    cout << "ingrese la cantidad de gajos de pino " << endl;
    cin>>gajosPinos;
        cout << "ingrese la cantidad de robles" << endl;
    cin>>gajosRobles;
        cout << "ingrese la cantidad de alamos" << endl;
    cin>>gajosAlamos;

    totalGajos= gajosAlamos + gajosPinos + gajosRobles;
    ingreso= totalGajos*5.2;
    gastosMantenimiento= ingreso*0.3;
    gananciaNeta=ingreso-gastosMantenimiento;
    impuesto= gananciaNeta*0.03;

    if (gananciaNeta>= 1200){
    cout<< "usted debe abonar el impuesto de "<<impuesto<< endl;
     }
    else {
    cout<< "no abona el impuesto"<<endl;
    }
    return 0;
}
