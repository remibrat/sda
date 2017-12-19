#include <iostream>
#include "IdMessage.h"
using namespace std;

void lire(std::istream is, IdMessage& id) {
	is >> id.date;
	is >> id.heure;
	
}
