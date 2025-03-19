#include<stdio.h>

int main(){

    char estado = 'A';
    char codigodacarta[5];
    char nomedacidade[20];
    int populacao, numerodepontosturisticos;
    float area, pib, densidade, percapita;

    printf("Olá usuário! Precisamos da sua ajuda no cadastramento das cartas do Super Trunfo! Por favor preencha as informações solicitadas:\n");
    printf("\n");

    printf("Defina uma letra de 'A' a 'H' para essa carta. ");
    scanf(" %c", &estado);
    printf("\n");

    printf("Agora defina qual código essa carta deverá ter entre '01' a '04'. ");
    scanf(" %s", &codigodacarta);
    printf("\n");
            
    printf("Qual a Cidade dessa carta? ");
    scanf(" %s", &nomedacidade);
    printf("\n");

    printf("Qual o número de habitantes da cidade? ");
    scanf("%d", &populacao);
    printf("\n");

    printf("Qual a área da cidade em quilômetros quadradados? ");
    scanf("%f", &area);
    printf("\n");

    printf("Qual o valor do produto interno bruto? ");
    scanf("%f", &pib);
    printf("\n");
    
    printf("Qual a quantidade de pontos turísticos da cidade? ");
    scanf("%d", &numerodepontosturisticos);
    printf("\n");
    
    printf("Obrigado pelas informações! Carta cadastrada com sucesso! Segue abaixo o resumo do cadastro.\n");
    printf("\n");
        
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigodacarta);
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Números de pontos turísticos: %d\n", numerodepontosturisticos);

    densidade = populacao / area;
    printf("Densidade populacional: %.2f\n", densidade);

    percapita = pib / populacao;
    printf("PIB Per Capita: %2f\n", percapita);
    printf("\n");
    

    
    printf("Me ajuda a cadastrar outra carta?\n");
    printf("\n");

    printf("Defina uma letra de 'A' a 'H' para essa carta. ");
    scanf(" %c", &estado);
    printf("\n");

    printf("Agora defina qual código essa carta deverá ter entre '01' a '04'. ");
    scanf(" %s", &codigodacarta);
    printf("\n");
            
    printf("Qual a Cidade dessa carta? ");
    scanf(" %s", &nomedacidade);
    printf("\n");

    printf("Qual o número de habitantes da cidade? ");
    scanf("%d", &populacao);
    printf("\n");

    printf("Qual a área da cidade em quilômetros quadradados? ");
    scanf("%f", &area);
    printf("\n");

    printf("Qual o valor do produto interno bruto? ");
    scanf("%f", &pib);
    printf("\n");
    
    printf("Qual a quantidade de pontos turísticos da cidade? ");
    scanf("%d", &numerodepontosturisticos);
    printf("\n");
   
    printf("Obrigado pelas informações! Carta cadastrada com sucesso! Segue abaixo o resumo do cadastro.\n");
    printf("\n");
        
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigodacarta);
    printf("Nome da cidade: %s\n", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Números de pontos turísticos: %d\n", numerodepontosturisticos);

    densidade = populacao / area;
    printf("Densidade populacional: %.2f\n", densidade);

    percapita = pib / populacao;
    printf("PIB Per Capita: %2f\n", percapita);
    

}
