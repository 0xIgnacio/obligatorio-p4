#ifndef OBLIGATORIOP4_COMUN_H
#define OBLIGATORIOP4_COMUN_H

#include "Bruja.h"
#include "Suprema.h"

class Comun: public Bruja {
	private:
		// Atributes
		string regionOrigen;
		bool vuelaEscoba;
		Suprema * super;

	public:
		// Constructor / Destructor
		Comun();
		Comun(string, bool, string);
		~Comun();

		// Getter / Setter
		string getRegionOrigen();
		bool getVuelaEscoba();
		string getTipo() override;
		int getPuntosPoder() override;
		void setSuprema(Suprema *);

		// Methods
		void toStringDetallado() override;
};

#endif //OBLIGATORIOP4_COMUN_H
