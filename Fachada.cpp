#include "Fachada.h"

// PUBLIC
// Constructor / Destructor
Fachada::Fachada():Brujas() {}

Fachada::~Fachada() {}

// Methods
void Fachada::nuevaSuprema(Suprema * nueva, Error & tipo) {
	if (!this->Brujas.member(nueva->getIdentificador()))
		this->Brujas.insert(nueva);
	else tipo.SetTipoError(SupremaExiste);
}

void Fachada::nuevaComun(Comun * nueva, int super, Error & tipo) {
	if (!this->Brujas.member(nueva->getIdentificador())) {
		if (this->Brujas.member(super)) {
			Suprema * aux = (Suprema *) (this->Brujas.find(super));
			nueva->setSuprema(aux);
			this->Brujas.insert(nueva);
		} else tipo.SetTipoError(BrujaNoExiste);
	} else tipo.SetTipoError(ComunExiste);
}

void Fachada::listarAquelarre(Error & tipo) {
	if (!this->Brujas.esVacia())
		this->Brujas.toString();
	else tipo.SetTipoError(ArbolVacio);
}

void Fachada::listarBruja(int id, Error & tipo) {
	if (!this->Brujas.esVacia()) {
		if (this->Brujas.member(id)) {
			Bruja * aux = this->Brujas.find(id);
			aux->toStringDetallado();
		} else tipo.SetTipoError(BrujaNoExiste);
	} else tipo.SetTipoError(ArbolVacio);
}

void Fachada::listarSupremaMayor(Error & tipo) {
	if (!this->Brujas.esVacia()) {
		int mayor = this->Brujas.masAnciana();
		this->listarBruja(mayor, tipo);
	} else tipo.SetTipoError(ArbolVacio);
}

void Fachada::registrarHechizo(int id, Hechizo * nuevo, Error & tipo) {
	if (!this->Brujas.esVacia()) {
		if (this->Brujas.member(id)) {
			SecHechizo * secaux = this->Brujas.find(id)->getSecHechizo();
			if (!secaux->existe(nuevo->getNumero())) {
				if (!secaux->estaLleno()) {
					Bruja * aux = this->Brujas.find(id);
					aux->agregarHechizo(nuevo);
				} else tipo.SetTipoError(HechizosLlenos);
			} else tipo.SetTipoError(HechizoExiste);
		} else tipo.SetTipoError(BrujaNoExiste);
	} else tipo.SetTipoError(ArbolVacio);
}

void Fachada::listarHechizo(int idBruja, int idHechizo, Error & tipo) {
	if (!this->Brujas.esVacia()) {
		if (this->Brujas.member(idBruja)) {
			SecHechizo * secaux = this->Brujas.find(idBruja)->getSecHechizo();
			if (secaux->existe(idHechizo)) {
				secaux->getHechizo(idHechizo)->toString();
			} else tipo.SetTipoError(HechizoNoExiste);
		} else tipo.SetTipoError(BrujaNoExiste);
	} else tipo.SetTipoError(ArbolVacio);
}

int Fachada::hechizosEspecialesAno(int idBruja, int ano, Error & tipo) {
	if (!this->Brujas.esVacia()) {
		if (this->Brujas.member(idBruja)) {
			Bruja * aux = this->Brujas.find(idBruja);
			SecHechizo * secaux = aux->getSecHechizo();
			return secaux->cantAno(ano);
		} else tipo.SetTipoError(BrujaNoExiste);
	} else tipo.SetTipoError(ArbolVacio);
	return 0;
}