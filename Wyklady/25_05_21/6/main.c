#include <stdio.h>

union Number {
    int i;
    float f;
    double d;
};

int main(void) {
    union Number num;
    num.i = 10;
    printf("int: %d\n", num.f);
    num.f = 3.14;
    printf("float: %f\n", num.d);
    num.d = 6.26;
    printf("double: %d\n", num.d);
    return 0;
}