#ifndef OBLIGATORIOP4_BRUJA_H
#define OBLIGATORIOP4_BRUJA_H

#include "SecHechizo.h"
#include <string>
using namespace std;

class Bruja {
	private:
		// Atributes
		string identificador;
		string nombre;
		SecHechizo hechizos;
		// static int contador;

		// Mehtods
		string generarIdentificador(int);

	public:
		// Constructor / Destructor
		Bruja();
		Bruja(string, string);
		virtual ~Bruja();

		// Getter / Setter
		string getIdentificador();
		string getNombre();
		SecHechizo * getSecHechizo();
		int cantHechizosComunes();
		int cantHechizosEspeciales();
		virtual string getTipo() = 0;
		virtual int getPuntosPoder() = 0;

		// Methods
		void agregarHechizo(Hechizo *);
		void toStringSimple();
		virtual void toStringDetallado();
};

#endif //OBLIGATORIOP4_BRUJA_H
