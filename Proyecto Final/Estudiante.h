/*
	Name: Proyecto final de programacion I
	Author: Jurguen Monge Rojas
	Date: 03/11/21 11:25
	Description: Este proyecto es de mi autoria, consiste en un pequeño sistema de registro
	y de un juego que se llama 4 en linea.
*/
#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include "Profesor.h"
/*
	La clase estudiante hereda de profesor porque comparten varios atributos, esta clase almacena estudiantes 
	que luego son registrados en un archivo de texto.
*/
//Hereda atributos y metodos de la clase profesor
class Estudiante:public Profesor
{
	public:
		//Constructor sin parametros
		Estudiante();
		//Metodos set and get
		void setCedula(int nCedula);
		void setOcupacion(std::string nOcupacion);
		void setEstadoCivil(std::string nEstadoCivil);
		
		int getCedula();
		std::string getOcupacion();
		std::string getEstadoCivil();
		//Metodo toString para mostrar datos
		std::string toString();
		
		~Estudiante();
	private:
		//Atributos, los comentados son heredados de la clase profesor
		//std::string nombre;
		//std::string apellidos;
		int cedula;
		//std::string direccion;
		//std::string telefono;
		std::string ocupacion;
		//std::string correo;
		std::string estadoCivil;
		//std::string grado;
};

#endif
