#include <stdio.h>

int main(void) {
    int tab[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf("%p\n", tab);
    printf("%p\n", &tab[0][0]);
    printf("%p\n", &tab[0][1]);
    printf("%p\n", &tab[0][2]);
    printf("%p\n", &tab[1][0]);
    printf("%p\n", &tab[1][1]);
    printf("%p\n", &tab[1][2]);

    char txt[100];
    sprintf(txt,"%d", tab[0][0]);
    fputs(&tab[0][0], stdout);
    fputs(txt, stdout);
    return 0;
}