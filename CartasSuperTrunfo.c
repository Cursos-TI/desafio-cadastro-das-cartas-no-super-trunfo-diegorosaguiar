    #include<stdio.h>

    int main(){



        // Declarações das variáveis
        
        char estado1;
        char estado2;
        char codigodacarta1 [2];
        char codigodacarta2 [2];
        char nomedacidade1 [20];
        char nomedacidade2 [20];
        int numerodepontosturisticos1, numerodepontosturisticos2, opcoesMenu;
        unsigned long int populacao1, populacao2;
        float area1, area2, pib1, pib2, densidade1, densidade2, percapita1, percapita2, superPoder1, superPoder2;

        /// Comparação entre atributos específicos das Cidades 
        //float area1 = 500;
        //float area2 = 1000;

       

        // Carta 1 - recolhimento de informações

        printf("Olá usuário! Precisamos da sua ajuda no cadastramento das cartas do Super Trunfo! Por favor preencha as informações solicitadas:\n");
        printf("\n");

        printf("Defina uma letra de 'A' a 'H' para essa carta: ");
        scanf("%c", &estado1);
        printf ("\n");
        
        printf("Agora defina qual código essa carta deverá ter entre '01' a '04': ");
        scanf("%s", &codigodacarta1);
        printf ("\n");

        printf("Qual a Cidade dessa carta? ");
        scanf("%s", &nomedacidade1);
        printf ("\n");

        printf("Qual o número de habitantes da cidade? ");
        scanf("%lu", &populacao1);
        printf ("\n");

        /// Comparação entre atributos específicos das Cidades 
        //printf ("Área da cidade: %f\n", area1);
        
        printf("Qual a área da cidade em quilômetros quadradados? ");
        scanf("%f", &area1);
        printf ("\n");

        printf("Qual o valor do produto interno bruto? ");
        scanf("%f", &pib1);
        printf ("\n");

        printf("Qual a quantidade de pontos turísticos da cidade? ");
        scanf("%d", &numerodepontosturisticos1);
        printf ("\n");
        


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

        printf("Defina uma letra de 'A' a 'H' para essa carta: ");
        scanf("%c", &estado2);
        printf ("\n");

        printf("Agora defina qual código essa carta deverá ter entre '01' a '04': ");
        scanf("%s", &codigodacarta2);
        printf ("\n");

        printf("Qual a Cidade dessa carta? ");
        scanf("%s", &nomedacidade2);
        printf ("\n");

        printf("Qual o número de habitantes da cidade? ");
        scanf("%lu", &populacao2);
        printf ("\n");

        /// Comparação entre atributos específicos das Cidades 
        /// Coprintf ("Área da cidade: %f\n", area2);
        
        printf("Qual a área da cidade em quilômetros quadradados? ");
        scanf("%f", &area2);
        printf ("\n");

        printf("Qual o valor do produto interno bruto? ");
        scanf("%f", &pib2);
        printf ("\n");

        printf("Qual a quantidade de pontos turísticos da cidade? ");
        scanf("%d", &numerodepontosturisticos2);
        printf ("\n");
        


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



        // Comparações entre as cartas 1 e 2 a partir da escolha de opções

        printf("Agora vamos comparar os atributos de cada carta! Selecione abaixo um atributo:\n");
        printf ("1. População\n");
        printf ("2. Área\n");
        printf ("3. PIB\n");
        printf ("4. Número de pontos turísticos\n");
        printf ("5. Densidade demográfica\n");
        scanf ("%d", &opcoesMenu);
        printf ("\n");

        switch (opcoesMenu)
        {
        case 1:
            if (populacao1 > populacao2) 
            {
                printf ("Atributo escolhido: População\n");
                printf ("Cidade: %s\n", nomedacidade1); 
                printf ("Valor do Atributo: %lu habitantes\n", populacao1);
                printf ("Carta 1 código %c%s é a vencedora!\n", estado1, codigodacarta1);                
            } else if (populacao1 < populacao2)
            {
                printf ("Atributo escolhido: População\n");
                printf ("Cidade: %s\n", nomedacidade2); 
                printf ("Valor do Atributo: %lu habitantes\n", populacao2);
                printf ("Carta 2 código %c%s é a vencedora!\n", estado2, codigodacarta2);
            } else 
            {
                printf ("Houve um empate!\n");
            }
            break;
        case 2:
            if (area1 > area2) 
            {
                printf ("Atributo escolhido: Área\n");
                printf ("Cidade: %s\n", nomedacidade1);
                printf ("Valor do Atributo: %.2f km2\n", area1);
                printf ("Carta 1 código %c%s é a vencedora!\n", estado1, codigodacarta1);
            } else if (area1 < area2)
            {
                printf ("Atributo escolhido: Área\n");
                printf ("Cidade: %s\n", nomedacidade2);
                printf ("Valor do Atributo: %.2f km2\n", area2);
                printf ("Carta 2 código %c%s é a vencedora!\n", estado2, codigodacarta2);
            } else 
            {
                printf ("Houve um empate!\n");
            }
            break;
        case 3:
            if (pib1 > pib2) 
            {
                printf ("Atributo escolhido: PIB\n");
                printf ("Cidade: %s\n", nomedacidade1); 
                printf ("Valor do Atributo: %.2f milhões em Reais\n", pib1);
                printf ("Carta 1 código %c%s é a vencedora!\n", estado1, codigodacarta1);                
            } else if (pib1 < pib2)
            {
                printf ("Atributo escolhido: PIB\n");
                printf ("Cidade: %s\n", nomedacidade2); 
                printf ("Valor do Atributo: %.2f milhões em Reais\n", pib2);
                printf ("Carta 2 código %c%s é a vencedora!\n", estado2, codigodacarta2);
            } else 
            {
                printf ("Houve um empate!\n");
            }            
            break;
        case 4:
            if (numerodepontosturisticos1 > numerodepontosturisticos2) 
            {
                printf ("Atributo escolhido: Número de Pontos Turísticos\n");
                printf ("Cidade: %s\n", nomedacidade1);
                printf ("Valor do Atributo: %d pontos turísticos\n", numerodepontosturisticos1);
                printf ("Carta 1 código %c%s é a vencedora!\n", estado1, codigodacarta1);
            } else if (numerodepontosturisticos1 < numerodepontosturisticos2)
            {
                printf ("Atributo escolhido: Número de Pontos Turísticos\n");
                printf ("Cidade: %s\n", nomedacidade2); 
                printf ("Valor do Atributo: %d pontos turísticos\n", numerodepontosturisticos2);
                printf ("Carta 2 código %c%s é a vencedora!\n", estado2, codigodacarta2);                
            } else 
            {
                printf ("Houve um empate!\n");
            }
            break;
        case 5:
            if (densidade1 < densidade2) 
            {
                printf ("Atributo escolhido: Densidade Demográfica\n");
                printf ("Cidade: %s\n", nomedacidade1);
                printf ("Valor do Atributo: %f hab/km2\n", densidade1);
                printf ("Carta 1 código %c%s é a vencedora!\n", estado1, codigodacarta1);
            } else if (densidade1 > densidade2)
            {
                printf ("Atributo escolhido: Densidade Demográfica\n");
                printf ("Cidade: %s\n", nomedacidade2);
                printf ("Valor do Atributo: %f hab/km2\n", densidade2);
                printf ("Carta 2 código %c%s é a vencedora!\n", estado2, codigodacarta2);
            } else 
            {
                printf ("Houve um empate!\n");
            }
            break;
        default:
                printf ("Escolha uma opção válida.\n");
            break;
        }

        
        
        // Comparação entre as cartas 1 e 2 e todos os atributos
        
        //printf("População: %d\n", populacao1 > populacao2);
        //printf("Área: %d\n", area1 > area2); 
        //printf("PIB: %d\n", pib1 > pib2); 
        //printf("Pontos Turísticos: %d\n", numerodepontosturisticos1 > numerodepontosturisticos2); 
        //printf("Densidade Populacional: %d\n", densidade1 < densidade2); 
        //printf("PIB Percapita: %d\n", percapita1 > percapita2); 
        //printf("Super Poder: %d\n", superPoder1 > superPoder2); 
        //printf("\n");



        // Comparação entre atributos específicos das Cidades
        
        //printf ("Comparação entre o atributo Área das cidades:\n");
        //printf ("%s: %f\n", nomedacidade1, area1);
        //printf ("%s: %f\n", nomedacidade2, area2);
        //printf("\n");
        
        // if (area1 > area2){
        //    printf ("A cidade %s é a campeã em área de extensão!\n", nomedacidade1);

        // } else {
        //    printf ("A cidade %s é a campeã em área de extensão!\n", nomedacidade2);
        //}

        //printf("\n");


        return 0;
    }