#include <stdio.h>

int main () {
int numeros[10];
int soma = 0;
int i;

printf("Digite 10 números inteiros:\n");
for ( i = 0; i < 10; i++)
{
 printf("Número %d: ", i + 1 );
 scanf("%d" , &numeros[i]);
 soma += numeros[i];
   
}

printf("a soma total dos números é:%d\n", soma);

return 0;

}


