/******************************************************************************
INICIANTE
Crie um programa que simule um jogo de
adivinhaC'C#o. O programa deve gerar um
nC:mero aleatC3rio de 1 a 100, e pedir ao
usuC!rio que tente adivinhar o nC:mero.
O programa deve fornecer dicas ao jogador,
indicando se o nC:mero fornecido C) maior ou
menor do que o nC:mero gerado. O jogo sC3
encerra se o usuC!rio acertar o nC:mero.
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int
main (void)
{
  srand (time (NULL));
  int numero_sorteado = rand () % 100 + 1;
  int numero;

  printf ("Bem-vindo ao Jogo de Adivinhacao!\n");
  printf ("Tente adivinhar o numero sorteado entre 1 e 100.\n");

  do
	{
	  printf ("\nQual numero voce acha que foi sorteado: ");
	  scanf ("%d", &numero);


	  if (numero < numero_sorteado)
		{
		  printf ("Chuta mais alto.\n");
		}
	  else if (numero > numero_sorteado)
		{
		  printf ("Chuta mais baixo.\n");
		}
	  else
		{
		  printf ("\nParabens! Voce acertou o numero sorteado.\n");
		}
	}
  while (numero != numero_sorteado);

  return 0;
}
