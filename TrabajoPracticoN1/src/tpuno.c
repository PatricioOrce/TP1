/*
 * tpuno.c
 *
 *  Created on: 13 abr. 2021
 *      Author: Pato
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "utn2.h"
#include "tpuno.h"

/**
 * \brief Recibe dos numeros y los suma.
 * \param float numeroUno primer numero de la operacion
 * \param float numeroDos segundo numero de la operacion
 * \param float* resultado puntero a resultado para devolver valor
 * \return Retorna 0 si se realizo la operacion y -1 si no
 */

int tp_sumarDosNumeros(float numeroUno, float numeroDos, float* pResultado)
{
	int retorno=-1;
	if(pResultado!=NULL)
		{
			*pResultado=numeroUno+numeroDos;
			retorno = 0;
		}
	return retorno;
}

/**
 * \brief Recibe dos numeros y los resta.
 * \param float numeroUno primer numero de la operacion
 * \param float numeroDos segundo numero de la operacion
 * \param float* resultado puntero a resultado para devolver valor
 * \return Retorna 0 si se realizo la operacion y -1 si no
 */

int tp_restarDosNumeros(float numeroUno, float numeroDos, float* pResultado)
{
	int retorno=-1;
	if(pResultado!=NULL)
		{
			*pResultado=numeroUno-numeroDos;
			retorno = 0;
		}
	return retorno;
}

/**
 * \brief Recibe dos numeros y los divide.
 * \param float numeroUno primer numero de la operacion
 * \param float numeroDos segundo numero de la operacion
 * \param float* resultado puntero a resultado para devolver valor
 * \return Retorna 0 si se realizo la operacion y -1 si no
 */

int tp_dividirDosNumeros(float numeroUno, float numeroDos, float* pResultado)
{
	int retorno=-1;
	if(pResultado!=NULL)
		{
			if(numeroDos!=0)
			{
				*pResultado=numeroUno/numeroDos;
				retorno = 0;
			}
		}
	return retorno;
}

/**
 * \brief Recibe dos numeros y los multiplica.
 * \param float numeroUno primer numero de la operacion
 * \param float numeroDos segundo numero de la operacion
 * \param float* resultado puntero a resultado para devolver valor
 * \return Retorna 0 si se realizo la operacion y -1 si no
 */

int tp_multiplicarDosNumeros(float numeroUno, float numeroDos, float* pResultado)
{
	int retorno=-1;
	if(pResultado!=NULL)
		{
			*pResultado=numeroUno*numeroDos;
			retorno = 0;
		}
	return retorno;
}

/**
 * \brief realiza el factorial de un numero.
 * \param float numeroUno recibe el numero para la operacion
 * \param float* pResultado puntero a resultado para devolver valor
 * \return Retorna 0 si se realizo la operacion y -1 si no
 */

int tp_fartorialNumeros(float numeroUno,float* pResultado)
{
	int retorno=-1;
	int factorial = 1;

	if(numeroUno>0)
	{
		for(int i=1;i<=numeroUno;i++)
		{
		  factorial = factorial * i;
		  retorno=0;
		}
		*pResultado = factorial;
	}
	else if(numeroUno==0)
	{
		*pResultado=1;
	}

	return retorno;
}

/**
 * \brief Imprime el menú de opciones
 */

void tp_menuTpUno()
{
	printf("\n--------------------------------------------\n");
	printf("|1) Cargar primer numero.\n");
	printf("|2) Cargar segundo numero.\n");
	printf("|3) Realizar las operaciones.\n");
	printf("|4) Mostrar Operaciones realizadas.\n");
	printf("|5) Salir.\n");
	printf("\n--------------------------------------------\n");
}
