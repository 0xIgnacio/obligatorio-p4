#ifndef OBLIGATORIOP4_ESPECIAL_H
#define OBLIGATORIOP4_ESPECIAL_H

#include "Hechizo.h"

class Especial: public Hechizo {
	private:
		// Atributes
		int anoManifesto;
		string descripcion;

	public:
		// Constructor / Destructor
		Especial();
		Especial(int, string, int, string);
		~Especial();

		// Getter / Setter

		// Methods
};

#endif //OBLIGATORIOP4_ESPECIAL_H
