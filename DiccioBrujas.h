#ifndef OBLIGATORIO_P4_DICCIOBRUJAS_H
#define OBLIGATORIO_P4_DICCIOBRUJAS_H

#include "Bruja.h"

class DiccioBrujas {
	private:
		// Atributes
		struct node {
			Bruja * info;
			node * izq;
			node * der;
		};
		node * arbol;

		// Methods
		void BorrarArbol(node *);
		bool memberAux(node *, int);
		void insertAux(node *, node *, int);
		Bruja* findAux(node *, int);

	public:
		// Constructor / Destructor
		DiccioBrujas();
		~DiccioBrujas();

		// Primitivas
		bool member(int);
		void insert(Bruja *);
		Bruja* find(int);

		// Methods
};

#endif //OBLIGATORIO_P4_DICCIOBRUJAS_H
