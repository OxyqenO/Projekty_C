#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int m;

    int c = 1;
    int e = 0;
    printf("Podaj n: ");
    scanf("%d", &n);

    printf("Podaj m: ");
    scanf("%d", &m);

    while ((n*c)<m)
    {
        e = n*c;
        c += 1;
        printf("%d \n", e);
    }
}
