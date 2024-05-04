#include <stdio.h>

void limpabuffer(void){
  while(getchar() != '\n');
}


int main(void) {
  
  float VBemInicial;
  int anos;
  printf("Informe o valor do bem a ser depreciado: ");
  scanf("%f",&VBemInicial);
  printf("\nInforme operiodo da depreciação <Em anos>:  ");
  scanf("%i",&anos);
  float VBem[anos], VDepre[anos], VBemDepre[anos];
  
  VBem[0] = VBemInicial;
  VDepre[0] = VBem[0]*0.015;
  VBemDepre[0] = VBem[0] - VDepre[0];
  printf("Ano\t\t\t Valor Do bem \t\t Depreciação \t\t Valor depreciado\n");
  printf("=====================================================================");
  printf("\n %i\t\t\t %.2f \t\t\t %.2f \t\t\t\t %.2f",1,VBem[0],VDepre[0],VBemDepre[0]);
  for(int i = 1; i<anos; i++){
    VBem[i] = VBemDepre[i-1];
    VDepre[i] = VBem[i]*0.015;
    VBemDepre[i] = VBem[i] - VDepre[i];
    printf("\n %i\t\t\t %.2f \t\t\t %.2f \t\t\t\t %.2f",i+1,VBem[i],VDepre[i],VBemDepre[i]);
    
  }
  
  
  return 0;
}