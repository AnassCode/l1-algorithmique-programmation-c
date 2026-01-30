#include <stdio.h>

int main() {
  	//déclarations des variables
    int a,b;
  	int somme, soustraction, produit;
  	float division;

  	//on lit les valeurs au clavier
    printf("Choisissez une valeur pour a : ");
    scanf("%i", &a);
    printf("Choisissez une valeur pour b : ");
    scanf("%i", &b);

  	//on procède aux opérations
  	somme = a+b;
  	soustraction = a-b;
  	produit = a*b;
  	
  	//on affiche
    printf("a + b = %i\n", somme);
    printf("a - b = %i\n", soustraction);
    printf("a * b = %i\n", produit);
 
  	//si on saisie b=0, la valeur de la division sera "inf" (autrement dit, ça ne marche pas)
  	//il faut prendre en compte le cas de la division par 0 :
  
    if (b != 0) {
      	division = (float)a/b;
        printf("a / b = %0.2f\n", division);
    } else {
        printf("Division par zéro : impossible.\n");
    }
  return 0;
  }