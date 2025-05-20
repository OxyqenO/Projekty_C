//Napisz funkcję utworz zwracającą wskaźnik do pustej listy bez głowy o elementach typu element.

#include <stdio.h>
#include <stdlib.h>

// Definicja struktury elementu listy
typedef struct element {
    int wartosc; // przykładowe pole
    struct element* next;
} element;

// Funkcja tworząca pustą listę (czyli NULL)
element* utworz() {
    return NULL;
}

//7_3_2
void wyczysc(element* lista) {
    element* temp;
    while (lista != NULL) {
        temp = lista;
        lista = lista->next;
        free(temp);
    }
}

int main() {
    element* utworz();
    wyczysc(utworz());
    return 0;
}