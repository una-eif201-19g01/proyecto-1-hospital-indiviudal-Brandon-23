#include "Especialidad.h"

Especialidad::Especialidad(){}

Especialidad::~Especialidad(){}

void Especialidad::agregaEspecialidades(string _especialidades) {
	especialidades.push_back(_especialidades);
}

bool Especialidad::verificaEspecialidades(string _especialidad) {
	bool encuentraE = false;
	for (int cont = 0; cont <= MAXIMO; cont++) {
		if (especialidades[cont] == _especialidad) {
			encuentraE = true;
		}
	}
	return encuentraE;
}

const vector<string> &Especialidad::getEspecialidades() {
	return especialidades;
}

void Especialidad::setEspecialidades(const vector <string> &especialidades) {
	Especialidad::especialidades = especialidades;
}

string Especialidad::toString() {
	string reporte;

	int cantidad = especialidades.size();

	for (int cont = 0; cont < cantidad; cont++) {
		reporte += especialidades[cont]+ "\n";
	}

	return reporte;
}