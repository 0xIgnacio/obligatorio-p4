#include <iostream>
#include "Fecha.h"

// PUBLIC
// Constructor
Fecha::Fecha() {
	this->dia = 0;
	this->mes = 0;
	this->ano = 0;
}

Fecha::Fecha(int dia, int mes, int ano) {
	this->dia = dia;
	this->mes = mes;
	this->ano = ano;
}

Fecha::~Fecha() {}

// Getter / Setter
int Fecha::getAno() {
	return this->ano;
}

// Operator
bool Fecha::operator<(Fecha otra) {
	return this->ano < otra.ano || this->mes < otra.mes || this->dia < otra.dia;
}

// Methods
void Fecha::toString() {
	std::cout << this->dia << '/' << this->mes << '/' << this->ano;
}