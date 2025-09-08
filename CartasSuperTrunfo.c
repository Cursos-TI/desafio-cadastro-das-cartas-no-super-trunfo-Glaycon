#include <stdio.h>

//Por Glaycon Oliveira


int main() { //atividade principal

    //cidade 1
    int carta_1, n_pontos_turisticos_1; //int numeros inteiros
    char estado_1; //char e apenas uma letra A a H
    double area_1, pib_1, populacao_1, densidade_populacional_1, pib_per_capita_1; //float numeros com fraçoes
    char codigo_1[50], nome_da_cidade_1[50]; //char com definição de quantos caracteres pode conter no valor da variavel, ainda não entendi direito como funciona.

    
    //cidade 2
    int carta_2, n_pontos_turisticos_2; //int numeros inteiros
    char estado_2; //char e apenas uma letra A a H
    double area_2, pib_2, populacao_2, densidade_populacional_2, pib_per_capita_2; //float numeros com fraçoes
    char codigo_2[50], nome_da_cidade_2[50]; //char com definição de quantos caracteres pode conter no valor da variavel, ainda não entendi direito como funciona.

    //Mensagem de Bem Vindo Colorido
    printf("\033[1;31mC\033[1;32ma\033[1;33mr\033[1;34mt\033[1;35ma\033[1;36ms \033[1;31md\033[1;32mo \033[1;33mS\033[1;34mu\033[1;35mp\033[1;36me\033[1;32mr \033[1;31mT\033[1;33mr\033[1;34mu\033[1;35mn\033[1;36mf\033[1;32mo\033[0m\n");
    
    //Proximas linhas 26 ate 42 Formulario para o usuario inserir os dados das variaveis!
    // Cidade 1
    printf("Insira o nome da Cidade 1: ");
    scanf("%s", nome_da_cidade_1); //Ainda não entendi o funcionamento do & - Em %s string nao precisa do &
    printf("Insira o codigo da Cidade 1: ");
    scanf("%s", codigo_1);
    printf("Insira o Estado da Cidade 1: ");
    scanf(" %c", &estado_1); // Em alguns casos um espaço antes do especificador evita um bug que aparece duas perguntas juntas.
    printf("Insira o numero da carta da Cidade 1: ");
    scanf(" %i", &carta_1);
    printf("Insira a população da Cidade 1: ");
    scanf(" %lf", &populacao_1);
    printf("Insira a area em km da Cidade 1: ");
    scanf("%lf", &area_1);
    printf("Insira o PIB da Cidade 1: ");
    scanf("%lf", &pib_1);
    printf("Insira o número de Pontos Turísticos da Cidade 1:");
    scanf("%i", &n_pontos_turisticos_1);
    densidade_populacional_1 = (double) populacao_1 / area_1;
    pib_per_capita_1 = (double) pib_1 / populacao_1;
    printf("\n\n\n\033[1;32mObrigado por inserir todos os dados!\033[0m\n\n\n");

    //Proximas linhas 46 ate 62 Formulario para o usuario inserir os dados das variaveis!
    // Cidade 2
    printf("Insira o nome da Cidade 2: ");
    scanf("%s", nome_da_cidade_2); //Ainda não entendi o funcionamento do & - Em %s string nao precisa do &
    printf("Insira o codigo da Cidade 2: ");
    scanf("%s", codigo_2);
    printf("Insira o Estado da Cidade 2: ");
    scanf(" %c", &estado_2); // Em alguns casos um espaço antes do especificador evita um bug que aparece duas perguntas juntas.
    printf("Insira o numero da carta da Cidade 2: ");
    scanf(" %i", &carta_2);
    printf("Insira a população da Cidade 2: ");
    scanf(" %lf", &populacao_2);
    printf("Insira a area em km da Cidade 2: ");
    scanf("%lf", &area_2);
    printf("Insira o PIB da Cidade 2: ");
    scanf("%lf", &pib_2);
    printf("Insira o número de Pontos Turísticos da Cidade 2:");
    scanf("%i", &n_pontos_turisticos_2);
    densidade_populacional_2 = (double)(populacao_2 / area_2);
    pib_per_capita_2 = (double)(pib_2 / populacao_2);
    printf("\n\n\n\033[1;32mObrigado por inserir todos os dados!\033[0m\n\n\n");

    //Exibir dados das cartas
    printf("--- Dados Cidade 1 %s\n ---", nome_da_cidade_1);
    printf("Carta: %i\n", carta_1);
    printf("Cidade: %s\n", nome_da_cidade_1);
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("População: %.0lf habitantes\n", populacao_1);
    printf("Área: %.2lf km²\n", area_1);
    printf("PIB: %.2lf bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %i\n", n_pontos_turisticos_1);
    printf("Densidade Populacional: %.2f\n", densidade_populacional_1);
    printf("PIB per Capita: %.2f\n", pib_per_capita_1);
    
    printf("---------------------------------------------\n\n\n");

    printf("--- Dados Cidade 2 %s\n ---", nome_da_cidade_2);
    printf("Carta: %i\n", carta_2);
    printf("Cidade: %s\n", nome_da_cidade_2);
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("População: %.0lf habitantes\n", populacao_2);
    printf("Área: %.2lf km²\n", area_2);
    printf("PIB: %.2lf bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %i\n", n_pontos_turisticos_2);
    printf("Densidade Populacional: %.2f\n", densidade_populacional_2);
    printf("PIB per Capita: %.2f\n", pib_per_capita_2);
    printf("---------------------------------------------\n\n\n");



    return 0;
}
