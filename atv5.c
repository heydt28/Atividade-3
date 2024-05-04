#include <stdio.h>

int main() {
    char repetir = 'S'; 
    while (repetir == 'S' || repetir == 's') { 
        int quantidade;
        float valor_produto, total_compra = 0, media_itens = 0;
        int contador_itens = 0;

        printf("Digite a quantidade e o valor do produto (digite 0 ou negativo para finalizar):\n");

        while (1) {
            printf("\nQuantidade: ");
            scanf("%d", &quantidade);

            if (quantidade <= 0)
                break;

            printf("Valor unitario: ");
            scanf("%f", &valor_produto);

            if (valor_produto <= 0) {
                printf("\nValor invalido! Insira um valor positivo.");
            } else {
                total_compra += quantidade * valor_produto;
                contador_itens += quantidade;
            }
        }

        if (total_compra > 0) {
            media_itens = total_compra / contador_itens;
            printf("\nValor total da compra: R$ %.2f\n", total_compra);
            printf("Valor medio dos itens comprados: R$ %.2f\n", media_itens);

            int reais = (int)total_compra;
            int centavos = (total_compra - reais) * 100;
            printf("\nValor total da compra em %d reais e 0.%02d centavos \n", reais, centavos);


            float troco = 0;
            int notas_100, notas_50, notas_20, notas_10, notas_5, notas_2, moedas_1;

            troco = reais;

            notas_100 = troco / 100;
            troco -= notas_100 * 100;

            notas_50 = troco / 50;
            troco -= notas_50 * 50;

            notas_20 = troco / 20;
            troco -= notas_20 * 20;

            notas_10 = troco / 10;
            troco -= notas_10 * 10;

            notas_5 = troco / 5;
            troco -= notas_5 * 5;

            notas_2 = troco / 2;
            troco -= notas_2 * 2;

            moedas_1 = troco;

            printf("\n%d Equivalente a:\n",reais);
            if(notas_100!=0)printf("Notas de 100: %d\n", notas_100);
            if(notas_50!=0)printf("Notas de 50: %d\n", notas_50);
            if(notas_20!=0)printf("Notas de 20: %d\n", notas_20);
            if(notas_10!=0)printf("Notas de 10: %d\n", notas_10);
            if(notas_5!=0)printf("Notas de 5: %d\n", notas_5);
            if(notas_2!=0)printf("Notas de 2: %d\n", notas_2);
            if(moedas_1!=0)printf("Moedas de 1: %d\n", moedas_1);
        } else {
            printf("\nNenhuma compra realizada.\n");
        }
        while(getchar() != '\n');
        printf("\nDeseja repetir o programa? (S - Sim, N - Não): ");
        scanf("%c", &repetir); 
    }

    return 0;
}