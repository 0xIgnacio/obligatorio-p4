#include "SecHechizo.h"
#include <iostream>

// PUBLIC
// Constructor / Destructor
SecHechizo::SecHechizo() {
	this->tope = 0;
}

SecHechizo::~SecHechizo() {
	for (int i = 0; i < this->tope; ++i)
		delete this->hechizos[i];										// Destruyo los datos uno por uno recorriendo
}

// Getter / Setter
int SecHechizo::getTope() {
	return this->tope;
}

Hechizo * SecHechizo::getHechizo(int id) {
	return this->hechizos[id];
}

// Primitivas
void SecHechizo::insert(Hechizo * nuevo) {
	nuevo->setNumero(this->tope+1);
	this->hechizos[this->getTope()] = nuevo;
	this->tope++;																	// Inserto en el tope
}

bool SecHechizo::estaLleno() {
	return this->getTope() == MAX_H;
}

bool SecHechizo::existe(int id) {
	return id < this->getTope();
}

// Methods
void SecHechizo::toString() {
	for (int i = 0; i < this->getTope(); ++i) {
		std::cout << "\n" << "\t";
		this->hechizos[i]->toString();
	}
}

int SecHechizo::cantComunes() {
	int cant = 0;
	for (int i = 0; i < this->tope; ++i)
		if (this->hechizos[i]->getTipo() == "Comun")
			cant++;
	return cant;
}

int SecHechizo::cantEspeciales() {
	int cant = 0;
	for (int i = 0; i < this->tope; ++i)
		if (this->hechizos[i]->getTipo() == "Especial")
			cant++;
	return cant;
}

int SecHechizo::cantAno(int num) {
	int cant = 0;
	for (int i = 0; i < this->tope; ++i)
		if (this->hechizos[i]->getTipo() == "Especial") {
			Especial * aux = (Especial *) this->hechizos[i];
			if (aux->getAnoManifesto() == num)
				cant++;
		}
	return cant;
}
