/**
*	@file BlocDate.cpp
*/
#include <iostream>
#include "BlocData.h"
using namespace std;

void lire(std::istream& is, BlocData& b) {
	is >> b.noBloc;
	is >> ws;
	is.getline(b.data, BlocData::TAILLE, '\n');
	is >> ws;
}
void ecrire(std::ostream& os, const BlocData& b) {
	os << "numéro Bloc : " << b.noBloc << std::endl;
	os << "Data : " << b.data << std::endl;
}