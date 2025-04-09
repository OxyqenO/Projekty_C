#include <stdio.h>
#include <stdlib.h>

//Zadanie 4.2.1

int funkcja(int n, int tab[]) {
    //nadaje wartość zero wszystkim elementom tablicy tab

    for (int i = 0; i < n; i++) {
        tab[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int funkcja2(int n, int tab[]) {
    //zapisuje do kolejnych elementów tablicy wartości równe ich indeksom(do komórki o indeksie i funkcja ma zapisywać wartość i)

    for (int i = 0; i < n; i++) {
        tab[i] = i;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int funkcja3(int n, int tab[]) {
    //podwaja wartość wszystkich elementów w tablicy tab

    for (int i = 0; i < n; i++) {
        tab[i] = tab[i] * 2;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int funkcja4(int n, int tab[]) {
    //do wszystkich komórek tablicy tab wstawia wartości bezwzględne ich pierwotnych wartości
    for (int i = 0; i < n; i++) {
        if (tab[i] <0) {
            tab[i] = -tab[i];
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main(void) {
    //Napisz funkcję, która otrzymuje dwa argumenty: nieujemną liczbę całkowitą n oraz n-elementową tablicę tab elementów typu int i

    int n;
    scanf("%d", &n);

    if (n<0) {
        printf("Liczba n nie może być ujemna");
        return 0;
    }

    int *tab = NULL;
    // Alokacja pamięci
    tab = (int*)malloc(n * sizeof(int));
    if (tab == NULL) {
        printf("Błąd alokacji pamięci!\n");
        return 0;
    }

    tab[n] = funkcja(n, tab);

    tab[n] = funkcja2(n, tab);

    tab[n] = funkcja3(n, tab);

    tab[n] = funkcja4(n, tab);
    return 1;

}
