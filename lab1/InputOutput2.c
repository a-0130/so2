#include <stdio.h>
#include <stdlib.h>

/*
gcc hello.c -o hello -Wall
*/
void flush_stdin(){
    int c;
    while((c = getchar()) != '\n' && c != EOF) ;
}

int main() {
    printf("hello.c\n\n");
    
    printf("a = ");

    char str[10];
    scanf("%9s", str);
    
    printf("string value a = %s\n\n", str);


    printf("b = ");
    
    flush_stdin();
    fgets(str, sizeof(str), stdin);
    
    printf("string value b = %s\n\n", str);
    
    return 0;
}
