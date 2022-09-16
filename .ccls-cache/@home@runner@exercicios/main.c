/*Autor:  Eduardo Rodrigues Almeida
Exercícios em C para aproximação do número pi
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float numero = 4;
  int i;      // interação dos números impares
  float pi;  
  int interacoes;  // Quantidade de iterações que o usuário deseja
  int interacoesAUX = 0; // Iteração para definir se é soma ou subtração 
  int cont = 0;// Limitador do loop
  puts("Digite o número de repetições desenhadas: ");
  scanf("%d", &interacoes);
  
  for(i = 1;40000; i+= 2){  // Loop para achar os ímpares

    if (interacoesAUX % 2 == 0) { // interação de soma 
      pi += (numero / i);
      cont++;

    } else {  // interação de subtração
      pi -= (numero / i);
      cont++;
    }

    if (cont == interacoes){ // encerrar o loop
      break;
    }
    interacoesAUX += 1;   // encrementador para saber se é soma ou subtração
  }

  printf("%2.8f ", pi);
  
  return 0;
}

