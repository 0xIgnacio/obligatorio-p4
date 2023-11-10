#include "SecHechizo.h"

// PUBLIC
// Constructor / Destructor
SecHechizo::SecHechizo() {
	this->tope = 0;
}

SecHechizo::~SecHechizo() {
	for (int i = 0; i < this->tope; ++i)
		delete this->hechizos[i];
}

// Primitivas
void SecHechizo::insert(Hechizo * nuevo) {
	this->hechizos[this->tope] = nuevo;
	this->tope++;
}

bool SecHechizo::estaLleno() {
	return this->tope == MAX_H;
}

// Methods