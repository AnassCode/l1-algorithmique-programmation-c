#include <stdio.h>

//fonction min qui renvoie la plus petit valeur entre a et b
int min(int a, int b) {
	if (a<b) {
        return a;
    } else {
        return b;
    }
}

int main() {
  	//déclarations des variables
    int nbr1, nbr2;
  	int Res;

  	//on lit au clavier les valeurs des 2 entiers
    printf("entier 1 : ");
    scanf("%i", &nbr1);
  
    printf("entier 2 : ");
    scanf("%i", &nbr2);
  
  	//calcul de la plus petite valeur avec la fonction min, puis affichage
  	Res = min(nbr1,nbr2);
  	printf("Resultat = %i\n", Res);
}

