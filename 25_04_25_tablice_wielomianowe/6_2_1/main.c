#include <stdio.h>
#include <stdlib.h>

int* create_2d_array(int n, int m) {
    // Alokujemy pojedynczy blok pamięci dla n*m elementów
    int* array = (int*)malloc(n * m * sizeof(int));
    return array;
}

void print_array(int* arr, int n, int m) {
    printf("Zawartość tablicy:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // Dostęp przez arytmetykę wskaźników: arr[i*m + j]
            printf("%3d ", arr[i*m + j]);
        }
        printf("\n");
    }
}

void print_pointers(int* arr, int n, int m) {
    printf("\nAdresy w pamięci:\n");
    printf("Główny wskaźnik: %p\n", (void*)arr);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Element [%d][%d] - adres: %p, wartość: %d\n",
                   i, j, (void*)&arr[i*m + j], arr[i*m + j]);
        }
    }
}

int main() {
    int n = 3, m = 4;
    int* my_array = create_2d_array(n, m);

    if (my_array == NULL) {
        printf("Błąd alokacji!\n");
        return 1;
    }

    // Inicjalizacja przykładowymi danymi
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            my_array[i*m + j] = i * 10 + j;
        }
    }

    print_array(my_array, n, m);
    print_pointers(my_array, n, m);

    // Zwolnienie pamięci (tylko jeden free)
    free(my_array);

    return 0;
}