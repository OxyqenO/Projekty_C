#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    int a = 0;
    int c = 0;

    scanf("%d", &n);

    while (a <= n)
    {
        c = (a*a);
        a += 1;
        printf("%d \n", c);
    }
}
