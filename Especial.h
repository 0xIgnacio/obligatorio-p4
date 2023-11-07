#ifndef OBLIGATORIOP4_ESPECIAL_H
#define OBLIGATORIOP4_ESPECIAL_H

#include "Hechizo.h"

class Especial: public Hechizo {
	private:
		// Atributes
		int anoManifesto;
		string texto;

	public:
		// Constructo / Destructor
		Especial();
		Especial(int, string);
		~Especial();

		// Getter / Setter

		// Methods
};

#endif //OBLIGATORIOP4_ESPECIAL_H
