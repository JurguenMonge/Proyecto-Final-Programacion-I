/*
	Name: Proyecto final de programacion I
	Author: Jurguen Monge Rojas
	Date: 03/11/21 11:25
	Description: Este proyecto es de mi autoria, consiste en un pequeño sistema de registro
	y de un juego que se llama 4 en linea.
*/
#include <fstream>
#include <iostream>
#include <string>
/*
	Esta clase Archivo tiene todos los metodos de los archivos de texto que se van usar para
	poder almacenar distintos registros, los metodos son de escribir en un archivo y tambien de
	poder ver lo que hay dentro de ellos, ademas de validaciones para saber si existe algo dentro del
	archivo txt.
*/
struct Archivo{
	
	//Constructor
	Archivo();
	
	//Metodos
	void escribirProfesor(std::string s);
	std::string leerProfesor();
	
	void escribirEstudiante(std::string s);
	std::string leerEstudiante();
	
	void escribirCurso(std::string s);
	std::string leerCurso();
	
	void escribirAdmin(std::string s);
	std::string leerAdmin();
	
	void escribirEstudianteaCurso(std::string codigo,std::string s);
	std::string leerEstudianteaCurso(std::string codigo);
	
	void escribirProfesoraCurso(std::string codigo,std::string s);
	std::string leerProfesoraCurso(std::string codigo);
	
	void registrarAbono(std::string s);
	std::string mostrarEstado();
	
	int validarAcceso(std::string usuario, std::string contra);
	int validarCodigo(std::string codigo);
	int validarEstudiante(std::string estudiante);
	int validarProfesor(std::string profesor);
};
