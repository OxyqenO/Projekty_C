#include <stdio.h>
#include <stdlib.h>

#define ROZMIAR 4

int main(void) {
    //define ROZMIAR pokazuje ile wartości z tablicy zostanie sprintowane
    int tab[ROZMIAR] = {1,2,3,4};
    for (int i = 0; i<ROZMIAR; i++){
        printf("%d\n",tab[i]);
    }

    //printuje max ilość wartości w tablicy, zwiększa i zmniejsza się wraz z tablicą
    int tab2[] = {1,2,3,4,5,6,7};
    for (int i = 0; i<sizeof tab2/sizeof(int); i++) {
        printf("%d\n",tab2[i]);
    }
    return 0;
}