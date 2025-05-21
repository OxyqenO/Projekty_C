#include <stdio.h>
#include <stdlib.h>

struct Person {
    char *name;
    int age;
};

struct Person *create_person(char *name, int age) {
    struct Person *new_person = malloc(sizeof(struct Person));
    new_person->name = name;
    new_person->age = age;
    return new_person;
}

int main(void) {
    struct Person *person1 = create_person("John", 20);
    printf("%s %d\n", person1->name, person1->age);
    return 0;
}