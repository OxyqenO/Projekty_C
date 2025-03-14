#include <stdio.h>
#include <stdlib.h>

int silnia(x)
{
    int a = x;
    int b = 1;

    while (a > 1)
    {
        b = b * a;
        a -= 1;
    }
    return b;
}

int main()
{
    int a;
    printf("Podaj liczbe: ");
    scanf("%d", &a);

    int b = silnia(a);
    printf("%d", b);

}
