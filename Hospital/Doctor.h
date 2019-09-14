#include <string>
#include <vector>
#include <ostream>

using namespace std;

const int MAXIMOD = 20;

class Doctor {
private:
	string nombre;
	vector<string> doctores;

public:

	Doctor();

	Doctor(string nombre);

	virtual ~Doctor();

	void agregaDoctores(string _doctores);

	bool verificaDoctor(string _nombre);

	const string &getNombre();

	void setNombre(const string &nombre);

	const vector<string> &getDoctores();

	void setDoctores(const vector<string> &doctores);

	string toString(int _pos);

};