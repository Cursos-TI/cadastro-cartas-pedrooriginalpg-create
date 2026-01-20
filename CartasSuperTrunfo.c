#include <stdio.h>

int main(){

//Área  para definição das variaveis para armazenar as propriedades das cidades 
  char cidade [50];
  int populacao;
  float area;
  float pib;
  int pontos turisticos;

  //Área  para entrada de dados 
  printf("digite o nome da cidade: ");
  scanf(" %[^\n]", cidade);

  printf("digite a populacao da cidade: ");
  scanf("%d", &populacao);

  printf("digite a area da cidade (km²): ");
  scanf("%f", &area);
  
  printf("digite o PIB da cidade (em bilhoes): ");
  scanf("%f",&pontosturisticos: );

   printf("Digite o numero de pontos turisticos");
  scanf("%d, &pontosturisticos: ");

  //Área para exibicao dos dados da cidade
printf("\n===== carta super trunfo=====\nn");
  printf("cidade: %s\n, cidade");
printf("populacao: %d habitantes\n, populacao");
  printf("Area: %.2f kn²\n",area);
  printf("PIB: %2.f bilhoes\n", pib);
  prinf("pontosd turisticos: %d\n, pontosturisticos");

  return 0;
}
