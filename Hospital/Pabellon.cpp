#include "Pabellon.h"

Pabellon::Pabellon() {}

Pabellon::Pabellon(char id, char genero, int tamano) : id(id), genero(genero), tamano(tamano) {
	cantidad = 0;
	cama = new Cama*[tamano];
}

Pabellon::~Pabellon() {
	delete[] cama;
}

Cama *Pabellon::obtenerCama(int _posicion) const {
	return cama[_posicion];
}

void Pabellon::agregarCama(Cama *_cama) {
	if (cantidad < tamano) {
		cama[cantidad++] = _cama;
	}
}

void Pabellon::eliminarCama(Cama *_cama) {
	if (cantidad < tamano) {
		delete _cama;
		cantidad--;
	}
}

void Pabellon::eliminarTodasLasCamas() {

	for (int cont = 0; cont < cantidad; cont++) {
		delete cama[cont];
	}

	cantidad = 0;
}

char Pabellon::getId() const {
	return id;
}

void Pabellon::setId(char id) {
	Pabellon::id = id;
}

char Pabellon::getGenero() const {
	return genero;
}

void Pabellon::setGenero(char genero) {
	Pabellon::genero = genero;
}

int Pabellon::getTamano() const {
	return tamano;
}

void Pabellon::setTamano(int tamano) {
	Pabellon::tamano = tamano;
}

int Pabellon::getCantidad() const {
	return cantidad;
}

void Pabellon::setCantidad(int cantidad) {
	Pabellon::cantidad = cantidad;
}

string Pabellon::toString() {
	std::string reporteCamas;

	reporteCamas += "Pabell�n -- id: " + string(1, id) + ", genero: " + string(1, genero) +
		", tamano: " + to_string(tamano) + ", cantidad: " + to_string(cantidad) + ", camas: [";

	for (int contador = 0; contador < cantidad; contador++) {
		reporteCamas += cama[contador]->getCodigo() + ", ";
	}

	reporteCamas += "]\n";

	return reporteCamas;
}