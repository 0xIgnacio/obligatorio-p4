#ifndef OBLIGATORIO_P4_DICCIOBRUJAS_H
#define OBLIGATORIO_P4_DICCIOBRUJAS_H

#include "Bruja.h"

class DiccioBrujas {
	private:
		// Atributes
		struct node {
			Bruja* info;
			node* izq;
			node* der;
		};
		node* arbol;

	public:
		// Constructor / Destructor
		DiccioBrujas();
		void BorrarArbol(node*);
		~DiccioBrujas();

		// Primitivas
		bool member(int);
		void insert(Bruja);
		Bruja find(int);

		// Methods
};


#endif //OBLIGATORIO_P4_DICCIOBRUJAS_H
