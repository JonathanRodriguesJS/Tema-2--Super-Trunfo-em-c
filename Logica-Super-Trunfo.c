#include <stdio.h>

int main()
{
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    int atributoEscolhido1;
    int atributoEscolhido2;

    // Captura dos dados da primeira carta
    printf("\n=============================================\n");
    printf("        📜 Cadastro da Primeira Carta        \n");
    printf("=============================================\n\n");

    printf("▶ Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("▶ Digite o código da carta (01-04): ");
    scanf("%s", codigo1);

    printf("▶ Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("▶ Digite a população da cidade: ");
    scanf("%lu", &populacao1);

    printf("▶ Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("▶ Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("▶ Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n✅ Primeira carta cadastrada com sucesso!\n");

    // Captura dos dados da segunda carta
    printf("\n=============================================\n");
    printf("        📜 Cadastro da Segunda Carta        \n");
    printf("=============================================\n\n");

    printf("▶ Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("▶ Digite o código da carta (01-04): ");
    scanf("%s", codigo2);

    printf("▶ Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("▶ Digite a população da cidade: ");
    scanf("%lu", &populacao2);

    printf("▶ Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("▶ Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("▶ Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n✅ Segunda carta cadastrada com sucesso!\n");

    // calcula a densidade populacional e o pib percapita das cartas
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 * 1000000000 / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 * 1000000000 / populacao2;

    // adiciona super poder.
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    // Captura atributos a serem comparados
    printf("\n=============================================\n");
    printf("     Escolha dois atributos diferentes\n");
    printf("         para serem comparados:\n");
    printf("=============================================\n\n");

    printf("╔══════════════════════════════════╗\n");
    printf("║  1. População                    ║\n");
    printf("║  2. Área                         ║\n");
    printf("║  3. PIB                          ║\n");
    printf("║  4. Pontos Turísticos            ║\n");
    printf("║  5. PIB per Capita               ║\n");
    printf("║  6. Densidade Populacional       ║\n");
    printf("║  7. Super Poder                  ║\n");
    printf("╚══════════════════════════════════╝\n\n");

    printf("Digite dois números correspondentes aos atributos: ");
    scanf("%d %d", &atributoEscolhido1, &atributoEscolhido2);

    // verifica se entrada do usuario é permitida
    if (atributoEscolhido1 == atributoEscolhido2)
    {
        printf("Você escolheu o mesmo atributo!\n");
    }
    else if ((atributoEscolhido1 || atributoEscolhido2) < 1 || (atributoEscolhido1 || atributoEscolhido2) > 7)
    {
        printf("Escolha uma alternativa válida!\n");
    }
    else
    {
        // Variáveis para armazenar os valores escolhidos
        float valor1 = 0, valor2 = 0;
        float valor3 = 0, valor4 = 0;

        // Define os valores do primeiro atributo escolhido
        switch (atributoEscolhido1)
        {
        case 1:
            valor1 = populacao1;
            valor2 = populacao2;
            break;
        case 2:
            valor1 = area1;
            valor2 = area2;
            break;
        case 3:
            valor1 = pib1;
            valor2 = pib2;
            break;
        case 4:
            valor1 = pontosTuristicos1;
            valor2 = pontosTuristicos2;
            break;
        case 5:
            valor1 = pibPerCapita1;
            valor2 = pibPerCapita2;
            break;
        case 6:
            valor1 = densidade1;
            valor2 = densidade2;
            break;
        case 7:
            valor1 = superPoder1;
            valor2 = superPoder2;
            break;
        }

        // Define os valores do segundo atributo escolhido
        switch (atributoEscolhido2)
        {
        case 1:
            valor3 = populacao1;
            valor4 = populacao2;
            break;
        case 2:
            valor3 = area1;
            valor4 = area2;
            break;
        case 3:
            valor3 = pib1;
            valor4 = pib2;
            break;
        case 4:
            valor3 = pontosTuristicos1;
            valor4 = pontosTuristicos2;
            break;
        case 5:
            valor3 = pibPerCapita1;
            valor4 = pibPerCapita2;
            break;
        case 6:
            valor3 = densidade1;
            valor4 = densidade2;
            break;
        case 7:
            valor3 = superPoder1;
            valor4 = superPoder2;
            break;
        }

        // Exibir os valores escolhidos
        printf("\n====================================\n");
        printf("        🔍 COMPARAÇÃO DAS CIDADES       \n");
        printf("====================================\n");

        printf("🏙️  Cidade 1: %-20s 🌆 Cidade 2: %s\n", nomeCidade1, nomeCidade2);
        printf("------------------------------------\n");
        printf("📊 Atributo 1:  %.2f  vs  %.2f\n", valor1, valor2);
        printf("📊 Atributo 2:  %.2f  vs  %.2f\n", valor3, valor4);

        printf("====================================\n");

        // Verifica vencedores individuais
        int pontosCarta1 = 0, pontosCarta2 = 0;
        float resultadoFinal1 = 0.0;
        float resultadoFinal2 = 0.0;

        // Comparação do primeiro atributo
        if (atributoEscolhido1 == 6)
        { // Densidade populacional (menor vence)
            if (valor1 < valor2)
                pontosCarta1++;
            else
                pontosCarta2++;
        }
        else
        { // Demais atributos (maior vence)
            if (valor1 > valor2)
                pontosCarta1++;
            else
                pontosCarta2++;
        }

        // Comparação do segundo atributo
        if (atributoEscolhido2 == 6)
        { // Densidade populacional (menor vence)
            if (valor3 < valor4)
                pontosCarta1++;
            else
                pontosCarta2++;
        }
        else
        { // Demais atributos (maior vence)
            if (valor3 > valor4)
                pontosCarta1++;
            else
                pontosCarta2++;
        }

        // soma para conquista.
        resultadoFinal1 = valor1 + valor3;
        resultadoFinal2 = valor2 + valor4;

        // Exibir o resultado final
        printf("\n====================================\n");
        printf("           RESULTADO FINAL          \n");
        printf("====================================\n");

        if (resultadoFinal1 > resultadoFinal2)
        {
            printf("\n🏆 A cidade vencedora é: %s!\n", nomeCidade1);
        }
        else if (resultadoFinal2 > resultadoFinal1)
        {
            printf("\n🏆 A cidade vencedora é: %s!\n", nomeCidade2);
        }
        else
        {
            printf("\n🤝 Empate! Nenhuma cidade levou a melhor desta vez.\n");
        }

        printf("====================================\n");

        // Exibição dos dados cadastrados
        printf("\n=====================================\n");
        printf("          Cartas Cadastradas          ");
        printf("\n=====================================\n\n");

        printf("*************** Carta 1 ***************\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %c%s\n", estado1, codigo1);
        printf("Nome da Cidade: %s\n", nomeCidade1);
        printf("População: %lu\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
        printf("Densidade populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
        printf("SUPER-PODER: %.2f\n", superPoder1);
        printf("***************************************\n\n");

        printf("*************** Carta 2 ***************\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %c%s\n", estado2, codigo2);
        printf("Nome da Cidade: %s\n", nomeCidade2);
        printf("População: %lu\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
        printf("Densidade populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
        printf("SUPER-PODER: %.2f\n", superPoder2);
        printf("***************************************\n\n");

        return 0;
    }
}