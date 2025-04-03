#include <stdio.h>
#include <stdlib.h>

// Kod zrobiony przez chat, idk jak działa, muszę to przeczytać dokładnie

int main() {
    int *tablica = NULL;
    int n;

    printf("Podaj liczbę elementów: ");
    scanf("%d", &n);

    // Alokacja pamięci dla n elementów
    tablica = (int*)malloc(n * sizeof(int));
    if (tablica == NULL) {
        printf("Błąd alokacji pamięci!\n");
        return 1;
    }

    // Wpisywanie wartości od 1 do n
    for (int i = 0; i < n; i++) {
        tablica[i] = i + 1;  // Wartości od 1 do n
    }

    // Wyświetlenie tablicy
    printf("Tablica zawiera: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tablica[i]);
    }

    // Zwolnienie pamięci
    free(tablica);

    return 0;
}
