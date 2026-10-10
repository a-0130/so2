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
    

    printf("c = ");
    
    double c;
    scanf("%lf", &c);   // lf - double, %.2f - float z ograniczeeniem
    
    printf("double value c = %.15lf\n\n", c);

    return 0;
}
// ctrl `    otwiera terminal
/*
gcc InputOutput.c -o InputOutput -Wall
.\InputOutput.exe
*/