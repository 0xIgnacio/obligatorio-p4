#include "Fachada.h"

// PUBLIC
// Constructor / Destructor
Fachada::Fachada():Brujas() {}

Fachada::~Fachada() {}

// Methods
void Fachada::nuevaSuprema(Suprema * nueva) {
	this->Brujas.insert(nueva);
}

void Fachada::nuevaComun(Comun * nueva, int super) {
	Suprema * aux = (Suprema *) (this->Brujas.find(super));
	nueva->setSuprema(aux);
	this->Brujas.insert(nueva);
}

void Fachada::listarAquelarre() {
	this->Brujas.toString();
}

void Fachada::listarBruja(int id) {
	Bruja * aux = this->Brujas.find(id);
	aux->toStringDetallado();
}

void Fachada::listarSupremaMayor() {
	int mayor = this->Brujas.masAnciana();
	this->listarBruja(mayor);
}

void Fachada::registrarHechizo(int id, Hechizo * nuevo) {
	Bruja * aux = this->Brujas.find(id);
	aux->agregarHechizo(nuevo);
}

void Fachada::listarHechizo(int idBruja, int idHechizo) {
	Bruja * aux = this->Brujas.find(idBruja);
	SecHechizo * secaux = aux->getSecHechizo();
	secaux->getHechizo(idHechizo)->toString();
}

int Fachada::hechizosEspecialesAno(int idBruja, int ano) {
	Bruja * aux = this->Brujas.find(idBruja);
	SecHechizo * secaux = aux->getSecHechizo();
	return secaux->cantAno(ano);
}