/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void extraerPrimerosNCaracteres(const char* cadena, int N) {
    char resultado[N + 1]; // +1 para el carácter nulo al final
    strncpy(resultado, cadena, N);
    resultado[N] = '\0'; // Aseguramos que el resultado sea una cadena válida

    printf("Los primeros %d caracteres de \"%s\" son: %s\n", N, cadena, resultado);
}

int main() {
    const char* miCadena = "Hola, mundo!";
    int N = 5; // Cambia este valor según tus necesidades

    extraerPrimerosNCaracteres(miCadena, N);

    return 0;
}
