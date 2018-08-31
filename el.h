#if !defined EL_H
#define EL_H

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef unsigned int element;							/*Definizione del tipo di dato degli elementi;*/
typedef bool element2;
typedef short element3;


extern void AssignElement(element dst, element src);	/*Funzione di assegnamento tra 2 elementi, copia l'elemento src nell'elemento dst;*/
extern void PrintElement(element e);					/*Funzione di stampa di un elemento, il parametro � l'elemento da stampare;*/
extern bool IsEqual(element a, element b);					/*Funzione di confronto tra elementi, riceve due elementi come parametro e ritorna true se sono uguali e false nel caso contrario;*/
extern int cmp(element a, element b);				/*Funzione di confronto tra 2 elementi, ritorna 0 se sono uguali, -1 se a < b, 1 se a > b;*/
extern int DeleteElement(element e);					/*Funzione di cancellazione del dato, occorre modificarla se si cambia il tipo di dato, ritorna 0 se ha successo, 1 nel caso contrario;*/

/*----------------Element2-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

extern void AssignElement2(element2 *dst, element2 src);	/*Funzione di assegnamento tra 2 elementi, copia l'elemento src nell'elemento puntato da dst;*/
extern void PrintElement2(element2 e);					/*Funzione di stampa di un elemento, il parametro � l'elemento da stampare;*/
extern bool IsEqual2(element2 a, element2 b);					/*Funzione di confronto tra elementi, riceve due elementi come parametro e ritorna true se sono uguali e false nel caso contrario;*/
extern int cmp2(element2 a, element2 b);				/*Funzione di confronto tra 2 elementi, ritorna 0 se sono uguali, -1 se a < b, 1 se a > b;*/
extern int DeleteElement2(element2 e);					/*Funzione di cancellazione del dato, occorre modificarla se si cambia il tipo di dato, ritorna 0 se ha successo, 1 nel caso contrario;*/

/*----------------Element3----------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

extern void AssignElement3(element3 *dst, element3 src);	/*Funzione di assegnamento tra 2 elementi, copia l'elemento src nell'elemento puntato da dst;*/
extern void PrintElement3(element3 e);					/*Funzione di stampa di un elemento, il parametro � l'elemento da stampare;*/
extern bool IsEqual3(element3 a, element3 b);					/*Funzione di confronto tra elementi, riceve due elementi come parametro e ritorna true se sono uguali e false nel caso contrario;*/
extern int cmp3(element3 a, element3 b);				/*Funzione di confronto tra 2 elementi, ritorna 0 se sono uguali, -1 se a < b, 1 se a > b;*/
extern int DeleteElement3(element3 e);					/*Funzione di cancellazione del dato, occorre modificarla se si cambia il tipo di dato, ritorna 0 se ha successo, 1 nel caso contrario;*/

#endif //EL_H