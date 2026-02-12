#include <stdio.h>

int main () {
   /* 
   soma (+)
subtração (-)
multiplicação (*)
divisão (/)

   */

   int numero1, numero2;
   int soma, subtraçao, multiplicaçao, divisao;

   printf ("entre com numero 1: \n");

   scanf ("%d", &numero1);

   printf ("entre com o numero 2:");

   scanf ("%d", &numero2);

   soma =numero1 +numero2;
//operação soma

   subtraçao= numero1 - numero2;
//operação subtração

   multiplicaçao= numero1 * numero2;
//operação multiplicação

   divisao= numero1 / numero2;
//operação divisão

 printf ("a soma é: %d \n" , soma);
 printf ("a subtração é: %d \n" , subtraçao);
 printf ("a multiplicação é: %d \n" ,multiplicaçao);
 printf ("a divisão é: %d \n" ,divisao);
}