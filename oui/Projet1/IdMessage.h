#include <iostream>
#ifndef _IDMESSAGE_
#define _IDMESSAGE_

struct IdMessage {
	enum {TAILLE = 21};
	char exp[TAILLE];
	char dest[TAILLE];
	unsigned int date;
	unsigned int heure;
};

#endif // !_IDMESSAGE_