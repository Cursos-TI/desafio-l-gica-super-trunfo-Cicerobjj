//Comparando as cartas do super trunfo - nível novato

#include <stdio.h> //inclui a biblioteca padrão do C

    int main(){ //Declara a função principal 

        // Variáveis da Carta 1
        char Carta1[50] = "Carta 1", Codigo1[50], Estado1[50], Cidade1[50];
        unsigned int Pontos_Turisticos1;
        unsigned long int Populacao1;
        float Area1;
        double PIB1;
        
        // Variáveis da Carta 2
        char Carta2[50] = "Carta 2", Codigo2[50], Estado2[50], Cidade2[50];
        unsigned int Pontos_Turisticos2;
        unsigned long int Populacao2;
        float Area2;
        double PIB2;
 
            //Solicita ao usuário a inserção das variáveis da Carta 1
            printf("Criando as Cartas do Super Trunfo\n");
            printf("%s\n", Carta1);
            printf("Digite o Codigo da Carta: ");
            fgets(Codigo1, 50, stdin);
            printf("Digite a Sigla do Estado: ");
            fgets(Estado1, 50, stdin);
            printf("Insira o Nome da Cidade: ");
            fgets(Cidade1, 50, stdin);
            printf("Quantidade de habitantes: ");
            scanf("%lu", &Populacao1);
            printf("Digite a Area da Cidade em km2: ");
            scanf("%f", &Area1);
            printf("Digite o PIB anual da cidade: ");
            scanf("%lf", &PIB1);
            printf("Quantidade de Pontos Turisticos: ");
            scanf("%u", &Pontos_Turisticos1);
            getchar();

                //Cálculo da densidade populacional, do PIB per capta e do inverso da densidade da Carta 1
                float Densidade1 = (float) Populacao1/Area1;
                float PIB_Percapta1 = (float) PIB1/Populacao1;
                double Inversodadensidade1 = (float) Area1/Populacao1;

                //Cálculo do superpoder da Carta 1
                double Superpoder1 = Populacao1 + PIB_Percapta1 + PIB1 + Area1 + Inversodadensidade1 + Pontos_Turisticos1;

            //Impressão das variáveis declaradas da Carta 1
            printf("%s\n", Carta1);
            printf("Codigo: %s\n", Codigo1);
            printf("Estado: %s\n", Estado1);
            printf("Cidade: %s\n", Cidade1);
            printf("Populacao: %lu\n", Populacao1);
            printf("Area: %.2f km2\n", Area1);
            printf("Densidade Populacional: %.2f\n", Densidade1);
            printf("PIB: %.2lf\n", PIB1);
            printf("PIB Percapta: %.2f\n", PIB_Percapta1);
            printf("Pontos Turisticos: %u\n", Pontos_Turisticos1);
            printf("Super poder: %.2lf\n", Superpoder1);
            printf("Carta1 cadastrada com sucesso\n\n");

            //Solicita ao usuário a inserção das variáveis da Carta 2
            printf("%s\n", Carta2);
            printf("Digite o Codigo da Carta: ");
            fgets(Codigo2, 50, stdin);
            printf("Digite a Sigla do Estado: ");
            fgets(Estado2, 50, stdin);
            printf("Insira o Nome da Cidade: ");
            fgets(Cidade2, 50, stdin);
            printf("Quantidade de habitantes: ");
            scanf("%lu", &Populacao2);
            printf("Digite a Area da Cidade em km2: ");
            scanf("%f", &Area2);
            printf("Digite o PIB anual da cidade: ");
            scanf("%lf", &PIB2);
            printf("Quantidade de Pontos Turisticos: ");
            scanf("%u", &Pontos_Turisticos2);
    
                //Cálculo da densidade populacional, do PIB per capta e do inverso da densidade da Carta 2
                float Densidade2 = (float) Populacao2/Area2;
                float PIB_Percapta2 = (float) PIB2/Populacao2;
                double Inversodadensidade2 = (float) Area2/Populacao2;

                //Cálculo do superpoder da Carta 2
                double Superpoder2 = Populacao2 + PIB_Percapta2 + PIB2 + Area2 + Inversodadensidade2 + Pontos_Turisticos2;

            //Impressão das variáveis declaradas da Carta 2
            printf("%s\n", Carta2);
            printf("Codigo: %s\n", Codigo2);
            printf("Estado: %s\n", Estado2);
            printf("Cidade: %s\n", Cidade2);
            printf("Populacao: %lu\n", Populacao2);
            printf("Area: %.2f km2\n", Area2);
            printf("Densidade Populacional: %.2f\n", Densidade2);
            printf("PIB: %.2lf\n", PIB2);
            printf("PIB Percapta: %.2f\n", PIB_Percapta2);
            printf("Pontos Turisticos: %u\n", Pontos_Turisticos2);
            printf("Super poder: %.2lf\n",Superpoder2);
            printf("Carta2 cadastrada com sucesso\n\n");
        
            //Imprimindo as comparações
             printf("COMPARANDO AS VARIAVEIS\n");
            printf("Populacao da Carta 1 > Populacao da Carta 2: %d\n", Populacao1 > Populacao2);
            printf("Area da Carta 1 > Area da Carta 2: %d\n", Area1 > Area2);
            printf("PIB da Carta 1 > PIB da Carta 2: %d\n", PIB1 > PIB2);
            printf("Pib Per Capta da Carta 1 > Pib Per Capta da Carta 2: %d\n", PIB_Percapta1 > PIB_Percapta2);
            printf("Pontos Turisticos da Carta 1 > Pontos Turisticos da Carta 2: %d\n", Pontos_Turisticos1 > Pontos_Turisticos2);
            printf("Super Poder da Carta 1 > Super Poder da carta 2: %d\n", Superpoder1 > Superpoder2);
            printf("Todas as cartas foram cadastradas com sucesso\n");
            
            //Comparando a varíavel superpoder para determinar a carta vencedora
            if (Superpoder1 > Superpoder2) {
            printf("A carta 1 venceu\n");
            } else {
            printf("A carta 2 venceu\n");
            }

            getchar(); //Impede o fechamento automático da janela no prompt cmd
            printf("Pressione Enter para sair...\n");//Solicita ao usuário que pressione a tecla enter para fechar a aplicação
            getchar(); //Impede o fechamento automático da janela no prompt cmd

            return 0; //Fim da função principal.

}