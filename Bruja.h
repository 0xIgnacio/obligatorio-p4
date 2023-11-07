#ifndef OBLIGATORIOP4_BRUJA_H
#define OBLIGATORIOP4_BRUJA_H

#include "SecHechizo.h"
#include <string>
using namespace std;

class Bruja {
	private:
		// Atributes
		int identificador;
		string nombre;
		SecHechizo hechizos;

	public:
		// Constructor / Destructor
		Bruja();
		Bruja(int, string);
		~Bruja();

		// Getter / Setter

		// Methods
};

#endif //OBLIGATORIOP4_BRUJA_H
