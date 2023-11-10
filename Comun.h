#ifndef OBLIGATORIOP4_COMUN_H
#define OBLIGATORIOP4_COMUN_H

#include "Bruja.h"
#include "Suprema.h"

class Comun: public Bruja {
	private:
		// Atributes
		string regionOrigen;
		bool vuelaEscoba;
		Suprema * super;

	public:
		// Constructor / Destructor
		Comun();
		Comun(string, bool, int, string);
		~Comun();

		// Getter / Setter
		string getRegionOrigen();
		bool getVuelaEscoba();

		// Methods
};

#endif //OBLIGATORIOP4_COMUN_H
