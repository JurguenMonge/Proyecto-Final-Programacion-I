#ifndef ABONO_H
#define ABONO_H
#include <iostream>
#include <sstream>
/*
	Esta clase abono lo que hace es almacenar el monto del abono y la cedula del estudiante
	que luego se registra en un archivo txt. 
*/
class Abono
{
	public:
		Abono();
		
		void setCedula(int nCedula);
		void setMonto(int nMonto);
		
		std::string toString();
	private:
		int cedula;
		int monto;
};

#endif
