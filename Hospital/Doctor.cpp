#include "Doctor.h"

Doctor::Doctor(){}

Doctor::Doctor(const string nombre): nombre(nombre){}

Doctor::~Doctor(){}

void Doctor::agregaDoctores(string _doctores) {
	doctores.push_back(_doctores);
}

bool Doctor::verificaDoctor(string _nombre) {
	bool EncuentraD = true;
	if (nombre != _nombre) {
		EncuentraD = false;
	}
	return EncuentraD;
}

const string &Doctor::getNombre() {
	return nombre;
}

void Doctor::setNombre(const string &nombre) {
	Doctor::nombre = nombre;
}

const vector<string> &Doctor::getDoctores() {
	return doctores;
}

void Doctor::setDoctores(const vector<string> &doctores) {
	Doctor::doctores = doctores;
}

string Doctor::toString(int _pos) {
	string reporte;

	int p = _pos;

	reporte = doctores[p];

	return reporte;
}