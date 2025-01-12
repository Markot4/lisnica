#include "Obveznica.h"

namespace markot4 {
	Obveznica::Obveznica(string ime) : VrijednosniPapir(ime) {
		this->nominalnaCijena = 100;
	}

	Obveznica::Obveznica(string ime, double nominalnaCijena) : VrijednosniPapir(ime) {
		this->nominalnaCijena = nominalnaCijena;
	}
}