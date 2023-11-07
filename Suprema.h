#ifndef OBLIGATORIOP4_SUPREMA_H
#define OBLIGATORIOP4_SUPREMA_H

#include <string>
#include "Fecha.h"
#include "Bruja.h"

using namespace std;

class Suprema: public Bruja {
	private:
		// Atributes
		Fecha fechaNac;
		int cantPoderes;

	public:
		// Constructor / Destructor
		Suprema();
		Suprema(Fecha, int, int, string);
		~Suprema();

		// Getter / Setter

		// Methods
};

#endif //OBLIGATORIOP4_SUPREMA_H
