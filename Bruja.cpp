#include "Bruja.h"
#include <iostream>

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

int Bruja::cantHechizosComunes() {
	SecHechizo * aux = this->getSecHechizo();
	return aux->cantComunes();
}

int Bruja::cantHechizosEspeciales() {
	SecHechizo * aux = this->getSecHechizo();
	return aux->cantEspeciales();
}

// Methods
void Bruja::agregarHechizo(Hechizo * nuevo) {
	this->hechizos.insert(nuevo);
}

void Bruja::toStringSimple() {
	std::cout << this->getIdentificador() << ". " << this->getNombre() << ", bruja " << this->getTipo();
	// a3. Potranca, bruja Común
}

void Bruja::toStringDetallado() {
	std::cout << "Identificador: " << this->getIdentificador();
	std::cout << "Tipo: " << this->getTipo();
	std::cout << "Puntos de poder: " << this->getPuntosPoder();
	std::cout << "Nombre: " << this->getNombre();
	std::cout << "Hechizos: ";
	this->hechizos.toString();
}
