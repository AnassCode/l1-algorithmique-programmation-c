#include <stdio.h>

//fonction sum qui renvoi la somme des des entiers de 0 à n
unsigned int sum(unsigned int n) {
  	unsigned int res;
    res = n * (n + 1) / 2;
    return res;
}

//fonction seum qui renvoi la somme des des entiers de 0 à n de manière itérative
unsigned seum(unsigned int n){
  unsigned somme =0;
  for(unsigned i=0; i<=n; i++){
    somme = somme +i;
  }
  return somme;
}

int main() {
  	//déclaration des variables
    unsigned int n;
  	unsigned int Res;
    unsigned int Res_2;

  
  	//On lit la valeur au clavier
    printf("Choisissez un entier n : ");
    scanf("%u", &n);
  
  	//On calcul la somme des entiers de 0 à n avec la fonction sum
  	Res = sum(n);
  	Res_2 = seum(n);
  
  	//affichage
    printf("#1 La somme des entiers de 0 à %u est : %u\n", n, Res);
    printf("#2 La somme des entiers de 0 à %u est : %u\n", n, Res_2);

}
