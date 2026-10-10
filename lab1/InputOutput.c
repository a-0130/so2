#include <stdio.h>
#include <stdlib.h>

/*
gcc hello.c -o hello -Wall
*/

int main() {
    printf("InputOutput.c\n\n");
    
    printf("a = ");
    
    int a;
    scanf("%d", &a);
    
    printf("int value a = %d\n\n", a);
    
    
    printf("b = ");
        
    float b;
    scanf("%f", &b);
    
    printf("float value b = %f\n\n", b);
    

    return 0;
}
