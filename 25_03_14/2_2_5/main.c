#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float potega(x)
{
    if (x >= 0)
    {
        float c = pow(2, x);
        return c;
    }
    else
    {
        float c = pow((1.0 / 2.0),-x);
        return c;
    }

}

float main()
{
    int n;
    printf("Podaj liczbe: ");
    scanf("%d", &n);

    float k = potega(n);

    printf("%f", k);
}
