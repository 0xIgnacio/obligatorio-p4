#ifndef OBLIGATORIOP4_COMUN_H
#define OBLIGATORIOP4_COMUN_H

#include "Bruja.h"

class Comun: public Bruja {
	private:
		// Atributes
		string regionOrigen;
		bool vuelaEscoba;

	public:
		// Constructor / Destructor
		Comun();
		Comun(string, bool, int, string);
		~Comun();

		// Getter / Setter

		// Methods
};

#endif //OBLIGATORIOP4_COMUN_H
