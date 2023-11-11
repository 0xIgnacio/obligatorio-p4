#ifndef OBLIGATORIO_P4_DICCIOBRUJAS_H
#define OBLIGATORIO_P4_DICCIOBRUJAS_H

#include "Bruja.h"
#include "Suprema.h"
#include "Iterador.h"

class DiccioBrujas {
	private:
		// Atributes
		struct node {
			Bruja * info;
			node * izq;
			node * der;
		};
		node * arbol;

		// Auxiliares
		void DestructorAux(node *);
		bool memberAux(node *, int);
		void insertAux(node *, node *, int);
		Bruja * findAux(node *, int);
		void toStringAux(node *);
		void masAncianaAux(node *, Fecha, int &);

	public:
		// Constructor / Destructor
		DiccioBrujas();
		~DiccioBrujas();

		// Primitivas
		bool member(int);
		void insert(Bruja *);
		Bruja * find(int);

		// Methods
		void toString();
		int masAnciana();														// Precondicion: existe al menos una bruja
};

#endif //OBLIGATORIO_P4_DICCIOBRUJAS_H
