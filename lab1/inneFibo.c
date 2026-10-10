/*
Podaj cztery inne funkcje wyliczające rekurencyjnie wartości ciągu Fibonacciego
*/
#include <stdio.h>
#include <stdlib.h>


int fibo1(int n) {
    return (n < 2) ? 1 : fibo1(n - 1) + fibo1(n - 2);
}

int fibo2(int n) {
    switch (n) {
        case 0:
        case 1:
            return 1;
        default:
            return fibo2(n - 1) + fibo2(n - 2);
    }
}

int fibo3(int n) {
    if (n < 2)
        return 1;

    int a = fibo3(n - 1);
    int b = fibo3(n - 2);

    return a + b;
}

int fibo4(int n) {
    if (n < 2)
        return 1;

    return fibo4(n - 1) + fibo4(n - 2);
}

int main() {
    printf("hello.c\n\n");

    int x = 5;
    printf("%d", fibo3(x));
    printf("%d", fibo4(x));

    return 0;
}