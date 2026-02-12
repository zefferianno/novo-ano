#include <stdio.h>

int main(){

/*
Incremento (++)
Pré-Incremento ++a
Pós-Incremento a++
Decremento (--)
Pré-Decremento --a
Pós-Decremento a--
*/

int numero1 = 1, resultado;

 printf ("antes do incremento %d \n", numero1);

//numero1 = numero1 +1;
//numero1 += 1;
//pos incremento;
//resultado = numero1;
//numero++
resultado = numero1++;

//printf ("apos o incremento %d \n", numero1);

 printf ("apos pos-incremento - numero 1: %d - resultado: %d\n", numero1, resultado);

 resultado = ++numero1;


 printf ("apos pre-incremento - numero 1: %d - resultado: %d\n", numero1, resultado);

//numero1 = numero1 -1;
//numero1 -= 1;

resultado = numero1--;
printf ("apos pos-drecremento - numero 1: %d - resultado: %d\n", numero1, resultado);

resultado = --numero1;
printf ("apos pre-drecremento - numero 1: %d - resultado: %d\n", numero1, resultado);
}