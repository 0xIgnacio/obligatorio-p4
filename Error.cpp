#include "Error.h"
#include <iostream>

using namespace std;

// PUBLIC
// Constructor / Destructor
Error::Error() {
	this->info = SinError;
}

Error::Error(TipoError tipo) {
	this->info = tipo;
}

// Methods
TipoError Error::ObtenerTipoError() {
	return this->info;
}

void Error::SetTipoError(TipoError tipo) {
	this->info = tipo;
}

bool Error::HayError() {
	return this->info != SinError;
}

void Error::mostrarError() {
	switch (this->info) {
		case SupremaExiste:
				cout << "\nError: Bruja suprema ya existe" << endl;
			break;
		case ComunExiste:
				cout << "\nError: Bruja comunn ya existe" << endl;
			break;
		case BrujaNoExiste:
				cout << "\nError: Bruja no existe" << endl;
			break;
		case ArbolVacio:
				cout << "\nError: El árbol está vacío" << endl;
			break;
		case HechizoNoExiste:
				cout << "\nError: El hechizo no existe" << endl;
			break;
		case HechizosLlenos:
				cout << "\nError: Límite de hechizos alcanzado" << endl;
			break;
		default:
				cout << "\nError: desconocido" << endl;
			break;
	}

	this->info = SinError;
}