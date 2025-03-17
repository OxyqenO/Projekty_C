#include <stdio.h>
#include <stdlib.h>

int main()
{
    int licznik;
    int mianownik;

    printf("Podaj licznik: \n");
    scanf("%d", &licznik);
    printf("Podaj mianownik: \n");
    scanf("%d", &mianownik);


    printf("Liczba wymierna: %d / %d", licznik, mianownik);

    return 0;
}
