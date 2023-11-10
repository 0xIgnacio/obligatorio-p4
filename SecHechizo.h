#ifndef OBLIGATORIO_P4_SECHECHIZO_H
#define OBLIGATORIO_P4_SECHECHIZO_H

#include "Hechizo.h"

const int MAX_H = 20;

class SecHechizo {
	private:
		// Atributes
		Hechizo * hechizos[MAX_H];
		int tope;

	public:
		// Constructor / Destructor
		SecHechizo();
		~SecHechizo();

		// Primitivas
		void insert(Hechizo *);											// Precondicion: no esta lleno
		bool estaLleno();

		// Methods
};


#endif //OBLIGATORIO_P4_SECHECHIZO_H
