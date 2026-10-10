#include <stdio.h>
#include <stdlib.h>

/*
gcc hello.c -o hello -Wall
*/

/*
f(0) = 1
f(1) = 1
f(n) = f(n-1) + f(n-2)


0   1   2   3   4   5   6    indeksy
1   1   2   3   5   8   13   wartosci


*/

int licznik = 0;
int argumenty[100];
int wyniki[100];

int fibo1(int n){

    licznik++;
    int nr = licznik;

    argumenty[nr] = n;

    if(n == 0 || n == 1) {
        wyniki[nr] = 1;
        return 1;
    }
    //if(n == 1) return 1;
    
    //return fibo1(n - 1) + fibo1(n - 2);

    int wynik = fibo1(n - 1) + fibo1(n - 2);

    wyniki[nr] = wynik;

    return wynik;

}

/*
- dokonaj analizy wywołania fibo1(4)

* oznacza wywolujemy

* fibo1(4) = 
  return fibo2(3) + fibo(2) = 
  
* fibo2(3) = 
  return fibo3(2) + fibo(1) =
  
* fibo3(2) =
  return fibo4(1) + fibo(0) =
  
* fibo4(1) =
  return 1

i po tym sie to uzupelnia od dolu *

* fibo1(4) = 5
  return fibo2(3) + fibo(2) = 3 + fibo7(2) = 3 + 2 = 5
  
* fibo2(3) = 3
  return fibo3(2) + fibo(1) =2 + fibo6(1) = 2 + 1 = 3
  
* fibo3(2) = 2
  return fibo4(1) + fibo(0) = 1 + fibo5(0) = 1 + 1 = 2
  
* fibo4(1) = 1
  return 1

* fibo5(0) = 1
  return 1

* fibo6(1) = 1
  return 1

* fibo7(2) = 2
  return fibo8(1) + fibo(0) = 1 + fibo9(0) = 1 + 1 = 2

* fibo8(1) = 1
  return 1
  
* fibo9(0) = 1
  return 1
  
- narysuj drzewo wywołań dla fibo1(4)

*/

int main() {
    printf("Fibo.c\n\n");

    int n = 4;
    
    //printf("fibo1(%d) = %d\n", n, fibo1(n));

    fibo1(n);

    for(int i = 1; i <= licznik; i++){
        printf("fibo%d(%d) = %d\n", i, argumenty[i], wyniki[i]);
    }

    return 0;
}
