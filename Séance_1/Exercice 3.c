#include <stdio.h>
#include <stdlib.h>

int main () {
    char* prenom;
  	char* nom;
    int age;
  
    printf("Quel est ton prénom ? ");
    scanf("%ms", &prenom);

    printf("Quel est ton nom de famille ? ");
    scanf("%ms", &nom);
  
    printf("Quel est ton âge ? ");
    scanf("%i", &age);
 
    printf("Bonjour %s %s, vous avez %i ans.\n", prenom,nom,age);
}
