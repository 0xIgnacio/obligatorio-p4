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

// Methods