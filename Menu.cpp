#include "Menu.h"
#include <iostream>

using namespace std;

std::string TOP = "====================| Brujas |====================";

// PUBLIC
// Methods
void Menu::menuPrincipal() {
	cout << TOP << endl;
	cout << "\t1. Nueva bruja suprema" << endl;
	cout << "\t2. Nueva bruja comun" << endl;
	cout << "\t3. Listar aquelarre" << endl;
	cout << "\t4. Listar bruja" << endl;
	cout << "\t5. Listar suprema mas anciana" << endl;
	cout << "\t6. Registrar hechizo" << endl;
	cout << "\t7. Listar Hechizo" << endl;
	cout << "\t8. Hechizos especiales en X anio" << endl;
	cout << "\t9. Salir" << endl;
	cout << "\nIngrese opcion: ";
}

void Menu::menuReq1() {
	cout << TOP << endl;
	cout << "================| Nueva suprema: |================" << endl;
}

void Menu::menuReq2() {
	cout << TOP << endl;
	cout << "=================| Nueva comun: |=================" << endl;
}

void Menu::menuReq3() {
	cout << TOP << endl;
	cout << "===================| Listado: |===================" << endl;
}

void Menu::menuReq4() {
	cout << TOP << endl;
	cout << "===================| Listado: |===================" << endl;
}

void Menu::menuReq5() {
	cout << TOP << endl;
	cout << "===============| Suprema anciana: |===============" << endl;
}

void Menu::menuReq6() {
	cout << TOP << endl;
	cout << "===============| Agregar hechizo: |===============" << endl;
	cout << "\t1. Comun" << endl;
	cout << "\t2. Especial" << endl;
	cout << "\nIngrese opcion: ";
}

void Menu::menuReq7() {
	cout << TOP << endl;
	cout << "================| Listar hechizo: |===============" << endl;
}

void Menu::menuReq8() {
	cout << TOP << endl;
	cout << "===| Cantidad de hechizos especiales en anio: |===" << endl;
}
