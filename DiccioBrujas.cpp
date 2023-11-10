#include "DiccioBrujas.h"

// PRIVATE
// Methods
void DiccioBrujas::BorrarArbol(node * raiz) {
	if (raiz != nullptr) {
		BorrarArbol(this->arbol->der);
		BorrarArbol(this->arbol->izq);
		delete raiz;
	}
}

bool DiccioBrujas::memberAux(node * aux, int num) {
	if (aux != nullptr) {
		if (aux->info->getIdentificador() > num)
			return memberAux(aux->izq, num);
		else if (aux->info->getIdentificador() < num)
			return memberAux(aux->der, num);
		else return true;
	} else return false;
}

void DiccioBrujas::insertAux(node * aux, node * nuevo, int num) {
	if (aux != nullptr) {
		if (aux->info->getIdentificador() > num) {
			if (aux->izq == nullptr) aux->izq = nuevo;
			else insertAux(aux->izq, nuevo, num);
		} else if (aux->info->getIdentificador() < num) {
			if (aux->der == nullptr) aux->der = nuevo;
			else insertAux(aux->der, nuevo, num);
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
	} else return nullptr;
}

// PUBLIC
// Constructor / Destructor
DiccioBrujas::DiccioBrujas() {
	this->arbol = nullptr;
}

DiccioBrujas::~DiccioBrujas() {
	BorrarArbol(this->arbol);
}

// Primitivas
bool DiccioBrujas::member(int num) {
	return memberAux(this->arbol, num);
}

void DiccioBrujas::insert(Bruja * nueva) {
	node *nuevo = new node;
	nuevo->info = nueva;
	nuevo->izq = nullptr;
	nuevo->der = nullptr;
	if (this->arbol == nullptr)
		this->arbol = nuevo;
	else
		insertAux(this->arbol, nuevo, nuevo->info->getIdentificador());
}

Bruja * DiccioBrujas::find(int num) {
	return findAux(this->arbol, num);
}

// Methods