#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int m;
    int k;

    int e = 0;
    int c = 1;

    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &k);

    while (c < m)
    {
        e = n*c;
        c += 1;
        if (e > m)
        {
            if (e < k)
            {
                printf("%d \n", e);
            }

        }

    }
}
