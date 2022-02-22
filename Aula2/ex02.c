
#include <stdio.h>
#include <locale.h>

int troca(num1, num2){
  int num_auxiliar = num1;
    num1 = num2;
    num2 = num_auxiliar;

  printf("Agora o número 1 é igual a %d \n", num1);
  printf("Agora o número 2 é igual a %d \n", num2);
};

int main()
{
  setlocale(LC_ALL, "Portuguese_Brasil");



  int num1, num2;
 
  printf("Exercício 02! \n");

  printf("Por favor informe um número: \n");
  scanf("%d", &num1);
  printf("Número 1: %d\n", num1);

  printf("Por favor informe um número: \n");
  scanf("%d", &num2);
  printf("Número 2: %d\n", num2);
  
  printf("===== Aguarde enquanto efetuamos a troca =====\n");


   troca(num1, num2);
}