#include <iostream> // Librer�a b�sica de entrada y salida, necesaria para cout, cin...
#include <conio.h> // Se incluye para pausar el programa al final hasta que se pulse una tecla y que no se cierre
using namespace std;

// Ejercicio 7 - Calcular los porcentajes de ni�os y ni�as

int main(){
    // Definimos las variables reales num_ninos,nun_ninas,porc_ninos_porc_ninas
    float num_ninos,num_ninas,porc_ninas,porc_ninos;
    // Leemos por pantalla el valor de 'a'
    cout <<"Introduce cu�ntos NI�OS hay: ";
    cin >>num_ninos;
    cout <<"Introduce cu�ntos NI�AS hay: ";
    cin >>num_ninas;
    // Calculamos los porcentajes e imprimimos el resultado
    porc_ninos=(100*num_ninos)/(num_ninos+num_ninas);
    porc_ninas=100-porc_ninos;
    cout <<"El porcentaje de ni�os es del "<<porc_ninos<<"% y el de ni�as es "<<porc_ninas<<"%.";

    // Esperamos que se pulse una tecla para cerrar el programa
    cout <<"\nPulse una tecla para salir";
    getch();
    return 0;
}
