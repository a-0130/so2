#include <stdio.h>
#include <stdlib.h>

/*
gcc hello.c -o hello -Wall
*/

/*
Napisz program scanf-test sprawdzający, czy funkcja scanf zapisuje do bufora białe
znaki i terminator łańcucha. Przetestować spacje, tabulacje i przejście do nowej linii.
Przykładowa sesja:

str = ala ma kota

str = ala\0

  Po pierwszym napisie został dwa razy wciśnięty klawisz tabulacji oraz Enter.
*/

int main() {
    printf("scanf-test.c\n\n");

    char str[10];
    printf("Podaj napis: ");
    scanf("%9s", str);

    printf("str = ");

    int i;

    for(i = 0; str[i] != '\0'; i++){
        printf("%c", str[i]);
    }
    
    if(str[i] == '\0'){
        printf("\\0");
    }

    // printf("string value a = %c\n\n", str);


    return 0;
}
