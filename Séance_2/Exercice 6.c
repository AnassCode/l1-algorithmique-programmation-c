#include <stdio.h>

int main() {
  	//déclarations des variables
    int t, p;
  	float pourcentage;
  
	//On lit les valeurs au clavier des etudiants inscrits et des etudiants presents
    printf("nombre total d'etudiants inscrits : ");
    scanf("%i", &t);
    printf("nombre d'etudiants presents : ");
    scanf("%i", &p);

  	//calcul du pourcentage d'étudiants présents
    pourcentage = ((float)p / t) * 100;
	
  	//affichage
    printf("Le pourcentage d'etudiants presents est : %0.2f\n", pourcentage);
}