#include <stdio.h>

int main(){
    char estado1[30], estado2[30]; //país
    char cod1[30], cod2[30];
    char cidade1[50], cidade2[30];
    unsigned long int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int turisticos1, turisticos2;
    float pibpercapita1, pibpercapita2;
    int comparacao1, comparacao2;
    int resultado1, resultado2;
    float superpoder1, superpoder2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;
    float soma1, soma2;
    float densidadepopulacao1, densidadepopulacao2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;
    float soma1, soma2;
    
    
    //EXPLICAO DO JOGO
    printf("***Bem vindos ao Super Trunfo***\n!");
    printf("***Neste Jogo vamos cadastrar duas cartas e a que tiver o maior atributo vence***\n!");
    printf("***Exceto para densidade demografica, neste caso quem tiver o menor valor vence***\n!");
    printf("***Lembrando que vcs selecionam 2 atributos  para a comparação !\n***\n!");

    //CADASTRANDO A CARTA 1
    printf("-------CADASTRE A CARTA 1--------\n");
    printf("=======================================\n");

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
    printf("=======================================\n");
    //FIM DO CADASTRO CARTA 1


    //CADASTRANDO CARTA 2
    printf("=======================================\n");
    printf("-------CADASTRE A CARTA 2--------\n");
    printf("=======================================\n");

    printf("Digite o nome do País:");
    scanf("%s",estado2);

    printf("Digite a Populão:");
    scanf("%lu",&pop2);

    printf("Digite a area:");
    scanf("%f",&area2);
    densidadepopulacao2 = pop2 / area2;

    printf("Digite o PIB:");
    scanf("%f", &pib2);
    pibpercapita2 = pib2 / pop2;
    //printf("O PIB per Capita é: %f REAIS\n", pibpercapita2);

    printf("Quantos pontos turisticos: ");
    scanf("%d", &turisticos2);

   

    printf("-------CARTA 2 CADASTRADA--------\n");
    printf("=======================================\n");
    //FIM DO CADASTRO CARTA 2



    //===========================================================================================================

    //COMPARAÇÃO DAS CARTAS

    printf("-------COMPARAÇÃO DE ATRIBUTOS DAS CARTAS-------\n");
    printf("-------OS ATRIBUTOS SELECIONADOS NÃO PODEM SER IGUAIS-------\n");


    printf("DIGITE O PRIMEIRO ATRIBUTO PARA COMPARAR:\n");
    printf("Digite 1 PARA População - 2 PARA Área - 3 PARA PIB - 4 PARA Pontos Turisticos - 5 PARA Densidade Demográfica\n");
    printf("ATRIBUTO ESCOLHIDO: ");
    scanf("%d", &comparacao1);


    printf("DIGITE O SEGUNDO ATRIBUTO PARA COMPARAR:\n");
    printf("Digite 1 PARA População - 2 PARA Área - 3 PARA PIB - 4 PARA Pontos Turisticos - 5 PARA Densidade Demográfica\n");
    printf("ATRIBUTO ESCOLHIDO: ");
    scanf("%d", &comparacao2);

    if (comparacao1 != comparacao2){
         printf("=======================================\n");
         printf("=======================================\n");
         printf("Carta 1, Nome do País: %s\n", estado1);
         printf("População: %lu\nArea: %f\nPIB: %f\nPontos Turísticos: %d\n", pop1, area1, pib1, turisticos1);
         printf("A Densidade Demografica é: %fhab/km²\n", densidadepopulacao1);
    
         printf("=======================================\n");
         printf("=======================================\n");

         printf("Carta 2, Nome do País: %s\n", estado2);
         printf("População: %lu\nArea: %f\nPIB: %f\nPontos Turísticos: %d\n", pop2, area2, pib2, turisticos2);
         printf("A Densidade Demografica é: %fhab/km²\n", densidadepopulacao2);
         printf("=======================================\n");
         printf("=======================================\n");


         printf("Os Atributos usados na comparação foram %d e %d\n", comparacao1, comparacao2);

//===========================================================================================================

        switch(comparacao1){

        case 1:
            valor1_c1 = pop1;
            valor1_c2 = pop2;
            resultado1 = pop1 > pop2 ? 1: 0;
            printf("De acordo com o Atributo 1 - População\n");
            printf("Entre os Países (%s) e (%s)\n",estado1,estado2);
            if (resultado1 == 1){
                printf("Carta 1 Estado (%s) Ganhou !\n",estado1);

                break;
            if (resultado1 == 0)
                {
                    printf("Carta 2 Estado (%s) Ganhou !\n",estado2);
                }   
                else{
                    printf("Deu empate !!");
                }
            
            }
                
        case 2:
            valor1_c1 = area1;
            valor1_c2 = area2;
            printf("De acordo com o Atributo 2 - Área:\n");
            printf("Entre os Países (%s) e (%s)\n",estado1,estado2);
            if (area1 > area2){
                printf("Carta 1 Estado (%s) Ganhou !",estado1);
                break;
            }
                
            else if (area1 < area2){
                printf("Carta 2 Estado (%s) Ganhou !\n",estado2);
                break;
            }

            else{
                printf("Deu empate !!");
                break;}
             
           
            
        case 3:
            valor1_c1 = pib1;
            valor1_c2 = pib2;
            printf("De acordo com o Atributo 3 - PIB:\n");
            printf("Entre os Países (%s) e (%s)\n",estado1,estado2);
            if (pib1 > pib2){
                printf("Carta 1 Estado (%s) Ganhou !",estado1);
                break;
            }
                

            else if (pib1 < pib2){
                printf("Carta 2 Estado (%s) Ganhou !\n",estado2);
                break;
            }

            else{
                printf("Deu empate !!");
                break;}

            

        case 4:
            valor1_c1 = turisticos1;
            valor1_c2 = turisticos2;
            printf("De acordo com o Atributo 4 - Pontos Turísticos:\n");
            printf("Entre os Países (%s) e (%s)\n",estado1,estado2);
            if (turisticos1 > turisticos2){
                printf("Carta 1 Estado (%s) Ganhou !",estado1);
                break;
            }
                

            else if (turisticos1 < turisticos2){
                printf("Carta 2 Estado (%s) Ganhou !\n",estado2);
                break;
            }

            else{
                printf("Deu empate !!");
                break;}


         case 5:
            valor1_c1 = densidadepopulacao1;
            valor1_c2 = densidadepopulacao2;
            printf("De acordo com o Atributo 5 - Densidade Demografica:\n");
            printf("Entre os Países (%s) e (%s)\n",estado1,estado2);
            if (densidadepopulacao1 < densidadepopulacao2){
                printf("Carta 1 Estado (%s) Ganhou !",estado1);
                break;
            }
                

            else if (densidadepopulacao1 > densidadepopulacao2){
                printf("Carta 2 Estado (%s) Ganhou !\n",estado2);
                break;
            }

            else{
                printf("Deu empate !!");
                break;}

            }
//====================================================================================
        
        switch(comparacao2){

        case 1:
            valor2_c1 = pop1; 
            valor2_c2 = pop2;
            printf("De acordo com o Atributo 1 - População\n");
            printf("Entre os Países (%s) e (%s)\n",estado1,estado2);
            resultado1 = pop1 > pop2 ? 1: 0;
            if (resultado1 == 1){
                printf("Carta 1 Estado (%s) Ganhou !\n",estado1);
                break;

            if (resultado1 == 0)
                {
                printf("Carta 2 Estado (%s) Ganhou !\n",estado2);
                }

            else{
                    
                printf("Deu empate !!");
                }
            
            }
                
        case 2:
            valor2_c1 = area1; 
            valor2_c2 = area2;
            printf("De acordo com o Atributo 2 - Área:\n");
            printf("Entre os Países (%s) e (%s)\n",estado1,estado2);
            if (area1 > area2){
                
                printf("Carta 1 Estado (%s) Ganhou !",estado1);
                break;
            }
                
            else if (area1 < area2){
                
                printf("Carta 2 Estado (%s) Ganhou !\n",estado2);
                break;
            }

            else{
                
                printf("Deu empate !!");
                break;}
             
           
            
        case 3:
            valor2_c1 = pib1; 
            valor2_c2 = pib2;
            printf("De acordo com o Atributo 3 - PIB:\n");
            printf("Entre os Países (%s) e (%s)\n",estado1,estado2);
            if (pib1 > pib2){
                
                printf("Carta 1 Estado (%s) Ganhou !",estado1);
                break;
            }
                

            else if (pib1 < pib2){
               
                printf("Carta 2 Estado (%s) Ganhou !\n",estado2);
                break;
            }

            else{
               
                printf("Deu empate !!");
                break;}

            

        case 4:
            valor2_c1 = turisticos1; 
            valor2_c2 = turisticos2;
            printf("De acordo com o Atributo 4 - Pontos Turísticos:\n");
            printf("Entre os Países (%s) e (%s)\n",estado1,estado2);
            if (turisticos1 > turisticos2){
                
                printf("Carta 1 Estado (%s) Ganhou !",estado1);
                break;
            }
                

            else if (turisticos1 < turisticos2){
                
                printf("Carta 2 Estado (%s) Ganhou !\n",estado2);
                break;
            }

            else{
                
                printf("Deu empate !!");
                break;}



        case 5:
            valor2_c1 = densidadepopulacao1; 
            valor2_c2 = densidadepopulacao2;
            printf("De acordo com o Atributo 5 - Densidade Demografica:\n");
            printf("Entre os Países (%s) e (%s)\n",estado1,estado2);
            if (densidadepopulacao1 < densidadepopulacao2){
               
                printf("Carta 1 Estado (%s) Ganhou !",estado1);
                break;
            }
                

            else if (densidadepopulacao1 > densidadepopulacao2){
                
                printf("Carta 2 Estado (%s) Ganhou !\n",estado2);
                break;
            }

            else{
                
                printf("Deu empate !!");
                break;}



    
        }}
     else{
        printf("Os dois atributos são iguais, por isso a entrada está invalida, reinicie o programa ");
    }
    
    
    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    printf("\n A SOMA DOS ATRIBUTOS PRA CADA CARTA SÃO:\n");
    printf("%s = %.2f\n", estado1, soma1);
    printf("%s = %.2f\n", estado2, soma2);

    if (soma1 > soma2) printf("Vencedor final: %s\n", estado1);
    else if (soma2 > soma1) printf("Vencedor final: %s\n", estado2);
    else printf("Empate!\n");

   

}




    //FIM DO PROGRAMA


        

