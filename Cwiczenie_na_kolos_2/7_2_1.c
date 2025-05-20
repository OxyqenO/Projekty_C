#include <stdio.h>
#include <stdlib.h>

//7.2.1
struct trojkat{
    int bok_a;
    int bok_b;
    int bok_c;
};
int funkcja(struct trojkat t)
{
    return t.bok_a + t.bok_b + t.bok_c;
}

int main()
{
    struct trojkat t;
    printf("Podaj boki trojkata:\n");
    printf("Bok a:\n");
    scanf("%d", &t.bok_a);
    printf("Bok b:\n");
    scanf("%d", &t.bok_b);
    printf("Bok c:\n");
    scanf("%d", &t.bok_c);
    int obwod = funkcja(t);
    printf("Obwod trojkata wynosi:\n%d", obwod);


    return 0;
}


//7.2.2
void przepisz_trojkat(struct trojkat troj1, struct trojkat *troj2)
{
    //(*troj2).bok_a = troj1.bok_a;
    troj2->bok_a = troj1.bok_a;// -> oraz * można używać zamiennie
    //(*troj2).bok_b = troj1.bok_b;
    troj2->bok_b = troj1.bok_b;//Skoro troj2 jest wskaźnikiem, żeby
    //(*troj2).bok_c = troj1.bok_c;
    troj2->bok_c = troj1.bok_c;//zapisać do miejsca, na które wskazuje
    //używamy operatora -> lub (*troj2)
}

int main2() {
    struct trojkat troj1 = {10,20,30};
    struct trojkat troj2 = {0,0,0};

    printf("Dlugsci bokow przed pzepisaniem:\n");
    printf("troj2: %d %d %d\n", troj2.bok_a, troj2.bok_b, troj2.bok_c);

    przepisz_trojkat(troj1, &troj2);

    printf("Po przepisaniu:\n");
    printf("troj2: %d %d %d\n",troj2.bok_a, troj2.bok_b, troj2.bok_c);

    return 0;
}


