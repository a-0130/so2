/*
Funkcja fibo3 - metoda programowania dynamicznego z ramką dwuzębną.

r0  r1
|---|           .
0   1   2   3   4   5   6    indeksy
1   1   2   3   5   8   13   wartości
|   |---|
pom r0  r1

Przesunięcie ramki w prawo:

pom = r0
r0 = r1
r1 = r0 + pom

- ile razy należy przesunąć ramkę w prawo, aby wyznaczyć wartość n-tego wyrazu ciągu Fibonacciego w funkcji fibo3 dla n >= 2 ?
chyba n - 1

- dokonaj analizy wywołania fibo3(4).

poczarek: r0, r1 = 1
1 przesuniecie: pom, r0 = 1; r1= 1 + 1 = 2
2 przesuniecie: pom = 1; r0 = 2; r1 = 2 + 1 = 3
3 przesyniecie: pom = 2; r0 = 3; r1 = 3 + 2 = 5 - wynik


- narysuj graf obliczeń dla fibo3(4).
jako plik jest dolaczony osobno

- która funkcja ma mniejszą złożoność obliczeniową fibo2 czy fibo3 ?
nie wiem

Przykładowa sesja:

fibo1(4) = 5
fibo2(4) = 5
fibo3(4) = 5

*/