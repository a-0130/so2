#include <stdio.h>
#include <stdlib.h>

/*
gcc hello.c -o hello -Wall
*/

/*
Napisz program stdin-test sprawdzający czy strumień wejściowy stdin jest
pusty dla systemu Windows i Linux.

*/

int main() {
    printf("hello.c\n\n");

    char str[10];
    
    printf("Podaj napis: ");
    scanf("%9s", str);

    // jesli \n jest znakiem to znaczy ze nie ma dodatkowych znakow
    if (getchar() == '\n') {    
        printf("stdin jest pusty\n");
    }
    else {
        printf("stdin nie jest pusty\n");
    }

    return 0;
}
