
#include <stdio.h>

int main(void) {
    int andares[3];
    printf("Digite quantos passoas em cada andar:\n");
    for (int i = 0; i < 3; i++) {
        printf("Andar %i: ", i + 1);
        while (scanf("%i", &andares[i]) != 1 || andares[i] < 0 || andares[i] > 1000) {
            printf("Entrada inválida. Digite novamente: ");
            while (getchar() != '\n');
        }
    }
    int menor = (2 * andares[1]) + (4 * andares[2]);
    int temp = (2 * andares[0]) + (2 * andares[2]);
    if (temp < menor) menor = temp;
    temp = (4 * andares[0]) + (2 * andares[1]);
    if (temp < menor) menor = temp;

    printf("Menor tempo: %i\n", menor);
    return 0;
}
