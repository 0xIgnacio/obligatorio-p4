#include "DiccioBrujas.h"

// PUBLIC
// Constructor / Destructor
DiccioBrujas::DiccioBrujas() {
	this->arbol = nullptr;
}

void DiccioBrujas::BorrarArbol(node* raiz) {
	if (raiz != nullptr) {
		BorrarArbol(this->arbol->der);
		BorrarArbol(this->arbol->izq);
		delete raiz;
	}
}

DiccioBrujas::~DiccioBrujas() {
	BorrarArbol(this->arbol);
}

// Primitivas

// Methods