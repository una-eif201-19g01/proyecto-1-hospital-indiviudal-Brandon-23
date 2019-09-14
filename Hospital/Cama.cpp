#include "Cama.h"

Cama::Cama() {}

Cama::Cama(const string &codigo, bool estado) : codigo(codigo), estado(estado) {}

Cama::~Cama() {
}

const string &Cama::getCodigo(){
	return codigo;
}

void Cama::setCodigo(const string &codigo) {
	Cama::codigo = codigo;
}

const bool Cama::isEstado() {
	return estado;
}

bool Cama::verificaCama(string _codigo) {
	if (Cama::codigo != _codigo) {
		return false;
	}
	else
		return true;
}

void Cama::setEstado(bool estado) {
	Cama::estado = estado;
}

string Cama::toString() {
	string reporte;

	reporte = "codigo: " + codigo + " estado: ";
	reporte += estado;
}
