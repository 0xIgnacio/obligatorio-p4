#include "Hechizo.h"
#include <iostream>

// PUBLIC
// Constructor / Destructor
Hechizo::Hechizo(): texto() {
	this->numero = 0;
}

Hechizo::Hechizo(int numero, string texto): texto() {
	this->numero = numero;
}

Hechizo::~Hechizo() {}

// Getter / Setter
int Hechizo::getNumero() {
	return this->numero;
}

string Hechizo::getTexto() {
	return this->texto;
}

string Hechizo::getTipo() {
	return "Comun";
}

// Methods
void Hechizo::toString() {
	std::cout << this->getNumero() << ". " << this->getTexto();
}