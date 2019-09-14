#include <iostream>
#include "Pabellon.h"
#include "Especialidad.h"
#include "Doctor.h"
#include "Paciente.h"

int main() {

	vector <string> especial;

	Especialidad especialidad1;

	cout << "Digite las especialidades" <<"\n"<< endl;

	string especialidades;

	for (int cont = 1; cont <= MAXIMO; cont++) {
		cout << "Especialidad numero " << cont << "\n" << endl; cin >> especialidades; system("cls");

		especial.push_back(especialidades);

		especialidad1.agregaEspecialidades(especialidades);
	}

	string reporte;

	reporte = especialidad1.toString();

	cout << "Estan son las especialidades ingresadas " <<"\n" <<endl;
	cout<< reporte << endl;

	Doctor doctor[19];
	Doctor doctor1;

	string doctores, doctorEspecialidad;
	
	for (int cont = 0; cont < MAXIMOD; cont++) {

		cout << "Ingrese el nombre del doctor numero " << cont + 1 << endl; cin >> doctores; system("cls");
		cout << "Digite la especialidad del doctor" << endl; cin >> doctorEspecialidad;

		do {
			if (especialidad1.verificaEspecialidades(doctorEspecialidad) == false) {
				cout << "La especialidad ingresada no se encuentra disponible, por favor digite de nuevo la especialidad del doctor" << endl; cin >> doctorEspecialidad;
			}
		} while (especialidad1.verificaEspecialidades(doctorEspecialidad) == false);

		doctor[cont].setNombre(doctores);
		doctor1.agregaDoctores(doctorEspecialidad);
	}

	cout << "Los doctores y sus especialidades son los siguientes \n" << endl;

	for (int cont = 0; cont < MAXIMOD; cont++) {
		cout << "Nombre del doctor numero"<< cont+1 <<": "<<doctor[cont].getNombre() <<"Especialidad :"<< doctor1.toString(cont) << endl;
	}

	Pabellon* pabellon[10];

	pabellon[0] = new Pabellon('A', 'H', 20);
	pabellon[1] = new Pabellon('B', 'H', 20);
	pabellon[2] = new Pabellon('C', 'H', 20);
	pabellon[3] = new Pabellon('D', 'H', 20);
	pabellon[4] = new Pabellon('E', 'H', 20);
	pabellon[5] = new Pabellon('F', 'M', 20);
	pabellon[6] = new Pabellon('G', 'M', 20);
	pabellon[7] = new Pabellon('H', 'M', 20);
	pabellon[8] = new Pabellon('I', 'M', 20);
	pabellon[9]= new Pabellon('J', 'M', 20);

	Cama* cama[19];

	const int MaximoCamas = 200;
	int CamasCont = 1;
	bool Parar = true;
	int decision;
	int incrementoPabellon = 0;

	cout << "Ingrese a continuacion las camas" << "\n" << endl;
	do {
		string codigo; bool estado;

		cout << "Digite 1 si desea agregar una cama" << endl; cin >> decision; system("cls");
		if(CamasCont <= MaximoCamas) {
			if (decision != 0) {

				cout << "Digite una letra de la A a la J en mayuscula para seleccionar el pabellon al cual desea agregar la cama" << endl; cin >> codigo;

				cout << "Escriba true si la cama esta disponible y sino escriba false" << endl; cin >> estado;

				codigo = codigo + to_string(CamasCont);

				cama[CamasCont-1] = new Cama(codigo, estado);

				pabellon[incrementoPabellon]->agregarCama(cama[CamasCont - 1]);

				CamasCont++;
			}
			else {
				Parar = false;
			}
		}
	} while (Parar == true);

	string Cedula, Nombre, Apellidos, Direccion, Patologia, TipoDCirugia, Prioridad, FechaCirugia, NombreMedico, CodigoCama;
	bool Estado;

	cout << "Digite los datos del paciente" << endl; system("cls");
	cout << "Cedula" << endl; cin >> Cedula; system("cls");
	cout << "nombre" << endl; cin >> Nombre; system("cls");
	cout << "apellidos" << endl; cin >> Apellidos; system("cls");
	cout << "direccion" << endl; cin >> Direccion; system("cls");
	cout << "patologia" << endl; cin >> Patologia; system("cls");
	cout << "tipo de cirugia" << endl; cin >> TipoDCirugia; system("cls");
	cout << "estado" << endl; cin >> Estado; system("cls");
	cout << "prioridad" << endl; cin >> Prioridad; system("cls");
	cout << "fecha cirugia" << endl; cin >> FechaCirugia; system("cls");
	cout << "nommbre del  medico" << endl; cin >> NombreMedico; system("cls");
	for (int cont = 0; cont < MAXIMOD; cont++) {
		if (doctor[cont].verificaDoctor(NombreMedico) == false) {
			cout << "El nombre del medico que introdujo no coincide con ningun medico en el hospital,por favor vuelva a introducir el nombre de su medico" << endl; cin >> NombreMedico; system("cls");
			cont = 0;
		}
	}

	cout << "codigo de la cama" << endl; cin >> CodigoCama; system("cls");
	for (int cont = 0; cont < MaximoCamas; cont++) {
		if()
	}

	

	system("pause");

	return 0;
}