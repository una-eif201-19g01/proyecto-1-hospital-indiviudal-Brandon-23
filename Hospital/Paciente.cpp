#include "Paciente.h"

Paciente::Paciente(){}

Paciente::Paciente(string cedula, string nombre, string apellidos, string direccion, string patologia, string tipoDCirugia, bool estado, string Prioridad, string fechaCirugia) :
	cedula(cedula), nombre(nombre), apellidos(apellidos), direccion(direccion), patologia(patologia), tipoDCirugia(tipoDCirugia), estado(estado), prioridad(prioridad), fechaCirugia(fechaCirugia) {}

Paciente::~Paciente(){}

const string & Paciente::getCedula()
{
	return cedula;
}

const string & Paciente::getNombre()
{
	return nombre;
}

const string & Paciente::getApellidos()
{
	return apellidos;
}

const string & Paciente::getDireccion()
{
	return direccion;
}

const string & Paciente::getPatologia()
{
	return patologia;
}

const string & Paciente::getTipoDCirugia()
{
	return tipoDCirugia;
}

string Paciente::getPrioridad()
{
	return prioridad;
}

string Paciente::getFechaCirugia()
{
	return fechaCirugia;
}

const bool Paciente::isEstado()
{
	return estado;
}

void Paciente::setCedula(const string cedula)
{
	Paciente::cedula = cedula;
}

void Paciente::setNombre(const string nombre)
{
	Paciente::nombre = nombre;
}

void Paciente::setApellidos(const string apellidos)
{
	Paciente::apellidos = apellidos;
}

void Paciente::setDireccion(const string direccion)
{
	Paciente::direccion = direccion;
}

void Paciente::setPatologia(const string patologia)
{
	Paciente::cedula = cedula;
}

void Paciente::setTipoDCirugia(const string tipoDCirugia)
{
	Paciente::tipoDCirugia = tipoDCirugia;
}

void Paciente::setPrioridad(string prioridad)
{
	Paciente::prioridad = prioridad;
}

void Paciente::setFechaCirugia(string fechaCirugia)
{
	Paciente::fechaCirugia = fechaCirugia;
}

string Paciente::toString() {
	string reporte;

	reporte+= "cedula :"+cedula+"\nnombre :"+ nombre + "\napellidos :" + apellidos + "\ndireccion :" +
}
