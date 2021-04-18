/*
 * utn2.h
 *
 *  Created on: 25 mar. 2021
 *      Author: Pato
 */

#ifndef UTN2_H_
#define UTN2_H_

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "utn2.h"

int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int
maximo, int reintentos);
int utn_getNumeroFloat(float* pResultado, char* mensaje, char* mensajeError, int minimo, int
maximo, int reintentos);
int utn_getString(char* pArray,int limite,char* mensaje);
int utn_getName(char* nombre,int limite,char* mensaje,char* mensajeError);
int utn_pedirUnCaracter(char* pCaracter, char* pTexto, char* pTextoError,
char minimo, char maximo, int reintentos);
int utn_myGets(char *buffer, int size);



#endif /* UTN2_H_ */
