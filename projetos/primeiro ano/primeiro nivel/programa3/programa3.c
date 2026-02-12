#include <stdio.h>


int main () {   
 
 int idade;
 float altura;
 char nome;
 char opcao;

printf(" entre com sua idade e altura %d\n ");
scanf( "%d %f", &idade , &altura );
printf(" idade: %d\n ", idade );
printf(" altura: %f \n", altura);
printf(" entre com a opcao \n");
scanf(" %c", opcao);
printf(" a opcao é: %c", opcao);

}
