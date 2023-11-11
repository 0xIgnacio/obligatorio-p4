#include "Comun.h"
#include <iostream>

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
	std::cout << "Region de origen: " << this->getRegionOrigen();
	std::cout << "Vuela en escoba: " << this->getVuelaEscoba();
	std::cout << "\nSuperior: ";
	this->super->toStringDetallado();
}