#include <stdio.h>
#include <stdlib.h>

/*
gcc hello.c -o hello -Wall
*/

/*
Napisz program fgets-test sprawdzający, czy funkcja fgets zapisuje do bufora białe znaki i terminator łańcucha. Przetestować spacje, tabulacje i przejście do nowej linii. Przykładowa sesja:

str = ala ma kota
str = ala ma kota\t\t\n\0

*/

int main() {
    printf("scanf-test.c\n\n");

    char str[50];    

    printf("Podaj napis = ");
    
    fgets(str, sizeof(str), stdin);
    
    int i;

    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == '\t'){
            printf("\\t");
        }
        else if(str[i] == '\n'){
            printf("\\n");
        }
        else{
            printf("%c", str[i]);
        }

    }
    
    if(str[i] == '\0'){
        printf("\\0\n");
    }

    // printf("string value a = %c\n\n", str);

    return 0;
}
