#include <stdio.h>
#include <stdlib.h>

int func(n)
{
    int k = n/2;

    while ((n % k) != 0)
    {
        k -= 1;
    }
    int c = k;
    return c;
}

int main()
{
    int n;
    printf("Podaj liczbe: ");
    scanf("%d", &n);

    int k = func(n);

    printf("%d", k);
}
