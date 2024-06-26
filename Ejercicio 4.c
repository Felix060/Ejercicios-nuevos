/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void eliminarEspaciosAlComienzo(char* cadena) {
    int longitud = strlen(cadena);
    int i = 0;
    while (cadena[i] == ' ') {
        ++i;
    }
    memmove(cadena, cadena + i, longitud - i + 1);
}

int main() {
    char miCadena[] = "   Hola profe";
    eliminarEspaciosAlComienzo(miCadena);
    printf("Cadena sin espacios al comienzo: \"%s\"\n", miCadena);

    return 0;
}
