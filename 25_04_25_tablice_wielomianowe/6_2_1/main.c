#include <stdio.h>
#include <stdlib.h>

int** stworz_tablice_tablic(int n, int m) {
    int** tablica = (int**)malloc(n * sizeof(int*));
    if (tablica == NULL) {
        return NULL;
    }

    for (int i = 0; i < n; i++) {
        tablica[i] = (int*)malloc(m * sizeof(int));
        if (tablica[i] == NULL) {
            // W przypadku błędu, zwolnij już zaalokowaną pamięć
            for (int j = 0; j < i; j++) {
                free(tablica[j]);
            }
            free(tablica);
            return NULL;
        }
    }

    return tablica;
}

int main(void) {
    printf("%d\n", stworz_tablice_tablic(5, 5));
}