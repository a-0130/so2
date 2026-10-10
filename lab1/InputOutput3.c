#include <stdio.h>
#include <stdlib.h>

/*
gcc hello.c -o hello -Wall
*/

/*
W programie InputOutput3 odczytaj i
wypisz na konsoli cały napis "ala ma kota" przy pomocy funkcji scanf.
*/

int main() {
    printf("InputOutput3.c\n\n");

    char str[50];
    
    printf("podaj str: ");
    scanf("%49[^\n]", str); // scanf ma odczytac ^ - wszystkie znaki oprocz - \n

    printf("str: %s\n", str);

    return 0;
}
