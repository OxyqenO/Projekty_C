#include <stdio.h>
#include <stdlib.h>

// Napisz funkcję dlugosc, która jako argument otrzymuje napis
// i zwraca jako wartość jego długość. Napisz dwie wersje funkcji dlugosc
// dla napisów składających się ze znaków typu char i wchar_t.

int dlugosc(char * napis){
    int i = 0;
    while (napis[i] != 0) {
        i++;
    }
    return i;
}

int main()
{
    char napis[] = "Hellow World!";
    int ilosc;
    ilosc = dlugosc(napis);
    printf("%d \n", ilosc);
    return 0;
}