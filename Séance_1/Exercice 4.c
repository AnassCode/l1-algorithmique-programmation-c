#include <stdio.h>
#include <stdlib.h>

int main () {
    unsigned int nombre;
  
    printf("Ecrivez un entier : ");
    scanf("%u", &nombre);
 
    printf("%u\n", nombre);
  
  	//le type unsigned int balalaye uniquement les nombres positifs de 0 à 2^32. Lorsque l'on met un négatif, le compilateur va balayer toutes les valeurs jusqu'a -2^32 et revenir sur les postifs à 2^32
}
