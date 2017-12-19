#include <iostream>
#ifndef _BLOCDATA_
#define _BLOCDATA_

/*
cartouche
*/
/*
Doc structure
*/
struct BlocData {
	enum { TAILLE = 21};	// TAILLE = 20 + 1 pour le '\0'
	unsigned int noBloc;	// numéro du bloc
	char data[TAILLE];		// chaine de donnée d'un bloc
};

/**
*
*/
void lire(std::istream& is, BlocData& b);
/** 
*
*/
void ecrire(std::ostream& os, const BlocData& b);
#endif // !_BLOCDATA_