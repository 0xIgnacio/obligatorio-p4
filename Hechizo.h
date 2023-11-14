#ifndef OBLIGATORIOP4_HECHIZO_H
#define OBLIGATORIOP4_HECHIZO_H

#include <string>
using namespace std;

class Hechizo {
	private:
		// Atributes
		int numero;
		string texto;

	public:
		// Constructor / Destructor
		Hechizo();
		Hechizo(string);
		~Hechizo();

		// Getter / Setter
		int getNumero();
		string getTexto();
		virtual string getTipo();
		void setNumero(int);

		// Methods
		void toString();
};

#endif //OBLIGATORIOP4_HECHIZO_H
