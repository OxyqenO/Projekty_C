#include <stdio.h>
#include <stdlib.h>

// Napisz funkcję, która dostaje jako argument dodatnie liczby cał-
// kowite n i m, tworzy dynamiczną dwuwymiarową tablicę tablic ele-
// mentów typu int o wymiarach n na m, i zwraca jako wartość wskaźnik
// do niej.

int funkcja(int n, int m){
    int** tab = (int**)malloc(n*sizeof(int*));

    for (int i = 0; i < n; i++) {
        tab[i] = (int*)malloc(m*sizeof(int));
    }

    return &tab;
}

int main() {
    int n = 2;
    int m = 5;

    int * tab = funkcja(n,m);
    printf("%d\n", tab);
}