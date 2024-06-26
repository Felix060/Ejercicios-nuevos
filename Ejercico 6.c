/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void eliminarPrimeraAparicion(char cadena1[], char cadena2[]) {
    char *posicion = strstr(cadena2, cadena1); // Busca la primera aparición de cadena1 en cadena2

    if (posicion) {
        // Calcula la longitud de cadena1
        int longitudCadena1 = strlen(cadena1);
        // Mueva los caracteres después de la aparición de cadena1 hacia la izquierda
        memmove(posicion, posicion + longitudCadena1, strlen(posicion + longitudCadena1) + 1);
    }
}

int main() {
    char cadena1[100];
    char cadena2[100];

    printf("Ingresa la primera cadena: ");
    scanf("%s", cadena1);

    printf("Ingresa la segunda cadena: ");
    scanf("%s", cadena2);

    eliminarPrimeraAparicion(cadena1, cadena2);

    printf("Cadena resultante: %s\n", cadena2);

    return 0;
}

