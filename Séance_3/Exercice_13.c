#include <stdio.h>

//fonction fact qui calcule de manière itérative la factorielle de n
unsigned fact(unsigned n){
  unsigned a = 1;
  
	if (n == 0){
      return 1;
    }else {
      while(n!=0){
      	a = a*n;
      	n = n-1;
      }
    }
  return a;
}

int main() {
  	//déclaration des variables
    unsigned res;

	//On lit la valeur au clavier et on l'attribut à une variable
    printf("Voulez-vous calculer la factorielle de quel nombre ? \n");
  	printf("n = ");
    scanf("%u", &res);
  
	//on appelle la fonction fact pour calculer la factorielle de n et on affiche le résultat
    printf("%u! = %u\n", res, fact(res));
}