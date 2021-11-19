/*
	Name: Proyecto final de programacion I
	Author: Jurguen Monge Rojas
	Date: 03/11/21 11:25
	Description: Este proyecto es de mi autoria, consiste en un pequeño sistema de registro
	y de un juego que se llama 4 en linea.
*/
#include <iostream>
#include <sstream>
#include <time.h>
#include <math.h>
#include <string>
/*
	Esta clase es la del juego solo tiene dos metodos, los cuales son para jugar contra la maquina y jugar contra jugador
*/
struct Juego{
	
		Juego();
		void jugarMaquina();
		void jugarJvJ(std::string jugador1,std::string jugador2);
};
