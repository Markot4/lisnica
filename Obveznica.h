#pragma once
#include "VrijednosniPapir.h"
namespace markot4 {
    class Obveznica :
        public VrijednosniPapir
    {
        double nominalnaCijena;
        Obveznica(string ime);
        Obveznica(string ime, double nominalnaCijena) ;
    };
}