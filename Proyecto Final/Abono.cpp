#include "Abono.h"

Abono::Abono()
{
	cedula = 000000;
	monto = 0;
}

void Abono::setCedula(int nCedula)
{
	cedula = nCedula;
}

void Abono::setMonto(int nMonto)
{
	monto = nMonto;
}

std::string Abono::toString()
{
	std::stringstream s;
	s<<cedula<<" Abono: "<<monto<<std::endl;
	return s.str();
}
