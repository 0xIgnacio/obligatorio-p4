#ifndef ARTICULO_FECHA_H
#define ARTICULO_FECHA_H

class Fecha {
	private:
		// Atributes
		int dia;
		int mes;
		int ano;

	public:
		// Constructor
		Fecha();
		Fecha(int, int, int);
		~Fecha();

		// Getter / Setter
		int getAno();

		// Operator
		bool operator<(Fecha);

		// Methods
		void toString();
};

#endif //ARTICULO_FECHA_H
