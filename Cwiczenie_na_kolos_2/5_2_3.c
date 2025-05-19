#include <stdio.h>
#include <stdlib.h>

// Napisz funkcję porownaj, która jako argumenty otrzymuje dwa napisy
// i zwraca 1 gdy napisy są równe i 0 w przeciwnym przypadku. Napisz
// dwie wersje funkcji porownaj dla napisów składających się ze znaków
// typu char i wchar_t

int porownaj(char * napis1, char * napis2){
    int i = 0;
    while (napis1[i] != 0) {
        if (napis1[i] != napis2[i]) {
        return 0;
        }
        else{
        i++;
        }
    }
    return 1;
}

int main() {
    char napis1[] = "qwertyuiop";
    char napis2[] = "asdfgh";

    printf("%d \n", porownaj(napis1, napis2));
    return 0;
}
