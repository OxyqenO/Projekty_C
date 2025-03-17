#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int wybor;
    printf("Chcesz podac: \n1.Podstawe i wysokosc trojkata \n2.Dlugosci bokow trojkata\n");
    scanf("%d", &wybor);

    if (wybor == 1)
    {
        int podstawa;
        int wysokosc;

        printf("Podstawa:\n");
        scanf("%d", &podstawa);
        printf("Wysokosc:\n");
        scanf("%d", &wysokosc);

        int wynik = (podstawa * wysokosc)/2;
        printf("Wynik: %d", wynik);
    }
    else if (wybor == 2)
    {
        int a;
        int b;
        int c;

        printf("Bok a:\n");
        scanf("%d", &a);
        printf("Bok b:\n");
        scanf("%d", &b);
        printf("Bok c:\n");
        scanf("%d", &c);

        int p = (a+b+c)/2;

        int pole = sqrt(p*(p-a)*(p-b)*(p-c));
        printf("Wynik: %d", pole);
    }
}
