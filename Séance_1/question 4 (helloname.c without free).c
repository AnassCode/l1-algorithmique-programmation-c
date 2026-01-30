#include <stdio.h>
#include <stdlib.h>

int main () {
    char* name;
    printf("What's your name? ");
    scanf("%ms", &name);
    printf("Hello %s!\n", name);
}
