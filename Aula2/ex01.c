
#include <stdio.h>
#include <locale.h>

int media_arit(num1,num2,num3){
  return (num1 + num2 + num3 )/3;
};

int media_ponder(num1,num2,num3,peso1,peso2,peso3){
  return ((num1*peso1) + (num2*peso2) +       (num3*peso3)) / (peso1 + peso2 + peso3);
};

void main()
{
  setlocale(LC_ALL, "Portuguese_Brasil");




  int num1, num2, num3,  media_ar, media_pon;
  float peso1,peso2,peso3;
 
  printf("Exercício 01! \n");

  printf("Por favor informe um número: \n");
  scanf("%d", &num1);

  printf("Por favor informe um número: \n");
  scanf("%d", &num2);
  
  printf("Por favor informe um número: \n");
  scanf("%d", &num3);
  
  printf("Por favor informe um peso: \n");
  scanf("%f", &peso1);
  
	printf("Por favor informe um peso: \n");
  scanf("%f", &peso2);
  
	printf("Por favor informe um peso: \n");
  scanf("%f", &peso3);

  media_ar = media_arit(num1,num2, num3);

  media_pon = media_ponder(num1,num2,num3,peso1,peso2,peso3);

  printf("Numero 1: %d\n", num1);
  printf("Numero 2: %d\n", num2);
  printf("Numero 3: %d\n", num3);
  printf("Peso 1: %0.2f\n", peso1);
  printf("Peso 2: %0.2f\n", peso2);
  printf("Peso 3: %0.2f\n", peso3);

  printf("Média aritmética dos números = %d \n", media_ar);
  printf("Média ponderada dos números e peso = %d \n", media_pon);

}