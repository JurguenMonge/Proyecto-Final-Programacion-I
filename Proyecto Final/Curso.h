/*
	Name: Proyecto final de programacion I
	Author: Jurguen Monge Rojas
	Date: 03/11/21 11:25
	Description: Este proyecto es de mi autoria, consiste en un pequeño sistema de registro
	y de un juego que se llama 4 en linea.
*/
#ifndef CURSO_H
#define CURSO_H
#include <iostream>
#include <sstream>
/*
	Esta clase curso almacena datos de un curso para asi luego pasarlos al registro en un archivo txt.
*/
class Curso
{
	public:
		Curso();
		
		void setCarrera(std::string nCarrera);
		void setNombre(std::string nNombre);
		void setCupo(int nCupo);
		void setDia(std::string nDia);
		void setHora(std::string nHora);
		void setPrecio(int nPrecio);
		void setFechaInicio(std::string nFechaInicio);
		void setFechaFinalizacion(std::string nFechaFinalizacion);
		void setCodigo(std::string nCodigo);
		
		std::string getCodigo();
		std::string getCarrera();
		std::string getNombre();
		int getCupo();
		std::string getDia();
		std::string getHora();
		int getPrecio();
		std::string getFechaInicio();
		std::string getFechaFinalizacion();
		
		std::string toString();
	
		~Curso();
	private:
		std::string carrera;
		std::string nombre;
		int cupo;
		std::string dia;
		std::string hora;
		int precio;
		std::string fechaInicio;
		std::string fechaFinalizacion;
		std::string codigo;
};

#endif
