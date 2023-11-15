#include "Comun.h"
#include <iostream>

// PUBLIC
// Constructor / Destructor
Comun::Comun(): Bruja(), regionOrigen() {
	this->vuelaEscoba = false;
}

Comun::Comun(string regionOrigen, bool vuelaEscoba, string nombre): Bruja(nombre), regionOrigen(regionOrigen) {
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

string Comun::getTipo() {
	return "Comun";
}

int Comun::getPuntosPoder() {
	return this->cantHechizosComunes() +
		2 * this->cantHechizosEspeciales() +
		(this->getRegionOrigen() == "Salem" ? 1 : 0);
}

void Comun::setSuprema(Suprema * sup) {
	this->super = sup;
}

// Methods
void Comun::toStringDetallado() {
	this->Bruja::toStringDetallado();
	std::cout << "\nRegion de origen: " << this->getRegionOrigen();
	std::cout << "\nVuela en escoba: " << this->getVuelaEscoba();
	std::cout << "\nSuperior: ";
	this->super->toStringDetallado();
}