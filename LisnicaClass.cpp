#include <iostream>
#include "LisnicaClass.h"

namespace markot4 {
	void LisnicaClass::dodajVrijednosniPapir(VrijednosniPapir vp){
		VrijednosniPapir* _newArray = new VrijednosniPapir[size + 1];
		for (uint32_t i = 0; i < size; i++) {
			_newArray[i] = array[i];
			
		}
		delete[] array;
		array = _newArray;
		array[size] = vp;
		size++;
		return;
	}

	void LisnicaClass::izbaciVrijednosniPapir(string oznaka) {

	}

	int LisnicaClass::promjenaKolicine(int promjena, string oznaka) {

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
		size = 0;
	}
}