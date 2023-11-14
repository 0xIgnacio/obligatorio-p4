#include "Especial.h"

// PUBLIC
// Constructor / Destructor
Especial::Especial(): Hechizo(), descripcion() {
	this->anoManifesto = 0;
}

Especial::Especial(int anoManifesto, string descripcion, string texto): Hechizo(texto), descripcion() {
	this->anoManifesto = anoManifesto;
}

Especial::~Especial() {}

// Getter / Setter
int Especial::getAnoManifesto() {
	return this->anoManifesto;
}

string Especial::getDescripcion() {
	return this->descripcion;
}

string Especial::getTipo() {
	return "Especial";
}

// Methods