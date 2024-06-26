/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void eliminarCaracteres(char cadena[], int posicion, int n) {
    int longitud = strlen(cadena);
    if (posicion >= 0 && posicion < longitud) {
        // Mover los caracteres hacia la izquierda
        for (int i = posicion; i < longitud - n; i++) {
            cadena[i] = cadena[i + n];
        }
        // Agregar el carácter de terminación
        cadena[longitud - n] = '\0';
    }
}

int main() {
    char cadena[100];
    int posicion, n;

    printf("Ingresa una cadena: ");
    gets(cadena);

    printf("Ingresa la posición desde la cual eliminar: ");
    scanf("%d", &posicion);

    printf("Ingresa la cantidad de caracteres a eliminar: ");
    scanf("%d", &n);

    eliminarCaracteres(cadena, posicion, n);

    printf("Cadena resultante: %s\n", cadena);

    return 0;
}
