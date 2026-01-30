#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {	
  //on génère un valeur au hasard entre 0 et 99
  srand((unsigned int)time(NULL));
  int max = 99;
  int valeur = rand() % max;
  //printf("%d",valeur); //si on veut afficher la valeur à retrouver
  int valeur_saisie;
  int a = 0;
  
  //première saisie
  printf("Essayez de trouver la valeur comprise en 0 et 100 \n");
  printf("Saisir une valeur entre 0 et 100 : ");
  scanf("%d", &valeur_saisie);

  //affiche "trop grand" ou "trop petit" et nous relance jusqu'à ce qu'on trouve la bonne valeur
  while(a!=1){
  	if (valeur_saisie > valeur){
    	printf("trop grand\n");        
      	printf("Ressaisir une valeur entre 0 et 100 : ");
  		scanf("%d", &valeur_saisie);
 	 }
 	 else if(valeur_saisie < valeur){
  		printf("trop petit\n");
        printf("Ressaisir une valeur entre 0 et 100 : ");
  		scanf("%d", &valeur_saisie);
  	}
  	else{
  		printf("bravo");
      	a=1;
 	 } 
  }
}