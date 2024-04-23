/******************************************************************************
INICIANTE
Crie um programa que analise os
comprimentos dos lados de um triC"ngulo e
informe qual o seu tipo:
+ EquilC!tero: Possui todos os lados iguais.
* IsC3sceles: Possui dois lados iguais e um
diferente.
* Escaleno: Possui todos os lados diferentes.
* InvC!lido: Se a soma de dois lados
quaisquer for menor que o terceiro lado.

*******************************************************************************/
#include <stdio.h>

int
main ()
{

  int num1, num2, num3;

  printf ("Digite o primeiro lado do triangulo: ");
  scanf ("%i", &num1);

  printf ("Digite o segundo lado do triangulo: ");
  scanf ("%i", &num2);

  printf ("Digite o terceiro lado do triangulo: ");
  scanf ("%i", &num3);

  if ((num1 + num2 < num3) || (num2 + num3 < num1) || (num1 + num3 < num2))
	{
	  printf ("INVALIDO, tente novamente");

	}
  else if (((num1 == num2) && (num2 != num3)) || ((num2 == num3) && (num2 != num1))
		   || ((num1 == num3) && (num1 != num2)))
	{
	  printf ("O triangulo eh isosceles");
	}
  else if ((num1 == num2) && (num1 == num3))

	{
	  printf ("O triangulo eh equilatero");
	}
  else if ((num2 != num1) && (num2 != num3) && (num1 != num3))
	{
	  printf ("O triangulo eh escaleno");
	}

}
