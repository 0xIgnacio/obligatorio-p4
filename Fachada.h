#ifndef OBLIGATORIO_P4_FACHADA_H
#define OBLIGATORIO_P4_FACHADA_H

#include "DiccioBrujas.h"
#include "Suprema.h"
#include "Comun.h"

class Fachada {
	private:
		// Atributes
		DiccioBrujas Brujas;

	public:
		// Constructor / Destructor
		Fachada();
		~Fachada();

		// Methods
		void nuevaSuprema(Suprema *);								// 1) Registrar bruja suprema
		void nuevaComun(Comun *, int);							// 2) Nueva comun y asignar super
		void listarAquelarre();											// 3) Listar alfabeticamente brujas
		void listarBruja(int);											// 4) Listar bruja en concreto, en caso de comun listar super tambien
		void listarSupremaMayor();									// 5) Listar suprema mas anciana
		void registrarHechizo(int, Hechizo *);			// 6) Agregar hechizo a bruja
		void listarHechizo(int, int);								// 7) Listar hechizo
		int hechizosEspecialesAno(int, int);				// 8) Cant hechizos especiales en determinado año

};

#endif //OBLIGATORIO_P4_FACHADA_H
