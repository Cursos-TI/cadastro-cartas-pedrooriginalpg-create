#include <stdio.h> 
  /*
  Biblioteca enteda e saida da linguaguem em C e sem ela não poderiamos usar printf ou scanf
  */

int main()
{ 
   /*
   A Função principal do programa e a Área para colocarmos as variaveis.
   */

  //Área  para definição das variaveis para armazenar as propriedades das cidades 

  char cidade [50]; 
    /*
    Armazena o nome da cidade e seus nomes.
    */
  
  int populacao;
    /*
    Variável do tipo inteiro,armazena a população total da cidade em número  de habitantes.
    */
  
  float area;
    /*
    Variável  do tipo float que armazena a aárea  total da cidade em km² e pode conter valores decimais.
    */
  
  float pib;
    /*
    Variável  do tipo float que armazena o PIB  total da cidade em bilhões de reais  e pode conter valores decimais.
    */
  
  int pontos turisticos;
    /*
    Variável do tipo inteiro que  armazena os pontos turisticos das cidades.
    */
 
  
  //Área  para entrada de dados 
  
    printf("digite o nome da cidade: ");
      /*
      imprime uma imagwm na tela e pede par que seja digitado o nome da cidade.
      */
  
  scanf(" %[^\n]", cidade);
        /*
        scanf lê o texto digitado e o " %[^\n]" permite ler frases com espaços,
        parando apenas quando o usuário apertar ENTER e o valor digitado será armazenado na variável cidade.
.
        */

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
