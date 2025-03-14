#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int n = l_nieujemna();
    int m = l_nieujemna();

    float b = sum_first(croot(m,n));
    printf("%d", b);
}

int l_nieujemna()
{
    int a;
    printf("Podaj liczbe calkowita, nieujemna: ");
    scanf("%d", &a);
    if (a<0)
    {
        l_nieujemna();
    }
    else
    {
        return a;
    }
}

int croot(m, n)
{
    int a = 0;
    int b = m;
    int c = n;

    while (a < (n+1));
    {
        int g = pow(a, (1/m));
        return g;
    }
}

int sum_first(x)
{
    int a = x;
    return a;

}
