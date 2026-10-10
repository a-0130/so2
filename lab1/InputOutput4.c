#include <stdio.h>
#include <stdlib.h>

/*
gcc hello.c -o hello -Wall
*/

/*
W programie InputOutput4 odczytaj i wypisz na konsoli cały napis "ala ma kota" przy pomocy funkcji fgets.

- czy funkcja fgets zapisuje do bufora białe znaki?

*/

int main() {
    printf("hello.c\n\n");
    
    char str[50];    

    printf("Podaj napis = ");
    
    fgets(str, sizeof(str), stdin);
    
    printf("string = %s\n\n", str);
    
    return 0;
}
