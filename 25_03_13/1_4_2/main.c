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

    while (e < m)
    {
        e = n*c;
        printf("%d \n", e);
        c += 1;
    }
}
