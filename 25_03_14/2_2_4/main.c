#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int potega(x)
{
    int c = pow(2, x);
    return c;

}

int main()
{
    int n;
    printf("Podaj liczbe: ");
    scanf("%d", &n);

    int k = potega(n);

    printf("%d", k);
}
