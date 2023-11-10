#include "Comun.h"

// PUBLIC
// Constructor / Destructor
Comun::Comun(): Bruja(), regionOrigen() {
	this->vuelaEscoba = false;
}

Comun::Comun(string regionOrigen, bool vuelaEscoba, int identificador, string nombre): Bruja(identificador, nombre), regionOrigen() {
	this->vuelaEscoba = vuelaEscoba;
}

Comun::~Comun() {}

// Getter / Setter
string Comun::getRegionOrigen() {
	return this->regionOrigen;
}

bool Comun::getVuelaEscoba() {
	return this->vuelaEscoba;
}

// Methods
