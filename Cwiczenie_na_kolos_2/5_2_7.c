#include <stdio.h>
#include <stdlib.h>

// Napisz funkcję sklej otrzymującą jako argumenty trzy tablice
// znaków i zapisującą do trzeciej tablicy konkatenację napisów znajdu-
// jących się w dwóch pierwszych tablicach (czyli dla napisów ”Ala m”
// i ”a kota” znajdujących się w pierwszych dwóch argumentach do trze-
// ciej tablicy powinien zostać zapisany napis ”Ala ma kota”). Zakłada-
// my, że w trzeciej tablicy jest wystarczająco dużo miejsca.

void sklej(char * napis1, char * napis2, char * napis3){

    int i = 0;
    int j = 0;
    while (napis1[i] != 0){
        napis3[i] = napis1[i];
        i++;
    }
    while (napis2[j] != 0){
        napis3[i] = napis2[j];
        i++; j++;
    }
    napis3[i] = '\0';
}

int main(){
    char napis1[] = "Ten nap";
    char napis2[] = "is jest dlugi.";
    char napis3[50];
    sklej(napis1, napis2, napis3);
    printf("%s \n", napis3);
    return 0;
}

