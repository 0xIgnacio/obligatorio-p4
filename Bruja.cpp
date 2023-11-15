#include "Bruja.h"
#include <iostream>

// PRIVATE
// Methods
string Bruja::generarIdentificador(int num) {
	int limite = 5;
	// xxxxx		Ej.: ab2e5
	string id;
	while (id.length() < limite) {
		int resto = num % 36;
		char caracter;
		if (resto < 10) caracter = '0' + resto;
		else caracter = 'A' + (resto - 10);
		id += caracter;
		num /= 36;
	}
	return id;
}

// PUBLIC
// Constructor / Destructor
Bruja::Bruja():nombre(), hechizos() {
	this->identificador = '0';
}

Bruja::Bruja(string nombre):nombre(nombre), hechizos() {
	this->identificador = generarIdentificador(this->contador);
	this->contador++;
}

Bruja::~Bruja() {}

// Getter / Setter
string Bruja::getIdentificador() {
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
	std::cout << "\n";
	// a3. Potranca, bruja Común
}

void Bruja::toStringDetallado() {
	std::cout << "\nIdentificador: " << this->getIdentificador();
	std::cout << "\nTipo: " << this->getTipo();
	std::cout << "\nPuntos de poder: " << this->getPuntosPoder();
	std::cout << "\nNombre: " << this->getNombre();
	std::cout << "\nHechizos: ";
	this->hechizos.toString();
}
