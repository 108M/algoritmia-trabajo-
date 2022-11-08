/*
  FICHERO: colaEnteros.h
  VERSION: 1.0.0
  HISTORICO:
  Creado por Aránzazu Jurío Munárriz el 09/09/19.
  
  Este fichero se crea sólo con intenciones de coordinación docente y como
  ayuda a sus alumnos y alumnas. La autora desautoriza expresamente su difusión, copia
  o exhibición pública (salvo entre los alumnos de las asignaturas 240301 y 250301 del
  grado en Ingeniería Informática de la UPNA).
*/

#include <stdbool.h>

 typedef int tipoElementoCola;
 typedef struct Jugador{
 	 tipoElementoCola FP;
     tipoElementoCola TP;
     tipoElementoCola Patada;
	 tipoElementoCola Cuerpo;
	 tipoElementoCola Control;
	 tipoElementoCola Guardia;
	 tipoElementoCola Velocidad;
	 tipoElementoCola Estamina;
	 tipoElementoCola Valor;
     char clase [2];
 }jugador;
 
typedef struct celdaC{
 	jugador jg; 
 	struct celdaC *sig;
 } celdaCola; 
typedef struct tipoC{
	celdaCola* ini;
	celdaCola* fin;
}tipoCola;

void nuevaCola(tipoCola *);

void encolar(tipoCola *, int jugador [8], char cl [2]);

void desencolar(tipoCola *);

jugador frente(tipoCola);

bool esNulaCola(tipoCola);
