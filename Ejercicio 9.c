/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int contarApariciones(char *cadena, char *subcadena) {
    int contador = 0;
    char *posicion = cadena;

    while ((posicion = strstr(posicion, subcadena)) != NULL) {
        contador++;
        posicion++; // Avanza para buscar la siguiente aparición
    }

    return contador;
}

int main() {
    char cadena[100];
    char subcadena[100];

    printf("Ingresa la cadena principal: ");
    scanf("%s", cadena);

    printf("Ingresa la subcadena a buscar: ");
    scanf("%s", subcadena);

    int apariciones = contarApariciones(cadena, subcadena);

    printf("La subcadena \"%s\" aparece %d veces en la cadena principal.\n", subcadena, apariciones);

    return 0;
}



