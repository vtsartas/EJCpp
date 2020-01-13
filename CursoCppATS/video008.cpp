// 008 - expresiones

#include <iostream>

using namespace std;

int main(){
    
    // EJERCICIO 5 - intercambiar valores de dos variables

    int a,b,comodin;
    cout<<"Introduce el valor de 'a': "; cin>>a;
    cout<<"Introduce el valor de 'b': "; cin>>b;

    cout<<"El valor original de 'a' es "<<a<<" y el de 'b' es "<<b<<".\n";
    comodin=a;
    a=b;
    b=comodin;
    cout<<"El valor final de 'a' es "<<a<<" y el de 'b' es "<<b<<".\n";

    // EJERCICIO 6 - nota media de 4 alumnos

    int NUM_ALUMNOS=4;
    int notas[NUM_ALUMNOS];
    int i,media,sumanotas=0;
    for (i=0;i<NUM_ALUMNOS;i++){
        cout<<"Introduce la nota del alumno "<<i<<": "; cin>>notas[i];
        sumanotas+=notas[i];
    }
    media=sumanotas/NUM_ALUMNOS;
    cout<<"La media de las "<<NUM_ALUMNOS<<" notas es "<<media<<".";

    return 0;

} // fin del main