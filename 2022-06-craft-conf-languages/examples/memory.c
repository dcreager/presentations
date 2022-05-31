#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
    char* name;
    int age;
};

struct person*
person_new(const char *name, int age) {
    struct person* person =
        malloc(sizeof(struct person));
    person->name = strdup(name);
    person->age = age;
    return person;
}

void
person_free(struct person* loc) {
    free(loc->name);
    free(loc);
}

#if !defined(BAD)
void
process_family(void) {
    struct person* me = person_new("Doug", 42);
    printf("%s is %d years old\n", me->name, me->age);
    person_free(me);
}

#else
void
process_family(void) {
    struct person* me = person_new("Doug", 42);
    printf("%s is %d years old\n", me->name, me->age);
    /* person_free(me); */
}
#endif

int main(void) {
    process_family();
}
