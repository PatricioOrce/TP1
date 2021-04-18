/*
 ============================================================================
 Name        : TrabajoPracticoN1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include "utn2.h"
#include "tpuno.h"


int main(void)
{
	setbuf(stdout,NULL);
	float primerNumero;
	float segundoNumero;
	float resultadoSuma,resultadoResta,resultadoMultiplicacion,resultadoDivision
	,resultadoFactorialUno, resultadoFactorialDos;
	int desicion;
	int flagPrimerNumero = 0;
	int flagSegundoNumero = 0;
	int flagOperaciones = 0;



	do
	{

		tp_menuTpUno();
		utn_getNumero(&desicion, "Ingrese una opcion\n", "Opcion invalida\n", 1, 5, 2);utn_getNumero(&desicion, "Ingrese una opcion\n", "Opcion invalida\n", 1,5,0);

		switch(desicion)
		{
		case 1:
			utn_getNumeroFloat(&primerNumero, "Ingrese un numero: ", "Error",-9999, 99999, 3);
			flagPrimerNumero=1;
			break;
		case 2:
			if(flagPrimerNumero==1)
			{
			utn_getNumeroFloat(&segundoNumero, "Ingrese un numero: ", "Error",-9999, 99999, 3);
			flagSegundoNumero=1;
			printf("Se han cargado ambos numeros exitosamente!");
			}
			else
			{
				printf("[ERROR]No se cargo el primer numero\nIntente nuevamente.");
			}
			break;
		case 3:
			if(flagPrimerNumero==1 && flagSegundoNumero==1)
			{
				printf("Operaciones Realizadas!");
				tp_sumarDosNumeros(primerNumero, segundoNumero, &resultadoSuma);
				tp_restarDosNumeros(primerNumero, segundoNumero, &resultadoResta);
				tp_multiplicarDosNumeros(primerNumero, segundoNumero, &resultadoMultiplicacion);
				tp_dividirDosNumeros(primerNumero, segundoNumero, &resultadoDivision);
				tp_fartorialNumeros(primerNumero, &resultadoFactorialUno);
				tp_fartorialNumeros(segundoNumero, &resultadoFactorialDos);
				flagOperaciones = 1;
			}
			else
			{
				printf("Cargue correctamente los datos.");
			}
			break;
		case 4:
			if(flagOperaciones==1)
			{
				printf("|El resultado de (%.2f + %.2f) es: %.2f\n",primerNumero,segundoNumero,resultadoSuma);
				printf("|El resultado de (%.2f - %.2f) es: %.2f\n",primerNumero,segundoNumero,resultadoResta);
				printf("|El resultado de (%.2f * %.2f) es: %.2f\n",primerNumero,segundoNumero,resultadoMultiplicacion);
				if(segundoNumero!=0)
				{
					printf("|El resultado de (%.2f / %.2f) es: %.2f\n",primerNumero,segundoNumero,resultadoDivision);
				}
				else
				{
					printf("|No se puede dividir por 0\n");
				}

				if(primerNumero>=0)
				{
					printf("|El resultado A es:%.2f\n",resultadoFactorialUno);
				}
				else
				{
					printf("|No se puede realizar el factorial de un negativo.\n");
				}
				if(segundoNumero>=0)
				{
					printf("|El resultado B es:%.2f\n",resultadoFactorialDos);
				}
				else
				{
					printf("|No se puede realizar el factorial de un negativo.\n");
				}

			}
			else
			{
				printf("No se realizaron las operaciones");
			}
			break;
		case 5:
			break;
			}
	}
	while(desicion!=5);
	return EXIT_SUCCESS;
}


