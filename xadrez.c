#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int movimentosTorre = 5;
   int movimentosBispo = 5;
   int movimentosRainha = 8;

   char direcaoTorre[] = "Direita";
   char direcaoBispo[] = "Cima Direita";
   char direcaoRainha[] = "Esquerda";

   // Cavalo

   int totalMovimentosL = 1;
   int casasBaixoCavalo = 2;
   int casasEsquerdaCavalo = 1;

   char direcaoCavaloBaixo[] = "Baixo";
   char direcaoCavaloEsquerda[] = "Esquerda";

   printf("--- Simulacão de Movimento: TORRE ---\n");

   for (int i = 0; i < movimentosTorre; i++)
   {
      printf("%s\n", direcaoTorre);
   }

   printf("\n--- Simulacão de Movimento: BISPO ---\n");

   int contadorBispo = 0;

   while (contadorBispo < movimentosBispo)
   {
      printf("%s\n", direcaoBispo);
      contadorBispo++;
   }

   printf("\n--- Simulacão de Movimento: RAINHA ---\n");

   int contadorRainha = 0;

   do
   {
      printf("%s\n", direcaoRainha);
      contadorRainha++;
   } while (contadorRainha < movimentosRainha);

   // SIMULAÇÃO DO CAVALO

   printf("\n--- Simulacão de Movimento: CAVALO ---\n");

   for (int i = 0; i < totalMovimentosL; i++)
   {

      int j = 0;
      while (j < casasBaixoCavalo)
      {
         printf("%s\n", direcaoCavaloBaixo);
         j++;
      }

      int k = 0;
      do
      {
         printf("%s\n", direcaoCavaloEsquerda);
         k++;
      } while (k < casasEsquerdaCavalo);
   }

   return 0;
}
