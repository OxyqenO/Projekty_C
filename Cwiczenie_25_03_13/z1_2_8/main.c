#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;

    printf("Podaj 3 liczby całkowite: ");
    scanf("%d", a);
    scanf("%d", b);
    scanf("%d", c);

    int srednia;
    srednia = (a+b+c)/3;

    printf("%d", srednia);
    return 0;
}
