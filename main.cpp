#include "Fachada.h"
#include <iostream>

int main() {
	Fachada test = Fachada();
	Error testError = Error();

	Bruja * arrtest[4] = {
					new Suprema(Fecha(22, 10, 1800), 3, 0, "Florencia"),
					new Suprema(Fecha(15, 9, 1932), 1, 1, "Maradona"),
					new Comun("Salem", true, 2, "Maria"),
					new Comun("Montevideo", false, 3, "Riquelme"),
	};
	Hechizo * arrtest2[4] = {
					new Hechizo("Linguardum"),
					new Hechizo("Avada"),
					new Especial(2023, "El hechizo mata hinchas de peñarol", "Kadavra"),
					new Especial(2015, "El hechizo especial supremo usado por Voldemort", "Messi"),
	};

	// Inserto 4 brujas
	test.nuevaSuprema((Suprema *) arrtest[1], testError);
	test.nuevaSuprema((Suprema *) arrtest[0], testError);
	test.nuevaComun((Comun *) arrtest[3], 1,testError);

	// Les agrego 4 hechizos
	test.registrarHechizo(0, arrtest2[3], testError);
	test.registrarHechizo(1, arrtest2[2], testError);
	test.registrarHechizo(2, arrtest2[1], testError);
	test.registrarHechizo(3, arrtest2[0], testError);


	// Etc
	test.listarAquelarre(testError);


	return 0;
}
