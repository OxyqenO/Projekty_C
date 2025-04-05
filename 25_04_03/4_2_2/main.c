#include <stdio.h>
#include <stdlib.h>

#define ROZMIAR 10
/*
Napisz funkcję, która otrzymuje dwa argumenty: dodatnią liczbę cał-
kowitą n oraz n-elementową tablicę tab o elementach typu int i zwra-
ca jako wartość:
a) (r) średnią arytmetyczną elementów tablicy tab.
b) sumę elementów tablicy tab,
c) sumę kwadratów elementów tablicy tab.
d) do wszystkich komórek tablicy tab wstawia wartości bezwzględne
ich pierwotnych wartości.*/


int funkcja1(int n, int tab[]) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += tab[i];
    }
    return (suma / n);
}

int funkcja2(int n,int tab[]) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += tab[i];
    }
    return (suma);}

int funkcja3(int n,int tab[]) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += (tab[i]*tab[i]);
    }
    return (suma);
}

int funkcja4(int n,int tab[]) {
    for (int i = 0; i < n; i++) {
        if (tab[i] < 0) {
            tab[i] = -tab[i];
            printf("tab[%d] = %d\n",i,tab[i]);
        }
    }
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("\n");

    if (n<0) {
        printf("Liczba n nie może być ujemna.\n");
        return 0;
    }

    int tab[ROZMIAR] = {1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i<ROZMIAR; i++){
        printf("%d ",tab[i]);
    }
    printf("\n");

    int output = funkcja1(n,tab);
    printf("%d\n", output);

    int output2 = funkcja2(n,tab);
    printf("%d\n", output2);

    int output3 = funkcja3(n,tab);
    printf("%d\n", output3);

    int output4 = funkcja4(n,tab);
    printf("%d\n", output4);

    return 0;
}