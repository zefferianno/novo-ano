#include <stdio.h>

int main(){
float temperatura, umidade;
unsigned int estoque, estoqueminimo = 1000;

printf("Entre com a temperatura: \n");
scanf("%f,&temperatura");
printf("Entre com a umidade: \n");
scanf("%f", &umidade);
printf("Entre com o estoque: \n");
scanf("%u", &estoque);

if( temperatura > 30){
printf("Temperatura está alta \n");
} else {
    printf("temperatura está dentro dos parametros! \n");
}

 if (umidade > 50) {
    printf("umidade elevada! \n");
} else {
    printf ("umidade esta dentro dos parametros! \n");
}

if (estoque < estoqueminimo) {
    printf("estoque abaixo do minimo! \n");
} else {
    printf("estoque nos conformes! \n");
}

}