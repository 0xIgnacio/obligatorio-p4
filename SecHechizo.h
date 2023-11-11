#ifndef OBLIGATORIO_P4_SECHECHIZO_H
#define OBLIGATORIO_P4_SECHECHIZO_H

#include "Hechizo.h"
#include "Especial.h"

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

		// Getter / Setter
		int getTope();
		Hechizo * getHechizo(int);

		// Primitivas
		void insert(Hechizo *);											// Precondicion: no esta lleno
		bool estaLleno();
		bool existe(int);

		// Methods
		void toString();
		int cantComunes();
		int cantEspeciales();
		int cantAno(int);
};

#endif //OBLIGATORIO_P4_SECHECHIZO_H
