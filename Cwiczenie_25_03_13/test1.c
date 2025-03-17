#include <stdio.h>
#include <stdlib.h>

int test1()
{
    int liczba;

    printf("Podaj liczbe wymierną: \n");

    scanf("%d", liczba);

    printf("Liczba wymierna: %d", liczba);

    return 0;
}
int test2()
{
    int licznik;
    int mianownik;

    printf("Podaj licznik: \n");
    scanf("%d", &licznik);
    printf("Podaj mianowkin: \n");
    scanf("%d", &mianownik);


    printf("Liczba wymierna: %d", licznik, "\\ %d", mianownik);

    return 0;
}
