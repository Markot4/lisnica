#pragma once
#include <iostream>
#include "VrijednosniPapir.h"
using namespace std;
namespace markot4 {
	class LisnicaClass
	{
		void dodajVrijednosniPapir(VrijednosniPapir vp);
		void izbaciVrijednosniPapir(string oznaka);
		int promjenaKolicine(int promjena, string oznaka); // vrati novu kolicinu
	};
}

