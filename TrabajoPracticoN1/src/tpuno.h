/*
 * tpuno.h
 *
 *  Created on: 13 abr. 2021
 *      Author: Pato
 */

#ifndef TPUNO_H_
#define TPUNO_H_

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "utn2.h"

int tp_sumarDosNumeros(float numeroUno, float numeroDos, float* pResultado);
int tp_restarDosNumeros(float numeroUno, float numeroDos, float* pResultado);
int tp_dividirDosNumeros(float numeroUno, float numeroDos, float* pResultado);
int tp_multiplicarDosNumeros(float numeroUno, float numeroDos, float* pResultado);
int tp_fartorialNumeros(float numeroUno,float* pResultado);
void tp_menuTpUno();

#endif /* TPUNO_H_ */
