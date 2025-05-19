#include <stdio.h>
#include <stdlib.h>

// Napisz funkcję wyczysc, która usuwa z tablicy przechowywany
// w niej napis (w sensie: umieszcza w niej poprawny napis o długości
// 0). Napisz dwie wersje funkcji wyczysc dla napisów składających się
// ze znaków typu char i wchar_t

int wyczysc(char* n){
    if (n != NULL) {
        n[0] = '\0';
    }
    return n;
}

int main(void) {
    char napis[] = "Przykladowy napis";
    printf("%s \n" , wyczysc(napis));
    return 0;
}