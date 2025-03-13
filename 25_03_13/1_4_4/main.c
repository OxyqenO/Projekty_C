#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    int e = 1;
    int c = 1;

    scanf("%d", &n);

    while (c < n)
    {
        e += c * e;
        c += 1;
    }
    printf("%d \n", e);
}
