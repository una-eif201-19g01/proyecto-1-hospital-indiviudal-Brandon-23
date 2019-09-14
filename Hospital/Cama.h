#include <ostream>
#include "string"

using namespace std;

class Cama {
private:
	string codigo;
	bool estado;

public:
	Cama();

	Cama(const string &codigo, bool estado);

	virtual ~Cama();

	bool verificaCama(string _codigo);

	const string &getCodigo();

	void setCodigo(const string &codigo);

	const bool isEstado();

	void setEstado(bool estado);

	string toString();
};