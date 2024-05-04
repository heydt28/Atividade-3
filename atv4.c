#include <stdio.h>

int main() {
    int numero, conta, inverso, soma, verificador;
    do {
        printf("Digite o numero da conta (4 digitos): ");
        scanf("%d", &numero);
        while(getchar()!='\n');
    } while (numero < 1000 || numero > 9999);

    conta = numero / 10;
    inverso=(conta%10*100)+((conta/10)%10*10)+(conta/100);
  
    soma = conta + inverso;

    verificador=((soma%10*3)+((soma/10)%10*2)+((soma/100)%10))%10;
  
    if ((numero % 10) == verificador) {
        printf("O numero da conta esta correto!\n");
    } else printf("O numero da conta esta incorreto!\n");

    return 0;
}