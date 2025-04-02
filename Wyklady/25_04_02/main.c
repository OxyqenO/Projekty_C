#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *ptr = malloc(10 * sizeof(int));
    int *ptr2 = calloc(10, sizeof(int));

    void free(void *ptr); //stdlib.h,  zwalnia dynamicznie przudzielonej pamięci, zwraca typ void

    //Alokacja pamięci na blok 5 liczb całkowitych.
    int *tablica = (int*)malloc(5 * sizeof(int));

    //Sprawdzenie czy alokacja się powiodła
    if (tablica == NULL) {
        printf("Błąd alokacji pamięci\n");
        return 1;
    }

    //Używamy zaalokowanej pamięci
    for (int i = 0; i < 5; i++) {
        *(tablica + i) = i *10;
        printf("tablica[%d] = %d\n", i, *(tablica + i));
    }

    //Zwalnamy pamięć gdy nie jest już potrzebma
    free(tablica);
    tablica = NULL;



    //realoc - relokacja pamięci
    int *tablica2 = (int*)malloc(10 * sizeof(int));
    int rozmiar = 0;
    int pojemnosc = 0;

    //Dodajemy do tablicy
    for (int i = 0; i < 10; i++) {
        //Jeśli tablica jest pełna, zwiększamy jej pojemność
        if (rozmiar >= pojemnosc) {
            int nowa_pojemnosc = 0 ? 1: pojemnosc * 2;
            //Realokujemy pamięć
            int nowa_tablica = (int*)realloc(tablica2, nowa_pojemnosc * sizeof(int));
            tablica2 = nowa_tablica;
        }

    }


    //Praktyczne zadania, które mogą być na egzaminie
    int * wsk1();
    int (*wsk2)();
    int * (wsk3)();



    return 0;
}

/*
   Napisz funkcje calculate, która przyjmuje dwa argumenty: wskaźnik na funkcję operation
   oraz liczbę całkowitą typu int. Funkcja calculate powinna wywołać funkcję operation z argumentem number
    i zwrócić jej wynik
*/

calculate(int (*operation)(int a), int number) {
    return operation(number);

}



