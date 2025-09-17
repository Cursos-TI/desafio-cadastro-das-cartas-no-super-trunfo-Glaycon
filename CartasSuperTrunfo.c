#include <stdio.h>
#include <stdlib.h>

//Por Glaycon Oliveira
int main() {
    char nome_da_cidade_1[50], codigo_1[50];
    char estado_1;
    unsigned long int populacao_1;
    double area_1, pib_1;
    int n_pontos_turisticos_1;
    double densidade_populacional_1, pib_per_capita_1;

    char nome_da_cidade_2[50], codigo_2[50];
    char estado_2;
    unsigned long int populacao_2;
    double area_2, pib_2;
    int n_pontos_turisticos_2;
    double densidade_populacional_2, pib_per_capita_2;
    
    int escolha_menu, atributo1_escolha, atributo2_escolha;
    double valor_atributo1_carta1 = 0, valor_atributo1_carta2 = 0;
    double valor_atributo2_carta1 = 0, valor_atributo2_carta2 = 0;
    double soma_carta1, soma_carta2;
    char nome_atributo1[50], nome_atributo2[50];

    printf("\033[1;31mC\033[1;32ma\033[1;33mr\033[1;34mt\033[1;35ma\033[1;36ms \033[1;31md\033[1;32mo \033[1;33mS\033[1;34mu\033[1;35mp\033[1;36me\033[1;32mr \033[1;31mT\033[1;33mr\033[1;34mu\033[1;35mn\033[1;36mf\033[1;32mo\033[0m\n");
    
    printf("--- Dados da Carta 1 ---\n");
    printf("Insira o nome da Cidade 1: ");
    scanf("%s", nome_da_cidade_1); 
    printf("Insira o codigo da Cidade 1: ");
    scanf("%s", codigo_1);
    printf("Insira o Estado (apenas uma letra) da Cidade 1: ");
    scanf(" %c", &estado_1); 
    printf("Insira a população da Cidade 1: ");
    scanf(" %lu", &populacao_1);
    printf("Insira a area em km² da Cidade 1: ");
    scanf("%lf", &area_1);
    printf("Insira o PIB (em bilhões de reais) da Cidade 1: ");
    scanf("%lf", &pib_1);
    printf("Insira o número de Pontos Turísticos da Cidade 1: ");
    scanf("%i", &n_pontos_turisticos_1);
    
    densidade_populacional_1 = (double)populacao_1 / area_1;
    pib_per_capita_1 = (pib_1 * 1000000000) / populacao_1;
    
    printf("\n\n\n\033[1;32mDados da Cidade 1 inseridos com sucesso!\033[0m\n\n\n");

    printf("--- Dados da Carta 2 ---\n");
    printf("Insira o nome da Cidade 2: ");
    scanf("%s", nome_da_cidade_2); 
    printf("Insira o codigo da Cidade 2: ");
    scanf("%s", codigo_2);
    printf("Insira o Estado (apenas uma letra) da Cidade 2: ");
    scanf(" %c", &estado_2); 
    printf("Insira a população da Cidade 2: ");
    scanf(" %lu", &populacao_2);
    printf("Insira a area em km² da Cidade 2: ");
    scanf("%lf", &area_2);
    printf("Insira o PIB (em bilhões de reais) da Cidade 2: ");
    scanf("%lf", &pib_2);
    printf("Insira o número de Pontos Turísticos da Cidade 2: ");
    scanf("%i", &n_pontos_turisticos_2);
    
    densidade_populacional_2 = (double)populacao_2 / area_2;
    pib_per_capita_2 = (pib_2 * 1000000000) / populacao_2;

    printf("\n\n\n\033[1;32mDados da Cidade 2 inseridos com sucesso!\033[0m\n\n\n");

    do {
        printf("\n--- MENU SUPER TRUNFO ---\n");
        printf("1 - Comparar Cartas\n");
        printf("2 - Sair do Jogo\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha_menu);

        switch(escolha_menu) {
            case 1:
                printf("\nEscolha o PRIMEIRO atributo para comparar:\n");
                printf("1 - População\n");
                printf("2 - Área\n");
                printf("3 - PIB\n");
                printf("4 - Pontos Turísticos\n");
                printf("5 - Densidade Populacional (menor vence)\n");
                printf("6 - PIB per Capita\n");
                printf("Sua escolha: ");
                scanf("%d", &atributo1_escolha);
                
                printf("\nEscolha o SEGUNDO atributo para comparar:\n");
                if (atributo1_escolha != 1) printf("1 - População\n");
                if (atributo1_escolha != 2) printf("2 - Área\n");
                if (atributo1_escolha != 3) printf("3 - PIB\n");
                if (atributo1_escolha != 4) printf("4 - Pontos Turísticos\n");
                if (atributo1_escolha != 5) printf("5 - Densidade Populacional (menor vence)\n");
                if (atributo1_escolha != 6) printf("6 - PIB per Capita\n");
                printf("Sua escolha: ");
                scanf("%d", &atributo2_escolha);

                if (atributo1_escolha == atributo2_escolha) {
                    printf("\n\033[1;31mErro: Você não pode escolher o mesmo atributo duas vezes. Tente novamente.\033[0m\n");
                    continue;
                }

                switch(atributo1_escolha) {
                    case 1: sprintf(nome_atributo1, "População"); valor_atributo1_carta1 = populacao_1; valor_atributo1_carta2 = populacao_2; break;
                    case 2: sprintf(nome_atributo1, "Área"); valor_atributo1_carta1 = area_1; valor_atributo1_carta2 = area_2; break;
                    case 3: sprintf(nome_atributo1, "PIB"); valor_atributo1_carta1 = pib_1; valor_atributo1_carta2 = pib_2; break;
                    case 4: sprintf(nome_atributo1, "Pontos Turísticos"); valor_atributo1_carta1 = n_pontos_turisticos_1; valor_atributo1_carta2 = n_pontos_turisticos_2; break;
                    case 5: sprintf(nome_atributo1, "Densidade Populacional"); valor_atributo1_carta1 = (densidade_populacional_1 < densidade_populacional_2) ? 1000 : 1; valor_atributo1_carta2 = (densidade_populacional_2 < densidade_populacional_1) ? 1000 : 1; break;
                    case 6: sprintf(nome_atributo1, "PIB per Capita"); valor_atributo1_carta1 = pib_per_capita_1; valor_atributo1_carta2 = pib_per_capita_2; break;
                    default: printf("\n\033[1;31mOpção inválida para o primeiro atributo.\033[0m\n"); continue;
                }

                switch(atributo2_escolha) {
                    case 1: sprintf(nome_atributo2, "População"); valor_atributo2_carta1 = populacao_1; valor_atributo2_carta2 = populacao_2; break;
                    case 2: sprintf(nome_atributo2, "Área"); valor_atributo2_carta1 = area_1; valor_atributo2_carta2 = area_2; break;
                    case 3: sprintf(nome_atributo2, "PIB"); valor_atributo2_carta1 = pib_1; valor_atributo2_carta2 = pib_2; break;
                    case 4: sprintf(nome_atributo2, "Pontos Turísticos"); valor_atributo2_carta1 = n_pontos_turisticos_1; valor_atributo2_carta2 = n_pontos_turisticos_2; break;
                    case 5: sprintf(nome_atributo2, "Densidade Populacional"); valor_atributo2_carta1 = (densidade_populacional_1 < densidade_populacional_2) ? 1000 : 1; valor_atributo2_carta2 = (densidade_populacional_2 < densidade_populacional_1) ? 1000 : 1; break;
                    case 6: sprintf(nome_atributo2, "PIB per Capita"); valor_atributo2_carta1 = pib_per_capita_1; valor_atributo2_carta2 = pib_per_capita_2; break;
                    default: printf("\n\033[1;31mOpção inválida para o segundo atributo.\033[0m\n"); continue;
                }

                soma_carta1 = valor_atributo1_carta1 + valor_atributo2_carta1;
                soma_carta2 = valor_atributo1_carta2 + valor_atributo2_carta2;

                printf("\n\n--- RESULTADO DA COMPARAÇÃO ---\n");
                printf("Atributos escolhidos: %s e %s\n", nome_atributo1, nome_atributo2);
                printf("------------------------------------------\n");
                printf("Carta 1: %s (%c)\n", nome_da_cidade_1, estado_1);
                printf(" - %s: %.2f\n", nome_atributo1, (atributo1_escolha == 5) ? densidade_populacional_1 : valor_atributo1_carta1);
                printf(" - %s: %.2f\n", nome_atributo2, (atributo2_escolha == 5) ? densidade_populacional_1 : valor_atributo2_carta1);
                printf(" - SOMA TOTAL: %.2f\n", soma_carta1);
                printf("------------------------------------------\n");
                printf("Carta 2: %s (%c)\n", nome_da_cidade_2, estado_2);
                printf(" - %s: %.2f\n", nome_atributo1, (atributo1_escolha == 5) ? densidade_populacional_2 : valor_atributo1_carta2);
                printf(" - %s: %.2f\n", nome_atributo2, (atributo2_escolha == 5) ? densidade_populacional_2 : valor_atributo2_carta2);
                printf(" - SOMA TOTAL: %.2f\n", soma_carta2);
                printf("------------------------------------------\n");
                
                if (soma_carta1 > soma_carta2) {
                    printf("\n\033[1;32mVENCEDOR: Carta 1 (%s) venceu!\033[0m\n", nome_da_cidade_1);
                } else if (soma_carta2 > soma_carta1) {
                    printf("\n\033[1;32mVENCEDOR: Carta 2 (%s) venceu!\033[0m\n", nome_da_cidade_2);
                } else {
                    printf("\n\033[1;33mRESULTADO: Empate!\033[0m\n");
                }
                break;
            
            case 2:
                printf("\nSaindo do jogo... Obrigado por jogar!\n");
                break;
                
            default:
                printf("\n\033[1;31mOpção inválida. Por favor, escolha 1 para comparar ou 2 para sair.\033[0m\n");
                break;
        }

    } while (escolha_menu != 2);

    return 0;
}