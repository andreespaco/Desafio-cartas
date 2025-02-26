#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

//Densidade Populacional: População dividida pela área da cidade.
//PIB per capita: PIB total dividido pela população.

int main() {

 unsigned long int  populacao1, pontosT1;
 unsigned long int  populacao2, pontosT2;
 float area1, pib1, densidade1, pib2;
 float area2, pib01, densidade2, pib02;
 double super, super2;
 char cidade1[50], cidade2[50], codigo1[50], codigo2[50], estado1[50], estado2[50];
 
 printf("Insira os dados da primeira carta\n");
printf("Digite o codigo da carta:");
scanf("%s" , &codigo1);

printf("Digite o Estado:");
scanf("%s", &estado1);

printf("Digite o nome da cidade:");
scanf("%s" , &cidade1);

printf("Digite o numero da populacao:");
scanf("%d" , &populacao1);

printf("Digite a area da cidade:");
scanf("%f" , &area1);

printf("Didite o numero de pontos turisticos:");
scanf("%d" , &pontosT1); 

printf("DIgite o pib total:");
scanf("%f", &pib1);
printf("\n");

//Agora vamos inserir os dados da segunda carta
//Agora as variaveis tem o mesmo nome + o numero 2
//Exeto pela variavel "pib" ela sea adicionada 01 "pib01" e o pib per capita "pib02"

printf("Agora insira os dados da segunda carta\n");
printf("Digite o codigo da carta:");
scanf("%s" , &codigo2);

printf("Digite o Estado:");
scanf("%s", &estado2);

printf("Digite o nome da cidade:");
scanf("%s" , &cidade2);

printf("Digite o numero da populacao:");
scanf("%d" , &populacao2);

printf("Digite a area da cidade:");
scanf("%f" , &area2);

printf("Didite o numero de pontos turisticos:");
scanf("%d" , &pontosT2);

printf("DIgite o PIB total:");
scanf("%f", &pib2);


densidade1 = populacao1 / area1;
densidade2 = populacao2 / area2;
pib2 = pib1 / populacao1;
pib02 = pib02 / pontosT2;
super = populacao1 + area1 + pontosT1 + pib1;
super2 = populacao2 + area2 + pontosT2 + pib01;

printf("\n");
printf("Hora do duelo\n");

printf("Carta 1 Codigo: %s - Estado: %s - Nome da cidade: %s - Populacao: %d\n", codigo1, estado1, cidade1, populacao1);
printf("Carta 2 Codigo: %s - Estado: %s - Nome da cidade: %s - Populacao: %d\n", codigo2, estado2, cidade2, populacao2);
if(populacao1 > populacao2){
    printf("Carta 1 Venceu!\n");
}else{
    printf("Carta 2 Venceu!\n");
}
printf("Carta 1 Codigo: %s - Estado: %s - Nome da cidade: %s - Area: %f\n", codigo1, estado1, cidade1, area1);
printf("Carta 2 Codigo: %s - Estado: %s - Nome da cidade: %s - Area: %f\n", codigo2, estado2, cidade2, area2);
if(area1 > area2){
    printf("Carta 1 Venceu!\n");
}else{
    printf("Carta 2 Venceu!\n");
}
printf("Carta 1 Codigo: %s - Estado: %s - Nome da cidade: %s - Pontos Turisticos: %d\n", codigo1, estado1, cidade1, pontosT1);
printf("Carta 2 Codigo: %s - Estado: %s - Nome da cidade: %s - Pontos Turisticos: %d\n", codigo2, estado2, cidade2, pontosT2);
if(pontosT1 > pontosT2){
    printf("Carta 1 Venceu!\n");
}else{
    printf("Carta 2 Venceu!\n");
}
printf("Carta 1 Codigo: %s - Estado: %s - Nome da cidade: %s - Pib: %f\n", codigo1, estado1, cidade1, pib1);
printf("Carta 2 Codigo: %s - Estado: %s - Nome da cidade: %s - pib: %f\n", codigo2, estado2, cidade2, pib01);
if(pib1 > pib01){
    printf("Carta 1 Venceu!\n");      
}else{
    printf("Carta 2 Venceu!\n");
}
printf("Carta 1 Codigo: %s - Estado: %s - Nome da cidade: %s - Densidade: %f\n", codigo1, estado1, cidade1, densidade1);
printf("Carta 2 Codigo: %s - Estado: %s - Nome da cidade: %s - Densidade: %f\n", codigo2, estado2, cidade2, densidade2);
if (densidade1 < densidade2){
    printf("Carta 1 Venceu!\n");
}else{
    printf("Carta 2 Venceu!\n");
}
printf("Carta 1 Codigo: %s - Estado: %s - Nome da cidade: %s - PIB PER Capita: %f\n", codigo1, estado1, cidade1, pib2);
printf("Carta 2 Codigo: %s - Estado: %s - Nome da cidade: %s - PIB PER Capita: %f\n", codigo2, estado2, cidade2, pib02);
if (pib01 > pib02){
    printf("Carta 1 Venceu!\n");
}else{
    printf("Carta 2 Venceu!\n");
}
printf("Carta 1 Codigo: %s - Estado: %s - Nome da cidade: %s - Super Poder: %f\n", codigo1, estado1, cidade1, super);
printf("Carta 2 Codigo: %s - Estado: %s - Nome da cidade: %s - Super Poder: %f\n", codigo2, estado2, cidade2, super2);
if (super > super2){
    printf("Carta 1 Venceu!\n");
}else{
    printf("Carta 2 Venceu!\n"); 
} 

return 0;
}   