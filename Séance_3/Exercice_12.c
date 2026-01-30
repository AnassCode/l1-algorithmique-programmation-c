#include <stdio.h>

//fonction récursive fibo pour calculer le nème nombre de Fibonacci
unsigned fibo(unsigned n){
	if (n == 0){
      return 0;
    }
  	else if (n == 1){
      return 1;
    }
  	else {
      return fibo(n-1) + fibo(n-2);
    }
}

int main() {
  	//déclaration des variables
    unsigned res;

	//On lit la valeur au clavier et on l'attribut à une variable
    printf("Quel occurence de la suite de Fibonacci voulez-vous calculer ? n = ");
    scanf("%u", &res);
  
	//on appelle la fonction fibo pour calculer le nieme terme de la suite de fibonacci et on affiche le résultat
  	printf("Fibonacci(%u) = %u\n", res, fibo(res));
  	
  	//affichage successif pour voir l'évolution des valeurs de la suite jusqu'à n (pour la question 4)
  	printf("\n");
  	printf("Affichage successifs :\n");
    for (unsigned i = 0; i <= res; ++i) {
        printf("Fibonacci(%u) = %u\n", i+1, fibo(i));
    }
}

//question 2 : on fait tourner le programme pour différentes valeurs de n
//question 3 : On constate que plus n est grand et plus le programme met du temps à afficher le résultat
//question 4 : plus on avance dans la suite de fibonacci, plus les sorties deviennent très vite grandes, l'ordinateur a donc besoin d'un temps de calcul plus élevé (voir l'affichage successif des valeurs)
