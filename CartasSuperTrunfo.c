#include <stdio.h> 
  /*
  Biblioteca enteda e saida da linguaguem em C e sem ela não poderiamos usar printf ou scanf.
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
        /*
       Solicita ao usuário que informe a população da cidade e lê um número inteiro digitado pelo usuário.
        O símbolo & indica o endereço de memória da variável populacao.
        */

  printf("digite a area da cidade (km²): ");
  // scanf("%f", &area); 
        /*
        Solicita a área territorial da cidade e lê um número do tipo float (decimal)
         armazenando  na variável area.
        */
 
  
  printf("digite o PIB da cidade (em bilhoes): ");
  scanf("%f",&pontosturisticos: ); 
        /*
         Solicita o valor do PIB da cidade e lê um número decimal para armazena na variável pib.
        */

   printf("Digite o numero de pontos turisticos");
  scanf("%d, &pontosturisticos: ");
        /*
         Solicita a quantidade de pontos turísticos da cidadee,transforma em número inteiro que é armazenado
        na variável pontosTuristicos.
        */


  
  //Área para exibicao dos dados da cidade



  
 printf("super trunfo cidades");
        /*
        Exibe o título da carta e o \n serve para pular uma linha no terminal.
        */

    printf("Cidade: %s\n", cidade);
        /*
        Exibe o nome da cidade e %s é o especificador para strings.
        */

    printf("Populacao: %d habitantes\n", populacao);
        /*
        Exibe a população da cidade e %d é usado para números inteiros.
        */

    printf("Area: %.2f km²\n", area);
        /*
        Exibe a área da cidade e %.2f limita o número a duas casas decimais.
        */

    printf("PIB: %.2f bilhoes\n", pib);
        /*
        Exibe o PIB da cidade com duas casas decimais.
        */

    printf("Pontos Turisticos: %d\n", pontosTuristicos);
        /*
        Exibe a quantidade de pontos turísticos da cidade.
        */

    return 0;
        /*
        Encerra a função main.
        Retornar 0 indica que o programa terminou corretamente,
        sem erros.
        */
}
