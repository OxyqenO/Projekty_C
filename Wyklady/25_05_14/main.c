#include <stdio.h>
#include <stdlib.h>>
int cmpStrNew(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0;
        }
        i++;
    }
    return 1;
}
int main(void){
    char napis1[] = "";
    char napis2[] = "";
    printf("%d",cmpStrNew(napis1,napis2) );
    return 0;
}