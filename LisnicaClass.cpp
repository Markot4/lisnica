#include <iostream>
#include "LisnicaClass.h"
//ovo je samo test za pull request. sve ovdje za sad radi
namespace markot4 {
	void LisnicaClass::dodajVrijednosniPapir(VrijednosniPapir vp){
		papiri.push_back(vp);
		return;
	}

	void LisnicaClass::izbaciVrijednosniPapir(string oznaka) {
		int ix = -1;
		for (int i = 0; i < papiri.size();i++) {
			VrijednosniPapir &vp = papiri[i];
			if (vp.oznaka == oznaka) {
				ix = i;
			}
		}
		if (ix >= 0) {
			papiri.erase(papiri.begin() + ix);
		}
		return;
	}

	int LisnicaClass::promjenaKolicine(int promjena, string oznaka) {
		for (int i = 0; i < papiri.size(); i++) {
			VrijednosniPapir& vp = papiri[i];
			if (vp.oznaka == oznaka) {
				vp.kolicina += promjena;
			}
		}
		return 0;
	}

	void LisnicaClass::promjenaCijene(double cijena, string oznaka) {

	}

	int LisnicaClass::promjenaCijene(string paragraf) {

		return 0;
	}

	double LisnicaClass::vrijPoVrijPapir(string oznaka) {

		return 0;
	}

	double LisnicaClass::sveDionice() {

		return 0;
	}

	double LisnicaClass::sveObveznice() {

		return 0;
	}

	int LisnicaClass::vrijednostCijeleLisnice() {

		return 0;
	}

	void LisnicaClass::sadrzajCijeleLisnice() {

	}
	LisnicaClass::LisnicaClass() {
			
	}
}