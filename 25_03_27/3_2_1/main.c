#include <stdio.h>

int main(void) {
    int a;
    int b;

    scanf("%d %d", &a, &b);

    int *pa = &a; //*pa to pointer do adresu a
    int *pb = &b; //*pb to pointer do adresu b

    printf("%p\n", &pa); //print adres a
    printf("%p\n", &pb); //print adres b

    if (*pa > *pb || *pb == *pa) { //*pa i *pb odnoszą się do wartości przypisanych do adresów pa i pb
        printf("%d\n\n", *pa);  
    }
    else{
        printf("%d\n", *pb);
    }

    return 0;
}
