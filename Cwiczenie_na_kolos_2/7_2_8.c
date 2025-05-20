#include <stdio.h>
#include <stdlib.h>

struct student{
    char imie[40];
    char nazwisko[40];
    char adres[40];
    int pesel;
    char kierunek[40];
    int numer_legitymacji;
};

struct student funkcja(struct student *s) {

    scanf("%s",&s->imie);\
    scanf("%s",&s->nazwisko);\
    scanf("%s",&s->adres);\
    scanf("%d",&s->pesel);\
    scanf("%s",&s->kierunek);\
    scanf("%d",&s->numer_legitymacji);

    return *s;
}

int main(){
    struct student student1;
    funkcja(&student1);

    printf("%s %s %s %d %s %d", student1.imie, student1.nazwisko, student1.adres, student1.pesel, student1.kierunek, student1.numer_legitymacji);
    return 0;
}