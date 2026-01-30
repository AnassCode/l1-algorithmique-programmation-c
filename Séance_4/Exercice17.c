#include <stdio.h>

unsigned int prime(unsigned int n){
  
  unsigned int a ;
  
	while (a!=1){
        if (n%a) == 0 {
        	return -1;
        }else{
        	return 0,;
        }
      a=a-1
	}
}

int main() {
  	unsigned int n;
	unsigned int res;

	//On lit la valeur au clavier et on l'attribut à une variable
    printf("Quel occurence de la suite de Fibonacci voulez-vous calculer ? n = ");
    scanf("%u", &n);
  
	res = fibonacci(n);

     printf("Fibonacci(%u) = %u\n", n, res );
   }

