//Logica Super Trunfo - Nível Aventureiro
#include <stdio.h> //inclui a biblioteca padrao do C

int main() //Declara a funcao principal 
{
    // Atributos da Carta 1
    char Carta1[50] = "Carta 1";
    char Codigo1[50] = "MS_01";
    char Estado1[50] = "Mato Grosso do Sul";
    char Cidade1[50] = "Campo Grande";
    unsigned int Pontos_Turisticos1 = 15;
    unsigned long int Populacao1 = 898100;
    float Area1 = 8082.33;
    double PIB1 = 34100000000;
    float Confortodemografico1 = Area1/Populacao1;
    float Superpoder1 = Pontos_Turisticos1 + Populacao1 + Area1 + PIB1 + Confortodemografico1;
    
    // Atributos da Carta 2
    char Carta2[50] = "Carta 2";
    char Codigo2[50] = "PE_01";
    char Estado2[50] = "Pernambuco";
    char Cidade2[50] = "Recife";
    unsigned int Pontos_Turisticos2 = 30;
    unsigned long int Populacao2 = 1488920;
    float Area2 = 218.843;
    double PIB2 = 51600000000;
    float Confortodemografico2 = Area2/Populacao2; // corrigido
    float Superpoder2 = Pontos_Turisticos2 + Populacao2 + Area2 + PIB2 + Confortodemografico2;

    int Opcao;
    int Atributo;
    
    printf("Bem-vindo ao Super Trunfo - Cidades Brasileiras\n");
    printf("Vamos comecar o jogo? Entao prepare-se!\n");
    printf ("Escolha a sua carta: \n");
    printf("1- Carta 1\n");
    printf("2- Carta 2\n");
    scanf("%d", &Opcao);
    getchar(); // para limpar o \n do buffer

    switch (Opcao) {
        case 1:
            printf("Voce escolheu a carta 1. Confira os atributos da carta 1 logo a seguir: \n");
            printf("Codigo: %s\n", Codigo1);
            printf("Estado: %s\n", Estado1);
            printf("Cidade: %s\n", Cidade1);
            printf("Pontos Turisticos: %u\n", Pontos_Turisticos1);
            printf("Populacao: %lu\n", Populacao1);
            printf("Area: %f\n", Area1);
            printf("PIB: %lf\n", PIB1);
            printf("Conforto Demografico: %f\n", Confortodemografico1);
            printf("Superpoder: %f\n\n", Superpoder1);
            
            printf("Escolha o atributo da carta 1. Para escolher o atributo da carta 1, digite o valor correspondente: \n");
            printf("1 Para Pontos Turisticos \n");
            printf("2 Para Populacao \n");
            printf("3 Para Area \n");
            printf("4 Para PIB \n");
            printf("5 Para Conforto Demografico \n");
            printf("6 Para Superpoder \n");
            scanf("%d", &Atributo);
            getchar();

            switch (Atributo) {
                case 1:
                    printf("Voce escolheu o atributo 1 - Pontos Turisticos\n");                    
                                        
                    if (Pontos_Turisticos1 > Pontos_Turisticos2){
                        printf("Pontos Turisticos da Carta 2 = %u\n", Pontos_Turisticos2);  
                        printf("Sua carta tem mais pontos turisticos que a carta do oponente\n");              
                        printf("Sua carta venceu!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }
                    else if (Pontos_Turisticos1 < Pontos_Turisticos2){
                        printf("Pontos Turisticos da Carta 2 = %u\n", Pontos_Turisticos2);   
                        printf("Sua carta tem menos pontos turisticos que a carta do oponente\n");                  
                        printf("Sua carta perdeu!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }
                    else {
                        printf("Pontos Turisticos da Carta 2 = %u\n", Pontos_Turisticos2);  
                        printf("Sua carta tem o mesmo número de pontos turisticos que a carta do oponente\n");                   
                        printf("O jogo empatou!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }                    
                    break;

                case 2:
                    printf("Voce escolheu o atributo 2 - Populacao\n");
                                        
                    if (Populacao1 > Populacao2){
                        printf("Populacao da Carta 2 = %lu\n", Populacao2);  
                        printf("Sua carta tem mais habitantes que a carta do oponente\n");              
                        printf("Sua carta venceu!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }
                    else if (Populacao1 < Populacao2){
                        printf("Populacao da Carta 2 = %lu\n", Populacao2);   
                        printf("Sua carta tem menos habitantes que a carta do oponente\n");                  
                        printf("Sua carta perdeu!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }
                    else {
                        printf("Populacao da Carta 2 = %lu\n", Populacao2);  
                        printf("Sua carta tem o mesmo número de habitantes que a carta do oponente\n");                   
                        printf("O jogo empatou!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }                    
                    break;
                
                case 3:
                    printf("Voce escolheu o atributo 3 - Area\n");                                  
                    if (Area1 > Area2){
                        printf("Area da Carta 2 = %f\n", Area2);  
                        printf("Sua carta tem uma area maior que a da carta do oponente\n");              
                        printf("Sua carta venceu!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }
                    else if (Area1 < Area2){
                        printf("Area da Carta 2 = %f\n", Area2);   
                        printf("Sua carta tem uma area menor que a da carta do oponente\n");                  
                        printf("Sua carta perdeu!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }
                    else {
                        printf("Area da Carta 2 = %f\n", Area2);  
                        printf("Sua carta tem a mesma area que a area da carta do oponente\n");                   
                        printf("O jogo empatou!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }                    
                    break; 

                case 4:
                    printf("Voce escolheu o atributo 4 - PIB\n");
                    if (PIB1 > PIB2){
                        printf("PIB da Carta 2 = %lf\n", PIB2);  
                        printf("Sua carta tem um PIB maior que o da carta do oponente\n");              
                        printf("Sua carta venceu!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }
                    else if (PIB1 < PIB2){
                        printf("PIB da Carta 2 = %lf\n", PIB2);   
                        printf("Sua carta tem um PIB menor que o da carta do oponente\n");                  
                        printf("Sua carta perdeu!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }
                    else {
                        printf("PIB da Carta 2 = %lf\n", PIB2);  
                        printf("Sua carta tem um PIB igual ao da carta do oponente\n");                   
                        printf("O jogo empatou!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }                   
                    break;

                case 5:
                    printf("Voce escolheu o atributo 5 - Conforto demografico\n");                                        
                    if (Confortodemografico1 > Confortodemografico2){
                        printf("Conforto demografico da Carta 2 = %f\n", Confortodemografico2);  
                        printf("Sua carta tem mais conforto demografico que a carta do oponente\n");              
                        printf("Sua carta venceu!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }
                    else if (Confortodemografico1 < Confortodemografico2){
                        printf("Conforto demografico da Carta 2 = %f\n", Confortodemografico2);   
                        printf("Sua carta tem menos conforto demografico que a carta do oponente\n");                  
                        printf("Sua carta perdeu!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }
                    else {
                        printf("Confortodemografico da Carta 2 = %f\n", Confortodemografico2);  
                        printf("Sua carta tem um conforto demografico igual ao da carta do oponente\n");                   
                        printf("O jogo empatou!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }                    
                    break;

                case 6:
                    printf("Voce escolheu o atributo 6 - Superpoder\n");                                        
                    if (Superpoder1 > Superpoder2){
                        printf("Superpoder da Carta 2 = %f\n", Superpoder2);  
                        printf("Sua carta tem mais superpoder que a carta do oponente\n");              
                        printf("Sua carta venceu!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }
                    else if (Superpoder1 < Superpoder2){
                        printf("Superpoder da Carta 2 = %f\n", Superpoder2);   
                        printf("Sua carta tem menos superpoder que a carta do oponente\n");                  
                        printf("Sua carta perdeu!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }
                    else {
                        printf("Superpoder da Carta 2 = %f\n", Superpoder2);  
                        printf("Sua carta superpoder igual ao da carta do oponente\n");                   
                        printf("O jogo empatou!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }                   
                    break;

                default:
                    printf("Opcao invalida. Tente novamente.\n");
                    printf("Pressione ENTER para sair...");
                    getchar();
                    break;
            }
            break;

        case 2:
            printf("Voce escolheu a carta 2. Confira os atributos da carta 2 logo a seguir: \n");
            printf("Codigo: %s\n", Codigo2);
            printf("Estado: %s\n", Estado2);
            printf("Cidade: %s\n", Cidade2);
            printf("Pontos Turisticos: %u\n", Pontos_Turisticos2);
            printf("Populacao: %lu\n", Populacao2);
            printf("Area: %f\n", Area2);
            printf("PIB: %lf\n", PIB2);
            printf("Conforto Demografico: %f\n", Confortodemografico2);
            printf("Superpoder: %f\n\n", Superpoder2);
            
            printf("Escolha o atributo da carta 2. Para escolher o atributo da carta 2, digite o valor correspondente: \n");
            printf("1 Para Pontos Turisticos \n");
            printf("2 Para Populacao \n");
            printf("3 Para Area \n");
            printf("4 Para PIB \n");
            printf("5 Para Conforto Demografico \n");
            printf("6 Para Superpoder \n");
            scanf("%d", &Atributo);
            getchar();

            switch (Atributo) {
                case 1:
                    printf("Voce escolheu o atributo 1 - Pontos Turisticos\n");                    
                                        
                    if (Pontos_Turisticos1 < Pontos_Turisticos2){
                        printf("Pontos Turisticos da Carta 1 = %u\n", Pontos_Turisticos1);  
                        printf("Sua carta tem mais pontos turisticos que a carta do oponente\n");              
                        printf("Sua carta venceu!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }
                    else if (Pontos_Turisticos1 > Pontos_Turisticos2){
                        printf("Pontos Turisticos da Carta 1 = %u\n", Pontos_Turisticos1);   
                        printf("Sua carta tem menos pontos turisticos que a carta do oponente\n");                  
                        printf("Sua carta perdeu!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }
                    else {
                        printf("Pontos Turisticos da Carta 1 = %u\n", Pontos_Turisticos1);  
                        printf("Sua carta tem o mesmo número de pontos turisticos que a carta do oponente\n");                   
                        printf("O jogo empatou!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }                    
                    break;

                case 2:
                    printf("Voce escolheu o atributo 2 - Populacao\n");
                                        
                    if (Populacao1 < Populacao2){
                        printf("Populacao da Carta 1 = %lu\n", Populacao1);  
                        printf("Sua carta tem mais habitantes que a carta do oponente\n");              
                        printf("Sua carta venceu!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }
                    else if (Populacao1 > Populacao2){
                        printf("Populacao da Carta 1 = %lu\n", Populacao1);   
                        printf("Sua carta tem menos habitantes que a carta do oponente\n");                  
                        printf("Sua carta perdeu!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }
                    else {
                        printf("Populacao da Carta 1 = %lu\n", Populacao1);  
                        printf("Sua carta tem o mesmo número de habitantes que a carta do oponente\n");                   
                        printf("O jogo empatou!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }                    
                    break;                    
                                   
                case 3:
                    printf("Voce escolheu o atributo 3 - Area\n");                                  
                    if (Area1 < Area2){
                        printf("Area da Carta 1 = %f\n", Area1);  
                        printf("Sua carta tem uma area maior que a da carta do oponente\n");              
                        printf("Sua carta venceu!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }
                    else if (Area1 > Area2){
                        printf("Area da Carta 1 = %f\n", Area1);   
                        printf("Sua carta tem uma area menor que a da carta do oponente\n");                  
                        printf("Sua carta perdeu!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }
                    else {
                        printf("Area da Carta 1 = %f\n", Area1);  
                        printf("Sua carta tem a mesma area que a area da carta do oponente\n");                   
                        printf("O jogo empatou!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }
                    break; 

                case 4:
                    printf("Voce escolheu o atributo 4 - PIB\n");
                    if (PIB1 < PIB2){
                        printf("PIB da Carta 1 = %lf\n", PIB1);  
                        printf("Sua carta tem um PIB maior que o da carta do oponente\n");              
                        printf("Sua carta venceu!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }
                    else if (PIB1 > PIB2){
                        printf("PIB da Carta 1 = %lf\n", PIB1);   
                        printf("Sua carta tem um PIB menor que o da carta do oponente\n");                  
                        printf("Sua carta perdeu!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }
                    else {
                        printf("PIB da Carta 2 = %lf\n", PIB2);  
                        printf("Sua carta tem um PIB igual ao da carta do oponente\n");                   
                        printf("O jogo empatou!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }
                    break;

                case 5:
                    printf("Voce escolheu o atributo 5 - Conforto demografico\n");                                        
                    if (Confortodemografico1 < Confortodemografico2){
                        printf("Conforto demografico da Carta 1 = %f\n", Confortodemografico1);  
                        printf("Sua carta tem mais conforto demografico que a carta do oponente\n");              
                        printf("Sua carta venceu!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }
                    else if (Confortodemografico1 > Confortodemografico2){
                        printf("Conforto demografico da Carta 1 = %f\n", Confortodemografico1);   
                        printf("Sua carta tem menos conforto demografico que a carta do oponente\n");                  
                        printf("Sua carta perdeu!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }
                    else {
                        printf("Confortodemografico da Carta 1 = %f\n", Confortodemografico1);  
                        printf("Sua carta tem um conforto demografico igual ao da carta do oponente\n");                   
                        printf("O jogo empatou!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }
                    break;

                case 6:
                    printf("Voce escolheu o atributo 6 - Superpoder\n");                                        
                    if (Superpoder1 < Superpoder2){
                        printf("Superpoder da Carta 1 = %f\n", Superpoder1);  
                        printf("Sua carta tem mais superpoder que a carta do oponente\n");              
                        printf("Sua carta venceu!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }
                    else if (Superpoder1 > Superpoder2){
                        printf("Superpoder da Carta 1 = %f\n", Superpoder1);   
                        printf("Sua carta tem menos superpoder que a carta do oponente\n");                  
                        printf("Sua carta perdeu!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }
                    else {
                        printf("Superpoder da Carta 1 = %f\n", Superpoder1);  
                        printf("Sua carta superpoder igual ao da carta do oponente\n");                   
                        printf("O jogo empatou!\n");
                        printf("Pressione ENTER para sair...");
                        getchar();
                    }
                    break;

                default:
                    printf("Opcao invalida. Tente novamente.\n");
                    printf("Pressione ENTER para sair...");
                    getchar();
                    break;
            }            
            break;

        default:
            printf("Opcao invalida. Tente novamente.\n"); 
            printf("Pressione ENTER para sair...");
            getchar();                       
            break;
    }
    return 0;
}
