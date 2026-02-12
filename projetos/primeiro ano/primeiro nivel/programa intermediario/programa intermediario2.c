#include <stdio.h>


int main(){
/*
Atribuição Simples (=)
Atribuição com Soma (+=)
Atribuição com Subtração (-=)
Atribuição com Multiplicação (*=)
Atribuição com Divisão (/=)
*/
int numero1 = 10, numero2, resultado;
resultado = 10;
printf("Resultado: %d\n", resultado);

resultado += 20;

printf("Resultado: %d\n", resultado);

resultado -= numero1;

printf("Resultado: %d\n", resultado);

resultado *= 5;

printf("Resultado: %d\n", resultado);

resultado /= 4;

printf("Resultado: %d\n", resultado);
}