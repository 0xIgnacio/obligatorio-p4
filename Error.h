#ifndef OBLIGATORIO_P4_ERROR_H
#define OBLIGATORIO_P4_ERROR_H

enum TipoError {
	SinError,
	SupremaExiste,
	ComunExiste,
	BrujaNoExiste,
	ArbolVacio,
	HechizoExiste,
	HechizoNoExiste,
	HechizosLlenos,
};

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
};

#endif //OBLIGATORIO_P4_ERROR_H
