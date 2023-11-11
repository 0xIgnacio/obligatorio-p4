#include "Iterador.h"

// PUBLIC
// Constructor
Iterador::Iterador() {
	this->a = nullptr;
	this->p = nullptr;
	this->u = this->p;
}

// Methods
void Iterador::Insertar(Bruja * bnuevo) {
	Nodo * nuevo = new Nodo;                 			// Creo el nodo a agregar
	nuevo->info = bnuevo;
	nuevo->sig = nullptr;
	if (this->p == nullptr) {               			// En el caso de que la lista sea vacia agrego
		this->p = nuevo;
		this->u = this->p;
	} else {
		this->u->sig = nuevo;                 			// Agrego al final
		this->u = nuevo;
	}
}

void Iterador::Listar() {
	this->a = this->p;
	while (this->a != nullptr) {
		Bruja * aux = this->a->info;
		aux->toStringSimple();
		this->a = this->a->sig;
	}
}