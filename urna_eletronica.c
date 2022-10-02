// (Desafio) Em uma eleição existem três candidatos A, B, D. Escreva um programa em C que efetue a apuração dos votos e informe a quantidade de votos por candidatos, a quantidade de eleitores, a quantidade de votos nulos e a quantidade de votos em branco. A partir do enunciado, faça o planejamento conforme praticado em sala de aula.

#include <stdio.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");

   // Definição das variáveis

   int votosA = 0, votosB = 0, votosC = 0;
   int votos_nulos = 0, votos_branco = 0;
   int eleitores = 0;
   int opcoes;
   char continuar;

   do
   {
      // Mostrar as opções ao eleitor

      printf("Você deseja votar em qual candidato?\n1 - para candidato A\n2 - para candidato B\n3 - para candidato C\n4 - para votar em BRANCO\n");
      scanf("%d", &opcoes);

      // Adiciona +1 ao contador do respectivo voto, caso não seja digitado nenhum dos números apresentados na tela, será computado como VOTO NULO.
      if (opcoes == 1)
      {
         votosA++;
      }
      else if (opcoes == 2)
      {
         votosB++;
      }
      else if (opcoes == 3)
      {
         votosC++;
      }
      else if (opcoes == 4)
      {
         votos_branco++;
      }
      else
      {
         votos_nulos++;
      }

      // Soma +1 à variável eleitores a cada loop
      eleitores++;

      // Pergunta se há mais algum eleitor para votar
      printf("Se tiver mais algum eleitor para votar, digite: sim ou s\n\n");
      scanf("%s", &continuar);

      // Padroniza a entrada do usuário para saber se repete o loop
      continuar = toupper(continuar);

   } while (continuar == 'S' || continuar == 'SIM');

   // Contabilização do total de votos

   printf("O eleitor A teve: %d votos\nO eleitor B teve: %d votos\nO eleitor C teve: %d votos\n%d votos em BRANCO\n%d votos nulos\nE um total de %d eleitores", votosA, votosB, votosC, votos_branco, votos_nulos, eleitores);
}