/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void eliminarEspaciosAlFinal(char* cadena) {
    int longitud = strlen(cadena);
    while (longitud > 0 && cadena[longitud - 1] == ' ') {
        cadena[--longitud] = '\0';
    }
}

int main() {
    char miCadena[] = "Jelou mai fren :D!     ";
    eliminarEspaciosAlFinal(miCadena);
    printf("Cadena sin espacios al final: \"%s\"\n", miCadena);

    return 0;
}
