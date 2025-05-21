#include <stdio.h>
#include <stdlib.h>

//listy jednokierunkowe

struct element {
    int i;
    struct element *next;
};

void printListNoHead(struct element *list){
    if (list == NULL) {
        printf("List is empty\n");
    }
    
}

int main(void) {
    // lista bez glowy
    // pusta lista
    struct element *list1 = NULL;
    // lista jednoelementowa
    struct element *list2 = malloc(sizeof(struct element));
    list2->i = 5;
    list2->next = NULL;
    // lista o trzech elementach 5, -4.9
    struct element *list3 = malloc(sizeof(struct element));
    list3->i = 5;
    list3->next = malloc(sizeof(struct element));
    list3->next->i = -4;
    list3->next->next = malloc(sizeof(struct element));
    list3->next->next->i = 9;
    list3->next->next->next = NULL;

    return 0;
}