#include <string>
#include <ostream>

using namespace std;

class Paciente {
private:
	string cedula, nombre, apellidos, direccion, patologia, tipoDCirugia;
	bool estado;
	string prioridad;
	string fechaCirugia;

public:
	Paciente();

	Paciente(string cedula, string nombre, string apellidos, string direccion, string patologia, string tipoDCirugia, bool estado, string prioridad, string fechaCirugia);

	virtual ~Paciente();

	const string &getCedula();

	const string &getNombre();

	const string &getApellidos();

	const string &getDireccion();

	const string &getPatologia();

	const string &getTipoDCirugia();

	string getPrioridad();

	string getFechaCirugia();

	const bool isEstado();

	void setCedula(const string cedula);

	void setNombre(const string nombre);

	void setApellidos(const string apellidos);

	void setDireccion(const string direccion);

	void setPatologia(const string patologia);

	void setTipoDCirugia(const string tipoDCirugia);

	void setPrioridad(string prioridad);

	void setFechaCirugia(string fechaCirugia);

	string toString();

};