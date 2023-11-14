#include "Suprema.h"
#include <iostream>

// PUBLIC
// Constructor / Destructor
Suprema::Suprema():Bruja(),fechaNac() {
	this->cantPoderes = 0;
}

Suprema::Suprema(Fecha fechaNac, int cantPoderes, int identificador, string nombre):Bruja(identificador, nombre), fechaNac(fechaNac) {
	this->cantPoderes = cantPoderes;
}

Suprema::~Suprema() {}

// Getter / Setter
Fecha Suprema::getFechaNac() {
	return this->fechaNac;
}

int Suprema::getCantPoderes() {
	return this->cantPoderes;
}

string Suprema::getTipo() {
	return "Suprema";
}

int Suprema::getPuntosPoder() {
	return 2 * this->cantHechizosComunes() +
		4 * this->cantHechizosEspeciales() +
		this->getCantPoderes() +
		(this->getFechaNac().getAno() < 1900 ? 5 : 0);
}

// Methods
void Suprema::toStringDetallado() {
	this->Bruja::toStringDetallado();
	std::cout << "Fecha de nacimiento: ";
	this->getFechaNac().toString();
	std::cout << "Cantidad de poderes: " << this->getCantPoderes();
}