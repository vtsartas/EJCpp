// Menú par la hoja de ejercicios 2

#include <iostream> // necesario para entrada/salida
// #include <string> // necesaria para manejar strings
#include <stdlib.h> // necesaria para usar exit() y salir del programa

#include <clocale> // necesaria para la codificación de caracteres en español
#include <windows.h> // necesaria para la codificación de caracteres en español en Windows

#include "ejercicio1.h"
#include "ejercicio2.h"
#include "ejercicio3.h"
#include "ejercicio4.h"
#include "ejercicio5.h"
#include "ejercicio6.h"

using namespace std; // necesario para entrada/salida

int main() {
        char otro;
        int ejerc;

        setlocale(LC_CTYPE,"spanish"); // necesaria para la codificación de caracteres en español
        SetConsoleCP(1252); // Cambiar STDIN -  Necesario para máquinas Windows
        SetConsoleOutputCP(65001); // Cambiar STDOUT - Necesario para máquinas Windows
        
        do {
            cout<<"¿Qué ejercicio deseas ejecutar (introducir el número de ejercicio)?\n";
            cout<<"1. Decir si un número es par o impar.\n";
            cout<<"2. Decir si un carácter está en mayúsculas o minúsculas.\n";
            cout<<"3. Decir cuál es el mayor de tres números.\n";
            cout<<"4. Comprobar si una hora facilitada es válida.\n";
            cout<<"5. Decir los días que tiene un mes.\n";
            cout<<"6. Mostrar la lista de números enteros entre los dos dados.\n";
            cout<<"7. Mostrar si un número es +/- o par/impar (tres versiones).\n";
            cout<<"8. Mostrar cuántos + y - hay en un listado y su media diferenciada.\n";
            cout<<"9. Listar en un array y mostrar los primeros 20 números pares.\n";
            cout<<"10. Mostrar cuántos +,- y ceros hay en un array dado.\n";
            cout<<"0. SALIR DEL PROGRAMA.\n";

            cin>>ejerc;
            switch (ejerc) {
                
                // ejercicio 1 (par/impar)
                case 1:
                    ejercicio1();
                    break;
                // ejercicio 2 (mays/mins)
                case 2:
                    ejercicio2();
                    break;
                // ejercicio 3 (mayor de 3 números)
                case 3:
                    ejercicio3();
                    break;                
                // ejercicio 4 (hora válida)
                case 4:
                    ejercicio4();
                    break;
                // ejercicio 5 (validar mes, decir días y mostrar texto)
                case 5:
                    ejercicio5();
                    break;
                // ejercicio 6 (lista números entre dos dados)
                case 6:
                    ejercicio6();
                    break;
                // ejercicio 7 (positivo/negativo y par/impar, tres versiones)
                case 7:
                    //Ejercicio7.ejercicio7();
                    break;
                // ejercicio 8 (contar positivos/negativos y decir su media diferenciada)
                case 8:
                    //Ejercicio8.ejercicio8();
                    break;
                // ejercicio 9 (mostrar 20 primeros pares)
                case 9:
                    //Ejercicio9.ejercicio9();
                    break;
                // ejercicio 10 (contar positivos, negativos y ceros)
                case 10:
                    //Ejercicio10.ejercicio10();
                    break;
                // SALIR DEL PROGRAMA
                case 0:
                exit(0);
                                       
                // en caso de que se introduzca un valor que no corresponda con ninguno de los ejercicios                
                default:
                    cout<<"ERROR: El número introducido no corresponde a ninguno de los ejercicios.\n";    
                    break;
            }

            cout<<"¿Deseas ejecutar otro ejercicio?(s/n) ";
            cin>>otro;

        } while (otro=='s');


    } // fin del main()