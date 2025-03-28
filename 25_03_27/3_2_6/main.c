#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int a;

    int *w = &a;

    int n;

    scanf("%d",&n);

    *w = n; // nadpisywanie wartości w a wartością n za pomocą adresu a zamiast samego a

    printf("%d",a);
    return 0;
}
