#include "Comun.h"
#include <iostream>

// PUBLIC
// Constructor / Destructor
Comun::Comun(): Bruja(), regionOrigen() {
	this->vuelaEscoba = false;
}

Comun::Comun(string regionOrigen, bool vuelaEscoba, string identificador, string nombre): Bruja(identificador, nombre), regionOrigen(regionOrigen) {
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
		(this->getRegionOrigen() == "Salem" || "SALEM" || "salem" ? 1 : 0);
}

void Comun::setSuprema(Suprema * sup) {
	this->super = sup;
}

// Methods
void Comun::toStringDetallado() {
	this->Bruja::toStringDetallado();
	cout << "\nRegion de origen: " << this->getRegionOrigen();
	cout << "\nVuela en escoba: " << this->getVuelaEscoba();
	cout << "\nSuperior: ";
	this->super->toStringDetallado();
	cout << endl;
}