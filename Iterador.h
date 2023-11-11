#ifndef UNTITLED1_ITERADOR_H
#define UNTITLED1_ITERADOR_H

#include "DiccioBrujas.h"

class Iterador {
private:
	struct Nodo {
		Bruja * info;
		Nodo * sig;
	}; 																					// LPPF
	Nodo * p;                                		// Primer nodo
	Nodo * u;                                		// Ultimo nodo
	Nodo * a;                                		// Nodo actual

public:
	// Constructor
	Iterador();

	// Primitivas
	void Insertar(Bruja *);                  		// La insercion siempre al final
	void Listar();
};


#endif //UNTITLED1_ITERADOR_H
