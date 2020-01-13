// 009 - expresiones

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    
    // EJERCICIO 7 - calificación final en base a 3 parciales

    float practicas,teorica,participacion,notafinal;
    cout<<"Introduce la nota práctica: "; cin>>practicas;
    cout<<"Introduce la nota teórica: "; cin>>teorica;
    cout<<"Introduce la nota teórica: "; cin>>participacion;

    notafinal=(practicas*30/100)+(teorica*60/100)+(participacion*10/100);

    cout<<"La nota final del alumno es "<<notafinal<<".\n";


    // EJERCICIO 8 - dados los 2 catetos de un triángulo rectángulo calcular su hipotenusa

    float cateto1,cateto2,hipotenusa;
    cout<<"Introduce el primer cateto: "; cin>>cateto1;
    cout<<"Introduce el segundo cateto: "; cin>>cateto2;

    hipotenusa=sqrt((cateto1*cateto1)+(cateto2*cateto2));
    cout<<"La hipotenusa del cruadrado con los catetos "<<cateto1<<" y "<<cateto2<<" es "<<hipotenusa<<".";

    return 0;

} // fin del main