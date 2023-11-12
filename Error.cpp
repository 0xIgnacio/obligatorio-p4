#include "Error.h"

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