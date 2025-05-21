#include <stdio.h>

union Unia {
    int pole1;
    char pole2;
};

int main(void) {
    union Unia zm;
    printf("%c\n", zm.pole1);
    printf("%d\n", zm.pole1);
    printf("%c\n", zm.pole2);
    printf("%d\n", zm.pole2);
    return 0;
}