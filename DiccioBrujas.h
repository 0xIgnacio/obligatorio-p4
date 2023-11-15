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
		bool memberAux(node *, string);
		void insertAux(node *, node *, string);
		Bruja * findAux(node *, string);
		void toStringAux(node *);
		void masAncianaAux(node *, Fecha, string &);
		void cargarIteradorAux(node *, Iterador &);

	public:
		// Constructor / Destructor
		DiccioBrujas();
		~DiccioBrujas();

		// Primitivas
		bool esVacia();
		bool member(string);
		void insert(Bruja *);
		Bruja * find(string);

		// Methods
		void toString();
		string masAnciana();														// Precondicion: existe al menos una bruja
		void cargarIterador(Iterador &);
};

#endif //OBLIGATORIO_P4_DICCIOBRUJAS_H
