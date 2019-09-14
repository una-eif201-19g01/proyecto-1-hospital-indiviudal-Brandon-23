#include <string>
#include <vector>
#include <ostream>

using namespace std;

const int MAXIMO = 10;

class Especialidad {
private:
	vector<string> especialidades;

public:
	Especialidad();

	virtual ~Especialidad();

	void agregaEspecialidades(string _especialidades);

	bool verificaEspecialidades(string _especialdiad);

	const vector<string> &getEspecialidades();

	void setEspecialidades(const vector<string> &especialidades);

	string toString();
};