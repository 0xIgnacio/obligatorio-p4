#include "Fachada.h"
#include <iostream>
#include "Menu.h"
using namespace std;

int Bruja::contador = 0;

int main() {
	cout<<noskipws;
	Fachada info;
	Error error;
	int opcion;

	do {
		Menu::menuPrincipal();
		cin >> opcion;
		std::cin.ignore();
		switch (opcion) {
			case 1: {
				Menu::menuReq1();
				int diaF, mesF, anioF, cantPoderesN; string nombreN;
				cout << "Ingrese nombre: ";
				cin >> nombreN;
				cout << "Ingrese fecha de nacimiento: ";
				scanf("%d/%d/%d", &diaF, &mesF, &anioF);
				cout << "Ingrese cantidad de poderes: ";
				cin >> cantPoderesN;
				Suprema * nueva = new Suprema(Fecha(diaF, mesF, anioF), cantPoderesN, nombreN);
				info.nuevaSuprema(nueva, error);
				if (error.HayError())
					error.mostrarError();
			} // Nueva suprema
				break;
			case 2: {
				Menu::menuReq2();
				bool vuelaEscobaN; string regionOrigenN, nombreN, idSuperN;
				cout << "Ingrese nombre: ";
				cin >> nombreN;
				cout << "Region de origen: ";
				cin >> regionOrigenN;
				cout << "Vuela en escoba? (1/0): ";
				cin >> vuelaEscobaN;
				cout << "ID. bruja superior: ";
				cin >> idSuperN;
				Comun * nueva = new Comun(regionOrigenN, vuelaEscobaN, nombreN);
				info.nuevaComun(nueva, idSuperN, error);
				if (error.HayError())
					error.mostrarError();
			} // Nueva comun
				break;
			case 3: {
				Menu::menuReq3();
				Iterador iter;
				info.listarAquelarre(iter, error);
				iter.Listar();
				if (error.HayError())
					error.mostrarError();
			} // Listar aquelarre
				break;
			case 4: {
				Menu::menuReq4();
				string idL;
				cout << "Ingrese ID.: " << endl;
				cin >> idL;
				info.listarBruja(idL, error);
				if (error.HayError())
					error.mostrarError();
			} // Listar bruja en concreto
				break;
			case 5: {
				Menu::menuReq5();
				info.listarSupremaMayor(error);
				if (error.HayError())
					error.mostrarError();
			} // Listar suprema anciana
				break;
			case 6: {
				Menu::menuReq6();
				Hechizo * nuevo = new Hechizo();
				int opcion0;
				cin >> opcion0;
				string textoN, IdBruja;
				cout << "Ingrese nombre:" << endl;
				cin >> textoN;
				if (opcion0 == 1) {
					nuevo = new Hechizo(textoN);
				} else if (opcion0 == 2) {
					int anoN; string descripcionN;
					cout << "Ingrese año en el que se manifesto: " << endl;
					cin >> anoN;
					cout << "Descripcion:" << endl;
					cin >> descripcionN;
					nuevo = new Especial(anoN, descripcionN, textoN);
				} else cout << "Desconocido" << endl;
				cout << "ID de la bruja: " << endl;
				cin >> IdBruja;
				info.registrarHechizo(IdBruja, nuevo, error);
				if (error.HayError())
					error.mostrarError();
			} // Agregar hechizo
				break;
			case 7: {
				Menu::menuReq7();
				int numHechizo; string idBruja;
				cout << "ID de la bruja: " << endl;
				cin >> idBruja;
				cout << "Numero de hechizo: " << endl;
				cin >> numHechizo;
				info.listarHechizo(idBruja, numHechizo, error);
				if (error.HayError())
					error.mostrarError();
			} // Listar hechizo
				break;
			case 8: {
				Menu::menuReq8();
				int anio; string idBruja;
				cout << "ID de la bruja: " << endl;
				cin >> idBruja;
				cout << "Anio: " << endl;
				cin >> anio;
				info.hechizosEspecialesAno(idBruja, anio, error);
				if (error.HayError())
					error.mostrarError();
			} // Cantidad de hechizos en X anio
				break;
			case 9:
				cout << "Chau loco que pases lindo";
				break;
			default:
					cout << "Porfavor ingrese un numero del 1 al 9";
				break;
		}
	} while (opcion != 9);

	return 0;
}
