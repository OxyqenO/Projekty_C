#include <stdio.h>

int funkcja(int *a, int *b) {
    if (*a < *b || *b == *a) { //*pa i *pb odnoszą się do wartości przypisanych do adresów pa i pb
        return *a;
    }
    else{
        return *b;
    }

}

int main(void) {
    int a;
    int b;

    scanf("%d %d", &a, &b);

    int *pa = &a; //*pa to pointer do adresu a
    int *pb = &b; //*pb to pointer do adresu b

    printf("%p\n", &a); //print adres a
    printf("%p\n", &b); //print adres b

    printf("%d",funkcja(pa, pb));
    return 0;
}
