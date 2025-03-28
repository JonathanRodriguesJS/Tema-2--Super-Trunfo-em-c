
# Jogo das Cidades: Comparação de Cartas

Este programa permite cadastrar informações sobre duas cidades e compará-las em diferentes atributos para determinar qual cidade é "melhor", com base nos dados fornecidos.

## Descrição

O programa simula um jogo de comparação de cartas, onde duas cidades competem em vários atributos. Cada cidade é representada por uma carta com informações como população, área, PIB, número de pontos turísticos, entre outros. O objetivo é comparar os atributos das duas cartas para determinar qual cidade é a vencedora.

### Funcionalidades:
- Cadastro de duas cidades com diversos dados.
- Cálculo da densidade populacional e PIB per capita.
- Cálculo de um "super poder" para cada cidade, com base em seus atributos.
- Comparação de dois atributos escolhidos entre as duas cidades.
- Exibição dos dados das cidades e o resultado da comparação.

## Como Usar

1. **Compilar o Código:**
   Compile o código C usando um compilador de C (por exemplo, GCC):

   ```bash
   gcc -o jogo_cidades jogo_cidades.c
   ```

2. **Executar o Programa:**
   Após compilar o código, execute o programa gerado:

   ```bash
   ./jogo_cidades
   ```

3. **Cadastro das Cidades:**
   O programa pedirá que você insira as informações das duas cidades:

   - **Estado** (A-H)
   - **Código da carta** (01-04)
   - **Nome da cidade**
   - **População**
   - **Área da cidade** (em km²)
   - **PIB da cidade** (em bilhões de reais)
   - **Número de pontos turísticos**

4. **Escolha dos Atributos para Comparação:**
   O programa apresentará uma lista de atributos que podem ser comparados entre as duas cidades. Você precisará escolher dois atributos para a comparação.

   - 1. População
   - 2. Área
   - 3. PIB
   - 4. Pontos Turísticos
   - 5. PIB per Capita
   - 6. Densidade Populacional
   - 7. Super Poder

5. **Resultado da Comparação:**
   O programa irá exibir os valores dos atributos das duas cidades e determinar a cidade vencedora com base na comparação desses valores.

6. **Exibição dos Dados:**
   Após a comparação, o programa exibirá os dados detalhados das duas cidades cadastradas, incluindo o cálculo da densidade populacional, PIB per capita e o super poder.

## Exemplo de Execução

### Entrada:
```
Digite o estado (A-H): A
Digite o código da carta (01-04): 01
Digite o nome da cidade: Cidade A
Digite a população da cidade: 1000000
Digite a área da cidade (em km²): 500
Digite o PIB da cidade (em bilhões de reais): 50
Digite o número de pontos turísticos: 10
```

```
Digite o estado (A-H): B
Digite o código da carta (01-04): 02
Digite o nome da cidade: Cidade B
Digite a população da cidade: 1500000
Digite a área da cidade (em km²): 600
Digite o PIB da cidade (em bilhões de reais): 40
Digite o número de pontos turísticos: 20
```

### Escolha de Atributos:
```
Digite dois números correspondentes aos atributos: 1 3
```

### Saída:
```
====================================
        🔍 COMPARAÇÃO DAS CIDADES       
====================================
🏙️  Cidade 1: Cidade A 🌆 Cidade 2: Cidade B
------------------------------------
📊 Atributo 1:  1000000.00  vs  1500000.00
📊 Atributo 2:  50.00  vs  40.00
====================================
           RESULTADO FINAL          
====================================
🏆 A cidade vencedora é: Cidade A!
====================================
```

## Como Funciona

- **Cadastro de Cidades:** O programa solicita informações sobre as duas cidades.
- **Cálculos:** O programa calcula a densidade populacional e o PIB per capita de cada cidade.
- **Super Poder:** Uma fórmula personalizada é usada para calcular o "super poder" de cada cidade, baseado em diversos atributos.
- **Comparação de Atributos:** O usuário escolhe dois atributos para comparar. A comparação é feita de acordo com as regras definidas (maior valor ganha, exceto para densidade populacional, onde o menor valor ganha).
- **Resultado:** O vencedor é determinado com base na soma dos pontos dos atributos comparados.

## Considerações

- **Densidade Populacional:** A cidade com a menor densidade populacional vence essa comparação.
- **Atributos:** Para os outros atributos, vence a cidade com o maior valor.

## Contribuindo

Sinta-se à vontade para contribuir com o código! Se encontrar algum erro ou quiser sugerir melhorias, abra um **issue** ou envie um **pull request**.
