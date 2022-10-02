// (Desafio) Em uma elei��o existem tr�s candidatos A, B, D. Escreva um programa em C que efetue a apura��o dos votos e informe a quantidade de votos por candidatos, a quantidade de eleitores, a quantidade de votos nulos e a quantidade de votos em branco. A partir do enunciado, fa�a o planejamento conforme praticado em sala de aula.

#include <stdio.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "Portuguese");

   // Defini��o das vari�veis

   int votosA = 0, votosB = 0, votosC = 0;
   int votos_nulos = 0, votos_branco = 0;
   int eleitores = 0;
   int opcoes;
   char continuar;

   do
   {
      // Mostrar as op��es ao eleitor

      printf("Voc� deseja votar em qual candidato?\n1 - para candidato A\n2 - para candidato B\n3 - para candidato C\n4 - para votar em BRANCO\n");
      scanf("%d", &opcoes);

      // Adiciona +1 ao contador do respectivo voto, caso n�o seja digitado nenhum dos n�meros apresentados na tela, ser� computado como VOTO NULO.
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

      // Soma +1 � vari�vel eleitores a cada loop
      eleitores++;

      // Pergunta se h� mais algum eleitor para votar
      printf("Se tiver mais algum eleitor para votar, digite: sim ou s\n\n");
      scanf("%s", &continuar);

      // Padroniza a entrada do usu�rio para saber se repete o loop
      continuar = toupper(continuar);

   } while (continuar == 'S' || continuar == 'SIM');

   // Contabiliza��o do total de votos

   printf("O eleitor A teve: %d votos\nO eleitor B teve: %d votos\nO eleitor C teve: %d votos\n%d votos em BRANCO\n%d votos nulos\nE um total de %d eleitores", votosA, votosB, votosC, votos_branco, votos_nulos, eleitores);
}