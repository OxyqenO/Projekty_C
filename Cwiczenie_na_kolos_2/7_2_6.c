#include <stdio.h>
#include <stdlib.h>

typedef struct punktn{
    int n;
    double * wspolrzedne;
} punkt;

void przepisz_tablice(const punkt* tab1, punkt* tab2, int rozmiar){
    for (int i = 0; i < rozmiar; i++){
      tab2[i].n = tab1[i].n;

      tab2[i].wspolrzedne = (double *)malloc(tab1[i].n * sizeof(double));

      tab2[i].wspolrzedne = tab1[i].wspolrzedne;
    }
}

int main(void) {
    // Przykładowe użycie
    punkt tab1[2];

    // Inicjalizacja pierwszego punktu (3D)
    tab1[0].n = 3;
    tab1[0].wspolrzedne = (double[]) {1.0, 2.0, 3.0};

    // Inicjalizacja drugiego punktu (2D)
    tab1[1].n = 2;
    tab1[1].wspolrzedne = (double[]) {4.0, 5.};

    punkt tab2[2];

    przepisz_tablice(tab1, tab2, 2);

    for (int i = 0; i < 2; i++){
        printf("Punkt %d (%d-wymiarowy): ", i+1, tab2[i].n);
        for (int j = 0; j < tab2[i].n; j++) {
            printf("%.1f ", tab2[i].wspolrzedne[j]);
        }
        printf("\n");
    }

    // Zwolnienie pamięci
    for (int i = 0; i < 2; i++) {
        free(tab2[i].wspolrzedne);
    }
    return 0;
}