/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void extraerUltimosNCaracteres(const char* cadena, int N) {
    int longitud = strlen(cadena);
    if (longitud < N) {
        printf("La cadena es demasiado corta para extraer %d caracteres\n", N);
        return;
    }

    char resultado[N + 1]; // +1 para el carácter nulo al final
    strncpy(resultado, cadena + longitud - N, N);
    resultado[N] = '\0'; // Se asegura que el resultado sea una cadena válida

    printf("Los últimos %d caracteres de \"%s\" son: %s\n", N, cadena, resultado);
}

int main() {
    const char* miCadena = "Hola, mundo!";
    int N = 6; // Cambie este valor según el que usted cra mejor

    extraerUltimosNCaracteres(miCadena, N);

    return 0;
}
