#include "Hechizo.h"
#include <iostream>

// PUBLIC
// Constructor / Destructor
Hechizo::Hechizo(): texto() {
	this->numero = 0;
}

Hechizo::Hechizo(string texto): texto(texto) {}

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

void Hechizo::setNumero(int num) {
	this->numero = num;
}

// Methods
void Hechizo::toString() {
	std::cout << this->getNumero() << ". " << this->getTexto();
}