#include <stdio.h>
#include <stdlib.h>

typedef struct Etat
{
    int nbrEtat ;
    int fin ;
} Etat ;

typedef struct Instruction
{
    Etat Si ;
    Etat Sj ;
    char Xi[10] ;
} Instruction ;

typedef struct Automate
{
    char Ep ;
    char ensAlphabet[100] ;
    int nbrAlphabet ;
    Etat ensEtat[100] ;
    int nbrEtat ;
    Etat ensEtatsInitiaux[100] ;
    int nbrEtatsInitiaux ;
    Etat ensEtatsFinaux[100] ;
    int nbrEtatsFinaux ;
    Instruction ensInstructions[100] ;
    int nbrInstructions ;
} Automate ;



void creerAutomate() ;
void PartiGeneralise () ;
void eliminerEpsilon() ;
