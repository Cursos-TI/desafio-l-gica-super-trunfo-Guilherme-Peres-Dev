#include <stdio.h>

int main(){
    char estado1[30], estado2[30]; //país
    char cod1[30], cod2[30];
    char cidade1[50], cidade2[30];
    unsigned long int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int turisticos1, turisticos2;
    float densidadepopulacao1, densidadepopulacao2;
    float pibpercapita1, pibpercapita2;
    int comparacao;
    
    //EXPLICAO DO JOGO
    printf("***Bem vindos ao Super Trunfo***\n!");
    printf("***Neste Jogo vamos cadastrar duas cartas e a que tiver o maior atributo vence***\n!");
    printf("***Exceto para densidade demografica, neste caso quem tiver o menor valor vence***\n!");
    printf("***Lembrando que vcs selecionam qual atributo será selecionado para a comparação !\n***\n!");

    //CADASTRANDO A CARTA 1
    printf("-------CADASTRE A CARTA 1--------\n");
    printf("---------------------------------\n");

    printf("Digite o nome do País:");
    scanf("%s",estado1);

    printf("Digite a População:");
    scanf("%lu", &pop1);

    printf("Digite a area:");
    scanf("%f",&area1);
    densidadepopulacao1 = pop1 / area1;

    printf("Digite o PIB:");
    scanf("%f", &pib1);
    pibpercapita1 = pib1 / pop1;
    //printf("O PIB per Capita é: %f REAIS\n", pibpercapita1);

    printf("Quantos pontos turisticos: ");
    scanf("%d", &turisticos1);

    printf("-------CARTA 1 CADASTRADA--------\n");
    printf("---------------------------------\n");
    //FIM DO CADASTRO CARTA 1


    //CADASTRANDO CARTA 2
    printf("---------------------------------\n");
    printf("-------CADASTRE A CARTA 2--------\n");
    printf("---------------------------------\n");

    printf("Digite o nome do País:");
    scanf("%s",estado2);

    printf("Digite a Populão:");
    scanf("%lu",&pop2);

    printf("Digite a area:");
    scanf("%f",&area2);

    printf("Digite o PIB:");
    scanf("%f", &pib2);
    pibpercapita2 = pib2 / pop2;
    //printf("O PIB per Capita é: %f REAIS\n", pibpercapita2);

    printf("Quantos pontos turisticos: ");
    scanf("%d", &turisticos2);

    densidadepopulacao2 = pop2 / area2;

    printf("-------CARTA 2 CADASTRADA--------\n");
    printf("---------------------------------\n");
    //FIM DO CADASTRO CARTA 2




    //COMPARAÇÃO DAS CARTAS

    printf("-------COMPARAÇÃO DAS CARTAS-------\n");
    printf("QUAL ATRIBBUTO VC DESEJA COMPARAR ? \n");
    printf("Digite 1 PARA População - 2 PARA Área - 3 PARA PIB - 4 PARA Pontos Turisticos - 5 PARA Densidade Demográfica\n");
    printf("NÚMERO ESCOLHIDO  ABAIXO:\n");
    scanf("%d", &comparacao);

    printf("############################\n");
    printf("############################\n");
    printf("Carta 1, Nome do País: %s\n", estado1);
    printf("População: %lu\nArea: %f\nPIB: %f\nPontos Turísticos: %d\n", pop1, area1, pib1, turisticos1);
    printf("A Densidade Demografica é: %fhab/km²\n", densidadepopulacao1);
    
    printf("---------------------------------\n");
    printf("---------------------------------\n");

    printf("Carta 2, Nome do País: %s\n", estado2);
    printf("População: %lu\nArea: %f\nPIB: %f\nPontos Turísticos: %d\n", pop2, area2, pib2, turisticos2);
    printf("A Densidade Demografica é: %fhab/km²\n", densidadepopulacao2);
    printf("############################\n");
    printf("############################\n");



    printf("O Atributo usado na comparação foi %d\n", comparacao);

    switch(comparacao){

        case 1:
            if (pop1 > pop2){
                printf("De acordo com o Atributo 1 - Populção:\n");
                printf("Entre os Países (%s) e (%s)\n",estado1,estado2);
                printf("Carta 1 Estado (%s) Ganhou !",estado1);
                break;
            }
                

            else if (pop1 < pop2){
                printf("De acordo com o Atributo 1 - População:\n");
                printf("Entre os Países (%s) e (%s)\n",estado1,estado2);
                printf("Carta 2 Estado (%s) Ganhou !\n",estado2);
                break;
            }

            else{
                printf("De acordo com o Atributo 1 - População:\n");
                printf("Entre os Países (%s) e (%s)\n",estado1,estado2);
                printf("Deu empate !!");
                break;}
   
           
                
        case 2:
            if (area1 > area2){
                printf("De acordo com o Atributo 2 - Área:\n");
                printf("Entre os Países (%s) e (%s)\n",estado1,estado2);
                printf("Carta 1 Estado (%s) Ganhou !",estado1);
                break;
            }
                

            else if (area1 < area2){
                printf("De acordo com o Atributo 2 - Área:\n");
                printf("Entre os Países (%s) e (%s)\n",estado1,estado2);
                printf("Carta 2 Estado (%s) Ganhou !\n",estado2);
                break;
            }

            else{
                printf("De acordo com o Atributo 2 - Área:\n");
                printf("Entre os Países (%s) e (%s)\n",estado1,estado2);
                printf("Deu empate !!");
                break;}
             
           
            
        case 3:
            if (pib1 > pib2){
                printf("De acordo com o Atributo 3 - PIB:\n");
                printf("Entre os Países (%s) e (%s)\n",estado1,estado2);
                printf("Carta 1 Estado (%s) Ganhou !",estado1);
                break;
            }
                

            else if (pib1 < pib2){
                printf("De acordo com o Atributo 3 - PIB:\n");
                printf("Entre os Países (%s) e (%s)\n",estado1,estado2);
                printf("Carta 2 Estado (%s) Ganhou !\n",estado2);
                break;
            }

            else{
                printf("De acordo com o Atributo 3 - PIB:\n");
                printf("Entre os Países (%s) e (%s)\n",estado1,estado2);
                printf("Deu empate !!");
                break;}

            

        case 4:
            if (turisticos1 > turisticos2){
                printf("De acordo com o Atributo 4 - Pontos Turísticos:\n");
                printf("Entre os Países (%s) e (%s)\n",estado1,estado2);
                printf("Carta 1 Estado (%s) Ganhou !",estado1);
                break;
            }
                

            else if (turisticos1 < turisticos2){
                printf("De acordo com o Atributo 4 - Pontos Turísticos:\n");
                printf("Entre os Países (%s) e (%s)\n",estado1,estado2);
                printf("Carta 2 Estado (%s) Ganhou !\n",estado2);
                break;
            }

            else{
                printf("De acordo com o Atributo 4 - Pontos Turísticos:\n");
                printf("Entre os Países (%s) e (%s)\n",estado1,estado2);
                printf("Deu empate !!");
                break;}




        case 5:
            if (densidadepopulacao1 < densidadepopulacao2){
                printf("De acordo com o Atributo 5 - Densidade Demografica:\n");
                printf("Entre os Países (%s) e (%s)\n",estado1,estado2);
                printf("Carta 1 Estado (%s) Ganhou !",estado1);
                break;
            }
                

            else if (densidadepopulacao1 > densidadepopulacao2){
                printf("De acordo com o Atributo 5 - Densidade Demografica:\n");
                printf("Entre os Países (%s) e (%s)\n",estado1,estado2);
                printf("Carta 2 Estado (%s) Ganhou !\n",estado2);
                break;
            }

            else{
                printf("De acordo com o Atributo 5 - Densidade Demografica:\n");
                printf("Entre os Países (%s) e (%s)\n",estado1,estado2);
                printf("Deu empate !!");
                break;}

                

    }


}




    //FIM DO PROGRAMA


        

