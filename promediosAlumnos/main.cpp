#include <iostream>
//se ingresan 2 notas para 20 alumnos ,calcular el promedio por alumno y el general
using namespace std;

int main()
{
int nota1, nota2, sumapromedios, promedioalumno;
    cout << "Hello world!" << endl;
    for( int i=1; i<30; i++){
    cin>>nota1;
    cin>>nota2;
    promedioalumno = (nota1+nota2)/2;
    cout<< promedioalumno<<endl;
    sumapromedios = sumapromedios+ promedioalumno;
    }
    cout<<sumapromedios/30<<endl;
        return 0;
}
