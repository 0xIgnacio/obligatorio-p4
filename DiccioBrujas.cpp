#include "DiccioBrujas.h"

// PRIVATE
// Methods
void DiccioBrujas::DestructorAux(node * raiz) {
	if (raiz != nullptr) {
		DestructorAux(this->arbol->der);							// Recorro a la hoja derecha
		DestructorAux(this->arbol->izq);							// Recorro a la hoja izquierda
		delete raiz;																// A la vuelta recursiva luego de recorrer subarboles elimino el nodo
	}
}

bool DiccioBrujas::memberAux(node * aux, int num) {
	if (aux != nullptr) {
		if (aux->info->getIdentificador() > num)
			return memberAux(aux->izq, num);					// Si es menor recorro a la izquierda
		else if (aux->info->getIdentificador() < num)
			return memberAux(aux->der, num);					// Si es mayor recorro a la derecha
		else return true;														// En el caso de que sea igual a num, encontre, devuelvo true
	} else return false;													// Al llegar a la hoja, no existe, retorno false
}

void DiccioBrujas::insertAux(node * aux, node * nuevo, int num) {
	if (aux != nullptr) {
		if (aux->info->getIdentificador() > num) {
			if (aux->izq == nullptr)
				aux->izq = nuevo; 											// Si el hijo izquierdo es nulo, inserto.
			else insertAux(aux->izq, nuevo, num); 		// Si no es nulo sigo recorriendo
		} else if (aux->info->getIdentificador() < num) {
			if (aux->der == nullptr)
				aux->der = nuevo; 											// Si el hijo derecho es nulo, inserto.
			else insertAux(aux->der, nuevo, num); 		// Sino sigo recorriendo
		}
	}
}

Bruja* DiccioBrujas::findAux(node * aux, int num) {
	if (aux != nullptr) {
		if (aux->info->getIdentificador() > num) {
			return findAux(aux->izq, num);
		} else if (aux->info->getIdentificador() < num) {
			return findAux(aux->der, num);
		} else return aux->info;
	} else return nullptr;												// Caso de error
}

void DiccioBrujas::toStringAux(node * aux) {
	if (aux != nullptr) {
		toStringAux(aux->izq);
		aux->info->toStringSimple();
		toStringAux(aux->der);
	}
}

void DiccioBrujas::masAncianaAux(node * aux, Fecha faux, int & mayor) {
	if (aux != nullptr) {
		if (aux->info->getTipo() == "Suprema") {
			Suprema * superaux = (Suprema *) aux->info;
			if (superaux->getFechaNac() < faux)
				mayor = superaux->getIdentificador();
		}
		this->masAncianaAux(aux->izq, faux, mayor);
		this->masAncianaAux(aux->der, faux, mayor);
	}
}

// PUBLIC
// Constructor / Destructor
DiccioBrujas::DiccioBrujas() {
	this->arbol = nullptr;
}

DiccioBrujas::~DiccioBrujas() {
	DestructorAux(this->arbol);
}

// Primitivas
bool DiccioBrujas::esVacia() {
	return this->arbol == nullptr;
}

bool DiccioBrujas::member(int num) {
	return memberAux(this->arbol, num);
}

void DiccioBrujas::insert(Bruja * nueva) {
	node *nuevo = new node;

	nuevo->info = nueva;
	nuevo->izq = nullptr;
	nuevo->der = nullptr;

	if (this->arbol == nullptr)
		this->arbol = nuevo;												// En caso de que sea nulo, la bruja nueva es raiz
	else insertAux(this->arbol, nuevo, nuevo->info->getIdentificador());
}

Bruja * DiccioBrujas::find(int num) {
	return findAux(this->arbol, num);
}

// Methods
void DiccioBrujas::toString() {
	this->toStringAux(this->arbol);
}

int DiccioBrujas::masAnciana() {
	Suprema * saux = (Suprema *) arbol->info;
	Fecha faux = saux->getFechaNac();

	int mayor = saux->getIdentificador();
	this->masAncianaAux(this->arbol, faux, mayor);
	return mayor;
}
