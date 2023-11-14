#ifndef OBLIGATORIO_P4_ERROR_H
#define OBLIGATORIO_P4_ERROR_H

#include "EnumError.h"

class Error {
	private:
		// Atributes
		TipoError info;

	public:
		// Constructor / Destructor
		Error();
		Error(TipoError);

		// Methods
		TipoError ObtenerTipoError();
		void SetTipoError(TipoError);
		bool HayError();
		void mostrarError();
};

#endif //OBLIGATORIO_P4_ERROR_H
