#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a;
    float b;
    float c;
    float d;

    printf("Podaj równanie kwadratowe w podany sposób: \nax^2 bx c = d\n");
    scanf("%fx^2 %fx %f = %f", &a,&b,&c, &d);

    float delta = (b*b - 4*(a*c));

    float x1 = ((-b - sqrt(delta))/2*a);
    float x2 = ((-b+ sqrt(delta))/2*a);
    printf("%f\n", x1);
    printf("%f", x2);

return 0;


}
