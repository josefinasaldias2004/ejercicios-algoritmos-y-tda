#include <iostream>

using namespace std;
//se desea procesar un texto compuesto por cierto número de palabras, las cuales están formadas por una secuencia de letras.
// Cada palabra se separa de las demas con un espacio en blanco, o bien con combinaciones de blancos y signos de puntuacion.
// El texto termina cuando se ingresa un punto . Los unicos signos de puntuacion validos son la coma, el punto y coma y el punto. la carga
//del texto se hace letra por letra, resolver
//a)contar las palabras que tienen la expresion "la".
//b) calcular el promedio de letras por palabras  en el texto
int main()
{
    char letra, letraAnterior;
    int palabra=1;
    int la=0;
    int cantletras=0;
    int promedio;
    do
    {
        do
        {
            cout << "ingrese una letra" << endl;
            cin>>letra;
            if ((letraAnterior) == 'l' && (letra== 'a'))
            {

                la= la + 1;

            }


            if ((letra == '\t') || (letra==',' )||( letra==';'))
            {
                palabra= palabra+1;

            }
               else{


                if(letra != '.'){
                letraAnterior= letra;
                cantletras= cantletras+1;
                }
               }









        }
        while ( (letra!='.') && (letra!='$')&&(letra!= '#') && (letra!= '(')&&( letra!='{') && (letra!='/'));



    }
    while(letra!='.');
    cout<<"la cantidad de veces que aparecio (la) es de "<<la<<endl;
    promedio = (cantletras/palabra);
    cout<< "el promedio de cant letras * palabras es de "<<promedio<<endl;
    return 0;
}
