    #include<stdio.h>

    int main(){


        // Declarações das variáveis
        

        char estado1, estado2 = 'A';
        char codigodacarta1 [2], codigodacarta2 [2];
        char nomedacidade1 [20], nomedacidade2 [20];
        int numerodepontosturisticos1, numerodepontosturisticos2;
        unsigned long int populacao1, populacao2;
        float area1, area2, pib1, pib2, densidade1, densidade2, percapita1, percapita2, superPoder1, superPoder2;


        // Carta 1 - recolhimento de informações


        printf("Olá usuário! Precisamos da sua ajuda no cadastramento das cartas do Super Trunfo! Por favor preencha as informações solicitadas:\n");
        printf("\n");

        printf("Defina uma letra de 'A' a 'H' para essa carta. ");
        scanf("%c", &estado1);
        printf("\n");

        printf("Agora defina qual código essa carta deverá ter entre '01' a '04'. ");
        scanf("%s", &codigodacarta1);
        printf("\n");
                
        printf("Qual a Cidade dessa carta? ");
        scanf("%s", &nomedacidade1);
        printf("\n");

        printf("Qual o número de habitantes da cidade? ");
        scanf("%lu", &populacao1);
        printf("\n");

        printf("Qual a área da cidade em quilômetros quadradados? ");
        scanf("%f", &area1);
        printf("\n");

        printf("Qual o valor do produto interno bruto? ");
        scanf("%f", &pib1);
        printf("\n");
        
        printf("Qual a quantidade de pontos turísticos da cidade? ");
        scanf("%d", &numerodepontosturisticos1);
        printf("\n");
        

        // Carta 1 - exibição das informações


        printf("Obrigado pelas informações! Carta cadastrada com sucesso! Segue abaixo o resumo do cadastro.\n");
        printf("\n");
            
        printf("Estado: %c\n", estado1);
        printf("Código da carta: %c%s\n", estado1, codigodacarta1);
        printf("Nome da cidade: %s\n", nomedacidade1);
        printf("População: %lu\n", populacao1);
        printf("Área: %f km2\n", area1);
        printf("PIB: %.2f milhões de reais\n", pib1);
        printf("Números de pontos turísticos: %d\n", numerodepontosturisticos1);


        // Carta 1 - cálculos


        densidade1 = populacao1 / area1;
        printf("Densidade populacional: %.2f hab/km2\n", densidade1);

        percapita1 = pib1 / populacao1;
        printf("PIB Per Capita: %.2f reais\n", percapita1);
            
        superPoder1 = populacao1 + area1 + pib1 + percapita1 + (1 / densidade1) + numerodepontosturisticos1;
        printf("Super Poder da carta: %.2f\n", superPoder1);
        printf("\n");
        
        
        // Carta 2 - recolhimento de informações

        printf("Me ajuda a cadastrar outra carta?\n");
        printf("\n");

        printf("Defina uma letra de 'A' a 'H' para essa carta. ");
        scanf("%c", &estado2);
        printf("\n");

        printf("Agora defina qual código essa carta deverá ter entre '01' a '04'. ");
        scanf("%s", &codigodacarta2);
        printf("\n");
                
        printf("Qual a Cidade dessa carta? ");
        scanf("%s", &nomedacidade2);
        printf("\n");

        printf("Qual o número de habitantes da cidade? ");
        scanf("%lu", &populacao2);
        printf("\n");

        printf("Qual a área da cidade em quilômetros quadradados? ");
        scanf("%f", &area2);
        printf("\n");

        printf("Qual o valor do produto interno bruto? ");
        scanf("%f", &pib2);
        printf("\n");
        
        printf("Qual a quantidade de pontos turísticos da cidade? ");
        scanf("%d", &numerodepontosturisticos2);
        printf("\n");
    

        // Carta 2 - exibição das informações


        printf("Obrigado pelas informações! Carta cadastrada com sucesso! Segue abaixo o resumo do cadastro.\n");
        printf("\n");
        
        printf("Estado: %c\n", estado2);
        printf("Código da carta: %c%s\n", estado2, codigodacarta2);
        printf("Nome da cidade: %s\n", nomedacidade2);
        printf("População: %lu\n", populacao2);
        printf("Área: %f km2\n", area2);
        printf("PIB: %.2f milhões de reais\n", pib2);
        printf("Números de pontos turísticos: %d\n", numerodepontosturisticos2);


        // Carta 2 - cálculos


        densidade2 = populacao2 / area2;
        printf("Densidade populacional: %.2f hab/km2\n", densidade2);

        percapita2 = pib2 / populacao2;
        printf("PIB Per Capita: %.2f reais\n", percapita2);

        superPoder2 = populacao2 + area2 + pib2 + percapita2 + (1 / densidade2) + numerodepontosturisticos2;
        printf("Super Poder da carta: %.2f\n", superPoder2);
        printf("\n");


        // Comparações entre as cartas 1 e 2


        printf("Agora vamos comparar a carta campeã! \n");
        printf("População: %d\n", populacao1 > populacao2);
        printf("Área: %d\n", area1 > area2); 
        printf("PIB: %d\n", pib1 > pib2); 
        printf("Pontos Turísticos: %d\n", numerodepontosturisticos1 > numerodepontosturisticos2); 
        printf("Densidade Populacional: %d\n", densidade1 > densidade2); 
        printf("PIB Percapita: %d\n", percapita1 > percapita2); 
        printf("Super Poder: %d\n", superPoder1 > superPoder2); 

        return 0;
    }
