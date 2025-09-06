#include <stdio.h>

int main(){
    char estado1[30], estado2[30];
    char cod1[30], cod2[30];
    char cidade1[50], cidade2[30];
    unsigned long int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int turisticos1, turisticos2;
    float densidadepopulacao1, densidadepopulacao2;
    float pibpercapita1, pibpercapita2;
    

    //CADASTRANDO CARTA 1
    printf("cadastre a carta 1:\n");
    printf("Digite a letra do estado: ");
    scanf("%s",&estado1);

    printf("Digite o codigo do estado: ");
    scanf("%s",&cod1);

    printf("Digite o nome da cidade: ");
    scanf("%s",&cidade1);
    
    printf("Digite a populacao da cidade: ");
    scanf("%lu",&pop1);

    printf("Digite a area: ");
    scanf("%f",&area1);
    densidadepopulacao1 = pop1 / area1;
    printf("A Densidade populacional é: %fhab/km²\n", densidadepopulacao1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    pibpercapita1 = pib1 / pop1;
    printf("O PIB per Capita é: %f REAIS\n", pibpercapita1);

    printf("Quantos pontos turisticos: ");
    scanf("%d", &turisticos1);


    printf("-------CARTA 1 CADASTRADA--------\n");
    printf("---------------------------------\n");
    //FIM DO CADASTRO




    //CADASTRANDO CARTA 2
    printf("Cadastre a carta 2:\n");
    printf("Digite a letra do estado: ");
    scanf(" %s",&estado2);

    printf("Digite o codigo do estado: ");
    scanf("%s",&cod2);

    printf("Digite o nome da cidade: ");
    scanf("%s",&cidade2);

    printf("Digite a populacao da cidade: ");
    scanf("%lu",&pop2);

    printf("Digite a area: ");
    scanf("%f",&area2);
    densidadepopulacao2 = pop2 / area2;
    printf("A Densidade populacional é: %fhab/km²\n", densidadepopulacao2);

    printf("Digite o pib: ");
    scanf("%f", &pib2);
    pibpercapita2 = pib2 / pop2;
    printf("O PIB per Capita é: %f REAIS\n", pibpercapita2);

    printf("Quantos pontos turisticos: ");
    scanf("%d", &turisticos2);

    printf("-------CARTA 2 CADASTRADA--------\n");
    printf("---------------------------------\n");
    printf("---------------------------------\n");
    //FIM DO CADASTRO



    //COMPARAÇÃO DAS CARTAS
    printf("-------Comparação de cartas (Atributo: População)...-------\n");

    printf("Carta 1: %s (%s): %lu \n", cidade1, estado1, pop1);
    printf("Carta 2: %s (%s): %lu \n", cidade2, estado2, pop2);
    
    if (pop1 > pop2){
    printf("Resultado: Carta 1 (%s) venceu !", cidade1);}
    if (pop1 < pop2){
    printf("Resultado: Carta 2 (%s) venceu !", cidade2);}
    if (pop1 == pop2){
    printf("Empate !!!\n");}

    //FIM DO PROGRAMA
}

        
    



/* CÓDIGOS QUE NÃO PRECISEI MAIS, MAS POSSO PRECISAR NO FUTURO

    //float superpoder1, superpoder2;
    //superpoder1 = pop1 + area1 + pib1 + turisticos1 + pibpercapita1 + (1 / densidadepopulacao1);
    //superpoder2 = pop2 + area2 + pib2 + turisticos2 + pibpercapita2 + (1 / densidadepopulacao2);


    printf("######################-\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", cod1);
    printf("Cidade: %s\n", cidade1);
    printf("População da carta 1 é maior que carta 2: %d\n", pop1 > pop2);
    printf("Área da carta 1 é maior que a carta 2: %d\n", area1 > area2);
    printf("PIB da carta 1 é maior que da carta 2: %d\n", pib1 > pib2);
    printf("Pontos turisticos da carta 1 é maior que da 2: %d\n", turisticos1 > turisticos2);
    printf("Densidade populacional da carta 1 é menor que da 2: %d\n", densidadepopulacao1 < densidadepopulacao2);
    printf("PIB per capita da carta 1 é maior que da carta 2: %d\n", pibpercapita1 > pibpercapita2);
    printf("o Super poder da carta 1 é maior que da carta 2: %d\n", superpoder1 > superpoder2);
    printf("######################-\n");
    printf("---------------\n");
  
    printf("######################-\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", cod2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", pop2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f reais\n", pib2);
    printf("Pontos turisticos: %d\n", turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacao2);
    printf("PIB per capita: %.2f reais\n", pibpercapita2);
    printf("######################-\n");
*//*
    printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)
    %d: Imprime um numero inteiro no formato decimal
    %i: equivalente a %d
    %f: imprime um número de ponto flutuante no formato padrão
    %e: Imprime um numero de ponto flutuante no formato cientifico
    %c: imprime um unico caractere
    %s: imprime uma cadeia (string) de caracteres    

*/