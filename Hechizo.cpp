#include "Hechizo.h"

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

// Methods