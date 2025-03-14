#include <stdio.h>
#include <stdlib.h>

int absolute(x)
{
    if (x<0)
    {
        x = -x;
        return x;
    }
    else
    {
        return x;
    }
}

int main()
{
    int a;
    printf("Podaj liczbe: ");
    scanf("%d", &a);

    int b = absolute(a);

    printf("%d",b);
}
