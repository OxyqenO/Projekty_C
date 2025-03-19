#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int m;
    int k;

    int wynik = 0;
    int a = 1;

    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &k);

    while (a < m)
    {
        wynik = n*a;
        a += 1;
        if (wynik > m)
        {
            if (wynik < k)

                printf("%d \n", wynik);
            }

        }

    }
}
