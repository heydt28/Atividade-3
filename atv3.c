#include <stdio.h>

int main() {
    int competidores, vagas;

    printf("Digite o número de competidores: ");
    scanf("%d", &competidores);

    printf("Digite o número mínimo de vagas: ");
    scanf("%d", &vagas);

    int pontuacoes[competidores];
    for (int i = 0; i < competidores; i++) {
        printf("Digite a pontuação do competidor %d: ", i + 1);
        scanf("%d", &pontuacoes[i]);
    }

    for (int i = 1; i < competidores; i++) {
        int chave = pontuacoes[i];
        int j = i - 1;
        while (j >= 0 && pontuacoes[j] < chave) {
            pontuacoes[j + 1] = pontuacoes[j];
            j = j - 1;
        }
        pontuacoes[j + 1] = chave;
    }

    int pontuacao_minima = pontuacoes[vagas - 1];
    int classificados = vagas;

    while (classificados < competidores && pontuacoes[classificados] == pontuacao_minima) {
        classificados++;
    }

    printf("Número de classificados para a próxima fase: %d\n", classificados);

    return 0;
}