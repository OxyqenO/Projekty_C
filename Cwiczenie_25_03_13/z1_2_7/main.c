#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba;
    int liczba_wieksza;

    printf("Podaj liczbe: ");
    scanf("%d", &liczba);

    liczba_wieksza = liczba + 1;
    printf("Liczba więszka: %d", liczba_wieksza);

    return 0;
}
