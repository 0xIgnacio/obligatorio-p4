#include "Suprema.h"

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

// Methods