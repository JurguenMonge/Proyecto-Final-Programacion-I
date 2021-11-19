/*
	Name: Proyecto final de programacion I
	Author: Jurguen Monge Rojas
	Date: 03/11/21 11:25
	Description: Este proyecto es de mi autoria, consiste en un pequeño sistema de registro
	y de un juego que se llama 4 en linea.
*/
#include "Estudiante.h"

//Inicio variables, en el constructor sin parametros
Estudiante::Estudiante()
{
	nombreCompleto = " ";
	cedula = 0;
	direccion = " ";
	telefono = " ";
	ocupacion = " ";
	correo = " ";
	estadoCivil = " ";
	grado = " ";
}
//Metodos set y get
void Estudiante::setCedula(int nCedula)
{
	cedula = nCedula;
}

void Estudiante::setOcupacion(std::string nOcupacion)
{
	ocupacion = nOcupacion;
}

void Estudiante::setEstadoCivil(std::string nEstadoCivil)
{
	estadoCivil = nEstadoCivil;
}

int Estudiante::getCedula()
{
	return cedula;
}

std::string Estudiante::getOcupacion()
{
	return ocupacion;
}

std::string Estudiante::getEstadoCivil()
{
	return estadoCivil;
}
//Metodo to String para desplegar los datos
std::string Estudiante::toString()
{
	std::stringstream s;
	s<<"Los datos del estudiante son: "<<std::endl;
	s<<"Nombre completo: "<<nombreCompleto<<std::endl;
	s<<"Cedula: "<<cedula<<std::endl;
	s<<"Direccion: "<<direccion<<std::endl;
	s<<"Telefono: "<<telefono<<std::endl;
	s<<"Ocupacion: "<<ocupacion<<std::endl;
	s<<"Correo electronico: "<<correo<<std::endl;
	s<<"Estado civil: "<<estadoCivil<<std::endl;
	s<<"Nivel educativo: "<<grado<<std::endl;
	return s.str();
}
//Destructor
Estudiante::~Estudiante()
{
}
