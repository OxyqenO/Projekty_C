#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void policz(char *napis) {
    int i = 0;
    int b = 0;
    while (napis[i] != '\0') {
        if (napis[i] == 'a' || napis[i] == 'b') {
            b++;
        }
        i++;
    }
    printf("Liczba wystąpień liter 'a' i 'b': %d\n", b);
}

void odwroc(char *napis) {
    int len = strlen(napis);
    char odw[100];
    for (int i = 0; i < len; i++) {
        odw[i] = napis[len - 1 - i];
    }
    odw[len] = '\0';
    printf("Odwrocone zdanie: %s\n", odw);
}

void wczytaj(int A[10][10], int m, int n) {
    printf("Podaj %d x %d liczb całkowitych:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
}

int najwiekszy_ujemny(int A[10][10], int m, int n, int *row, int *col) {
    int max = 0;
    int found = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] < 0) {
                if (!found || A[i][j] > max) {
                    max = A[i][j];
                    *row = i;
                    *col = j;
                    found = 1;
                }
            }
        }
    }
    if (!found) {
        printf("Brak elementu ujemnego w tablicy.\n");
        return 0;
    }
    printf("Najwiekszy ujemny element: %d (wiersz: %d, kolumna: %d)\n", max, *row, *col);
    return max;
}

int main() {
    char tekst[100];
    int m = 0, n = 0;

    printf("Podaj zdanie do zadania nr 1: ");
    scanf("%s", tekst);

    do {
        printf("Podaj dwie nieujemne liczby m i n (m<=10, n<=10): ");
        scanf("%d %d", &m, &n);
    } while (m < 0 || m > 10 || n < 0 || n > 10);

    policz(tekst);
    odwroc(tekst);

    int A[10][10];
    wczytaj(A, m, n);

    int row = -1, col = -1;
    int max_neg = najwiekszy_ujemny(A, m, n, &row, &col);

    printf("Zmienna w main przyjmuje wartosc: %d\n", max_neg);

    return 0;
}
