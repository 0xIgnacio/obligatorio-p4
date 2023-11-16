#include "Fachada.h"
#include <iostream>

int Bruja::contador = 0;

int main() {
	Fachada test = Fachada();
	Error testError = Error();
	Iterador iter = Iterador();

	Bruja * arrtest[4] = {
					new Suprema(Fecha(22, 10, 1800), 13, "Florencia"),
					new Suprema(Fecha(15, 9, 1932), 23, "Maradona"),
					new Comun("Salem", true, "Maria"),
					new Comun("Montevideo", false, "Riquelme"),
	};
	Hechizo * arrtest2[25] = {
					new Hechizo("Linguardum"),
					new Hechizo("Avada"),
					new Especial(2023, "El hechizo mata hinchas de peñarol", "Kadavra"),
					new Especial(2023, "El hechizo mata hinchas de peñarol", "Kadavra"),
					new Especial(2023, "El hechizo mata hinchas de peñarol", "Kadavra"),
					new Especial(2023, "El hechizo mata hinchas de peñarol", "Kadavra"),
					new Hechizo("Avada"),
					new Hechizo("Avada"),
					new Hechizo("Avada"),
					new Hechizo("Avada"),
					new Hechizo("Avada"),
					new Especial(2023, "El hechizo mata hinchas de peñarol", "Kadavra"),
					new Especial(2023, "El hechizo mata hinchas de peñarol", "Kadavra"),
					new Hechizo("Avada"),
					new Hechizo("Avada"),
					new Hechizo("Avada"),
					new Hechizo("Avada"),
					new Especial(2023, "El hechizo mata hinchas de peñarol", "Kadavra"),
					new Especial(2023, "El hechizo mata hinchas de peñarol", "Kadavra"),
					new Especial(2023, "El hechizo mata hinchas de peñarol", "Kadavra"),
					new Hechizo("Avada"),
					new Especial(2023, "El hechizo mata hinchas de peñarol", "Kadavra"),
					new Especial(2023, "El hechizo mata hinchas de peñarol", "Kadavra"),
					new Hechizo("Avada"),
					new Hechizo("Avada"),
	};

	// Inserto 4 brujas
	test.nuevaSuprema((Suprema *) arrtest[1], testError);
	test.nuevaSuprema((Suprema *) arrtest[0], testError);
	test.nuevaComun((Comun *) arrtest[3], "00000",testError);
	test.nuevaComun((Comun *) arrtest[2], "00000",testError);

	// Les agrego 4 hechizos
	test.registrarHechizo("00000", arrtest2[3], testError);
	test.registrarHechizo("00000", arrtest2[2], testError);
	test.registrarHechizo("00000", arrtest2[1], testError);
	test.registrarHechizo("00000", arrtest2[0], testError);

	for (int i = 4; i < 25; ++i) {
		test.registrarHechizo("00000", arrtest2[i], testError);
		testError.mostrarError();
	}

	std::cout << "\n\n";

	// Etc
	test.listarAquelarre(iter, testError);
	iter.Listar();

	test.listarBruja("30000", testError);
	cout << "\n";
	test.listarSupremaMayor(testError);
	cout << "\n";
	test.listarHechizo("00000", 2, testError);
	cout << "\n";
	cout << test.hechizosEspecialesAno("00000", 2023, testError);

	return 0;
}
