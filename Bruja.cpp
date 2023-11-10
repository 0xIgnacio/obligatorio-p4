#include "Bruja.h"

// PUBLIC
// Constructor / Destructor
Bruja::Bruja():nombre(), hechizos() {
	this->identificador = 0;
}

Bruja::Bruja(int identificador, string nombre):nombre(nombre), hechizos() {
	this->identificador = identificador;
}

Bruja::~Bruja() {}

// Getter / Setter
int Bruja::getIdentificador() {
	return this->identificador;
}

string Bruja::getNombre() {
	return this->nombre;
}

SecHechizo* Bruja::getSecHechizo() {
	return &this->hechizos;
}

// Methods