
#include <stdio.h>

int funkcja(int *a, int *b) {
    if (*a < *b || *b == *a) { //*pa i *pb odnoszą się do wartości przypisanych do adresów pa i pb
        return a;
    }
    else{
        return b;
    }

}

int main(void) {
    int a = 10;
    int b = 5;

    int *pa = &a; //*pa to pointer do adresu a
    int *pb = &b; //*pb to pointer do adresu b

    printf("%p\n", &a); //print adres a
    printf("%p\n", &b); //print adres b

    printf("%p",funkcja(pa, pb));
    return 0;
}