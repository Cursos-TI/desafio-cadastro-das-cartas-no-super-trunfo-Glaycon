#include <stdio.h>

//Por Glaycon Oliveira


int main() { //atividade principal

    //cidade 1
    int carta_1, n_pontos_turisticos_1; //int numeros inteiros
    char estado_1; //char e apenas uma letra A a H
    unsigned long int populacao_1; // Agora a população é unsigned long int para números maiores
    double area_1, pib_1, densidade_populacional_1, pib_per_capita_1; //double para numeros com fraçoes e mais precisão
    float super_poder_1; // Super Poder para float
    char codigo_1[50], nome_da_cidade_1[50]; //char com definição de quantos caracteres pode conter no valor da variavel, ainda não entendi direito como funciona.

    
    //cidade 2
    int carta_2, n_pontos_turisticos_2; //int numeros inteiros
    char estado_2; //char e apenas uma letra A a H
    unsigned long int populacao_2; // Agora a população é unsigned long int para números maiores
    double area_2, pib_2, densidade_populacional_2, pib_per_capita_2; //double para numeros com fraçoes e mais precisão
    float super_poder_2; // Super Poder para float
    char codigo_2[50], nome_da_cidade_2[50]; //char com definição de quantos caracteres pode conter no valor da variavel, ainda não entendi direito como funciona.

    //Mensagem de Bem Vindo Colorido
    printf("\033[1;31mC\033[1;32ma\033[1;33mr\033[1;34mt\033[1;35ma\033[1;36ms \033[1;31md\033[1;32mo \033[1;33mS\033[1;34mu\033[1;35mp\033[1;36me\033[1;32mr \033[1;31mT\033[1;33mr\033[1;34mu\033[1;35mn\033[1;36mf\033[1;32mo\033[0m\n");
    
    //Formulário para o usuário inserir os dados da Cidade 1
    printf("--- Dados da Carta 1 ---\n");
    printf("Insira o nome da Cidade 1: ");
    scanf("%s", nome_da_cidade_1); 
    printf("Insira o codigo da Cidade 1: ");
    scanf("%s", codigo_1);
    printf("Insira o Estado (apenas uma letra) da Cidade 1: ");
    scanf(" %c", &estado_1); 
    printf("Insira o numero da carta da Cidade 1: ");
    scanf(" %i", &carta_1);
    printf("Insira a população da Cidade 1: ");
    scanf(" %lu", &populacao_1); // Usamos %lu para unsigned long int
    printf("Insira a area em km² da Cidade 1: ");
    scanf("%lf", &area_1);
    printf("Insira o PIB (em bilhões de reais) da Cidade 1: ");
    scanf("%lf", &pib_1);
    printf("Insira o número de Pontos Turísticos da Cidade 1: ");
    scanf("%i", &n_pontos_turisticos_1);
    
    // Cálculos para a Cidade 1
    densidade_populacional_1 = (double)populacao_1 / area_1;
    pib_per_capita_1 = (double)pib_1 / populacao_1;
    // Cálculo do Super Poder 1
    super_poder_1 = (float)populacao_1 + (float)area_1 + (float)pib_1 + (float)n_pontos_turisticos_1 + (float)pib_per_capita_1 + (float)(1.0 / densidade_populacional_1);
    
    printf("\n\n\n\033[1;32mDados da Cidade 1 inseridos com sucesso!\033[0m\n\n\n");

    //Formulário para o usuário inserir os dados da Cidade 2
    printf("--- Dados da Carta 2 ---\n");
    printf("Insira o nome da Cidade 2: ");
    scanf("%s", nome_da_cidade_2); 
    printf("Insira o codigo da Cidade 2: ");
    scanf("%s", codigo_2);
    printf("Insira o Estado (apenas uma letra) da Cidade 2: ");
    scanf(" %c", &estado_2); 
    printf("Insira o numero da carta da Cidade 2: ");
    scanf(" %i", &carta_2);
    printf("Insira a população da Cidade 2: ");
    scanf(" %lu", &populacao_2); // Usamos %lu para unsigned long int
    printf("Insira a area em km² da Cidade 2: ");
    scanf("%lf", &area_2);
    printf("Insira o PIB (em bilhões de reais) da Cidade 2: ");
    scanf("%lf", &pib_2);
    printf("Insira o número de Pontos Turísticos da Cidade 2: ");
    scanf("%i", &n_pontos_turisticos_2);
    
    // Cálculos para a Cidade 2
    densidade_populacional_2 = (double)populacao_2 / area_2;
    pib_per_capita_2 = (double)pib_2 / populacao_2;
    // Cálculo do Super Poder 2
    super_poder_2 = (float)populacao_2 + (float)area_2 + (float)pib_2 + (float)n_pontos_turisticos_2 + (float)pib_per_capita_2 + (float)(1.0 / densidade_populacional_2);

    printf("\n\n\n\033[1;32mDados da Cidade 2 inseridos com sucesso!\033[0m\n\n\n");

    //Exibir dados das cartas
    printf("--- Dados Cidade 1 - %s ---\n", nome_da_cidade_1);
    printf("Carta: %i\n", carta_1);
    printf("Cidade: %s\n", nome_da_cidade_1);
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("População: %lu habitantes\n", populacao_1); // %lu para unsigned long int
    printf("Área: %.2lf km²\n", area_1);
    printf("PIB: %.2lf bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %i\n", n_pontos_turisticos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_1);
    printf("PIB per Capita: %.2f R$\n", pib_per_capita_1);
    printf("Super Poder: %.2f\n", super_poder_1);
    printf("---------------------------------------------\n\n");

    printf("--- Dados Cidade 2 - %s ---\n", nome_da_cidade_2);
    printf("Carta: %i\n", carta_2);
    printf("Cidade: %s\n", nome_da_cidade_2);
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("População: %lu habitantes\n", populacao_2); // %lu para unsigned long int
    printf("Área: %.2lf km²\n", area_2);
    printf("PIB: %.2lf bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %i\n", n_pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_2);
    printf("PIB per Capita: %.2f R$\n", pib_per_capita_2);
    printf("Super Poder: %.2f\n", super_poder_2);
    printf("---------------------------------------------\n\n");

    // Comparação de Cartas
    printf("Comparação de Cartas:\n");

    printf("População: Carta %d venceu (%d)\n", (populacao_1 > populacao_2 ? 1 : 2), (populacao_1 > populacao_2 ? 1 : 0));
    printf("Área: Carta %d venceu (%d)\n", (area_1 > area_2 ? 1 : 2), (area_1 > area_2 ? 1 : 0));
    printf("PIB: Carta %d venceu (%d)\n", (pib_1 > pib_2 ? 1 : 2), (pib_1 > pib_2 ? 1 : 0));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (n_pontos_turisticos_1 > n_pontos_turisticos_2 ? 1 : 2), (n_pontos_turisticos_1 > n_pontos_turisticos_2 ? 1 : 0));
    // Densidade Populacional: o menor valor vence
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade_populacional_1 < densidade_populacional_2 ? 1 : 2), (densidade_populacional_1 < densidade_populacional_2 ? 1 : 0));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_per_capita_1 > pib_per_capita_2 ? 1 : 2), (pib_per_capita_1 > pib_per_capita_2 ? 1 : 0));
    printf("Super Poder: Carta %d venceu (%d)\n", (super_poder_1 > super_poder_2 ? 1 : 2), (super_poder_1 > super_poder_2 ? 1 : 0));


    return 0;
}