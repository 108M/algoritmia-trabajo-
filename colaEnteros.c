#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "colaEnteros.h"

void nuevaCola(tipoCola *c){
	printf("se crea la cola \n");
	c->ini = NULL;
	c->fin = NULL;
}

void errorCola(char s[]){
	printf("\n\n\nERROR en el modulo Colas: %s \n", s);
}


void encolar(tipoCola *c, int t [8]){
	celdaCola *n;
	jugador *jg;
	n = (celdaCola*)malloc(sizeof(celdaCola));
    jg = (jugador*)malloc(sizeof(jugador));
	n->jg->FP = t[0];
	printf("%d",n->jg->FP);
    n->jg->TP = t[1];
    n->jg->Patada = t[2];
    n->jg->Cuerpo = t[3];
    n->jg->Control = t[4];
    n->jg->Guardia = t[5];
    n->jg->Velocidad = t[6];
    n->jg->Estamina = t[7];
    n->jg->Valor = t[8];

    
	if(esNulaCola(*c)){
		printf("la cola es nula asique inserto n \n");
		c->ini = n;
	}
	else{
		c->fin->sig = n;
	}
	c->fin = n;
}

void desencolar(tipoCola *c){
	celdaCola *aux;
	
	if(esNulaCola(*c)){
		errorCola("No se puede desencolar en una cola vacia");
	}
	else{
		aux = c->ini;	
		c->ini = c->ini->sig;
		if(esNulaCola(*c)){
			c->fin = NULL;
		}
	}
	free(aux);
}

tipoElementoCola frente (tipoCola c){
	if(esNulaCola(c)){
		errorCola("No hay primero en una cola vacia");
	}
	else{
		return (c.ini)->jg->FP ;
	}
}

bool esNulaCola(tipoCola c){
	printf("compruebo que la cola es nula\n");
	return (c.ini == NULL);
}
