#ifndef OBLIGATORIO_P4_FACHADA_H
#define OBLIGATORIO_P4_FACHADA_H

#include "DiccioBrujas.h"
#include "Suprema.h"
#include "Comun.h"
#include "Error.h"

class Fachada {
	private:
		// Atributes
		DiccioBrujas Brujas;

	public:
		// Constructor / Destructor
		Fachada();
		~Fachada();

		// Methods
		void nuevaSuprema(Suprema *, Error &);					// 1) Registrar bruja suprema
		void nuevaComun(Comun *, int, Error &);					// 2) Nueva comun y asignar super
		void listarAquelarre(Iterador &, Error &);									// 3) Listar alfabeticamente brujas
		void listarBruja(int, Error &);									// 4) Listar bruja en concreto, en caso de comun listar super tambien
		void listarSupremaMayor(Error &);								// 5) Listar suprema mas anciana
		void registrarHechizo(int, Hechizo *, Error &);	// 6) Agregar hechizo a bruja
		void listarHechizo(int, int, Error &);					// 7) Listar hechizo
		int hechizosEspecialesAno(int, int, Error &);		// 8) Cant hechizos especiales en determinado año
};

#endif //OBLIGATORIO_P4_FACHADA_H
