/*
	Name: Proyecto final de programacion I
	Author: Jurguen Monge Rojas
	Date: 03/11/21 11:25
	Description: Este proyecto es de mi autoria, consiste en un pequeño sistema de registro
	y de un juego que se llama 4 en linea.
*/
#include "Juego.h"

Juego::Juego()
{

}

void Juego::jugarMaquina(){
	/*
	  Este metodo es todo el juego contra la maquina
	  lo que hace es pedir donde se quiere jugar, valida el gandor y ademas hace jugar a la 
	  maquina automaticamente
	*/
	bool ganar = false; //Variable que permite saber cuando alguien gano
	char matriz[6][7] = {}; 
			for(int i = 0; i < 6; i++){
				for(int j = 0; j < 7; j++){	
	        		matriz[i][j] = ' ';
	    		}
	    	}
	    	std::cout<<"\t\t\t\tBienvenido al juego de 4 en linea!!"<<std::endl<<std::endl;
	    	for(int i = 0; i < 6; i++){
				for(int j = 0; j < 7; j++){	
					std::cout<<"["<<matriz[i][j]<<"]";
				}
				std::cout<<std::endl;
	    	} 
			
			while(ganar == false){
					
			int fila = 0, columna = 0, intento = 0; //declaro dos variables para almacenar las posiciones dadas por el usuario
			                                        
			while(intento == 0){
						std::cout<<"\n[0][1][2][3][4][5][6]"<<std::endl;	
			std::cout<<"Ingrese la columna donde desea colocar su movimiento: "<<std::endl; 
			std::cin>>columna;
			
			if(matriz[5][columna] != 'O' && matriz[5][columna] != 'X' && columna < 7){ // Se crea un metodo que valide que la posicion elegida por el usuario es una que no este ya marcada, eso con todas las posibles posiciones.
	
				matriz[5][columna] = 'O';
				intento = 1;
			}
			else  if(matriz[4][columna] != 'O' && matriz[4][columna] != 'X' && columna < 7){
				
				matriz[4][columna] = 'O';
				intento = 1;
				
			}else if(matriz[3][columna] != 'O' && matriz[3][columna] != 'X' && columna < 7){
				
				matriz[3][columna] = 'O';
				intento = 1;
				
			}else if(matriz[2][columna] != 'O' && matriz[2][columna] != 'X' && columna < 7){
				
				matriz[2][columna] = 'O';
				intento = 1;
				
			}else if(matriz[1][columna] != 'O' && matriz[1][columna] != 'X' && columna < 7){
				
				matriz[1][columna] = 'O';
				intento = 1;
				
			}else if(matriz[0][columna] != 'O' && matriz[0][columna] != 'X' && columna < 7){
				
				matriz[0][columna] = 'O';
				intento = 1;
				
			}else if(matriz[0][columna] == 'O' || matriz[0][columna] == 'X' && columna > 7){
		
		 		std::cout<<"Posicion no valida, intente nuevamente!"<<std::endl;
			}
		}
			//toString o muestra la matriz
			for(int i = 0; i < 6; i++){ 
				for(int j = 0; j<7; j++){
					std::cout<<"["<<matriz[i][j]<<"]";
				}
				std::cout<<std::endl;
	    	}
	    	
	    	//Valida un ganador
	    	for(int i = 0; i < 6; i++){ 	
				for(int j = 0; j < 7; j++){	
			if(matriz[i][j] == 'X' && matriz[i + 1][j] == 'X' && matriz[i + 2][j] == 'X' && matriz[i + 3][j] == 'X'){
				ganar = true;
				
				std::cout<<"\nLO SENTIMOS TE HA GANADO LA MAQUINA!!"<<std::endl;
			}else
			
			if(matriz[i][j] == 'O' && matriz[i + 1][j] == 'O' && matriz[i + 2][j] == 'O' && matriz[i + 3][j] == 'O'){
				ganar = true;
				
				std::cout<<"\nFELICIDADES HAS GANADO!"<<std::endl;
				
			}else
			
			if(matriz[i][j] == 'X' && matriz[i][j + 1] == 'X' && matriz[i][j + 2] == 'X' && matriz[i][j + 3] == 'X'){
				ganar = true;
				
				std::cout<<"\nLO SENTIMOS TE HA GANADO LA MAQUINA!!"<<std::endl;
				
			}else
			
			if(matriz[i][j] == 'O' && matriz[i][j + 1] == 'O' && matriz[i][j + 2] == 'O' && matriz[i][j + 3] == 'O'){
				ganar = true;
				
				std::cout<<"\nFELICIDADES HAS GANADO!"<<std::endl;
				
			}else
			
			if(matriz[i][j] == 'X' && matriz[i + 1][j - 1] == 'X' && matriz[i + 2][j - 2] == 'X' && matriz[i + 3][j - 3] == 'X'){
				ganar = true;
				
				std::cout<<"\nLO SENTIMOS TE HA GANADO LA MAQUINA!!"<<std::endl;
				
			}else
			
			if(matriz[i][j] == 'X' && matriz[i + 1][j + 1] == 'X' && matriz[i + 2][j + 2] == 'X' && matriz[i + 3][j + 3] == 'X'){
				ganar = true;
				
				std::cout<<"\nLO SENTIMOS TE HA GANADO LA MAQUINA!!"<<std::endl;
				
			}else
			
			if(matriz[i][j] == 'O' && matriz[i + 1][j - 1] == 'O' && matriz[i + 2][j - 2] == 'O' && matriz[i + 3][j - 3] == 'O'){
				ganar = true;
				
				std::cout<<"\nFELICIDADES HAS GANADO!"<<std::endl;
				
			}else
			
			if(matriz[i][j] == 'O' && matriz[i + 1][j + 1] == 'O' && matriz[i + 2][j + 2] == 'O' && matriz[i + 3][j + 3] == 'O'){
				ganar = true;
				
				std::cout<<"\nFELICIDADES HAS GANADO!"<<std::endl;
			}
		}
	    } 
	    //Juega la maquina
	    if(ganar == false){
	        std::cout<<"ES EL TURNO DE LA MAQUINA"<<std::endl;
	        int valor = 0;
	        for(int i = 0; i < 6; i++){	
				for(int j = 0; j < 7; j++){	
			if(i < 6 && matriz[i][j] == 'X' && matriz[i - 1][j]!= 'O' && matriz[i - 1][j]!= 'X' && valor == 0 && i > 0){	
				matriz[i - 1][j] = 'X';
				valor = 1;	
			}else if(j > 0 && matriz[i][j] == 'X' && matriz[i][j - 1] == ' ' && matriz[i + 1][j - 1] != ' ' && valor == 0){
				matriz[i][j - 1] = 'X';
				valor = 1;	
			}else if(j > 0 && matriz[i][j] == 'X' && matriz[i + 1][j + 1]== ' ' && matriz[i + 2][j + 1] != ' '&& valor == 0){
				matriz[i + 1][j+1] = 'X';
				valor = 1;	
			}else if(j > 0 && matriz[i][j] == 'X' && matriz[i + 1][j - 1] == ' ' && matriz[i + 2][j - 1] != ' ' && valor == 0){
				
				matriz[i + 1][j - 1] = 'X';
				valor = 1;
				
			}else
			
			if(i < 6 && matriz[i][j] == 'O' && matriz[i - 1][j]!= 'X' && matriz[i - 1][j]!= 'O' && valor == 0 && i > 0){
				
				matriz[i - 1][j] = 'X';
				valor = 1;
				
			}else
			
			if(j < 7 && matriz[i][j] == 'O' && matriz[i][j + 1]== ' ' && matriz[i + 1][j + 1] != ' ' && valor == 0){
				
				matriz[i][j + 1] = 'X';
				valor = 1;
			}
		}
	    }
	    //to String
	        for(int i = 0; i < 6; i++){	
				for(int j = 0; j<7; j++){			
					std::cout<<"["<<matriz[i][j]<<"]";
				}
			std::cout<<std::endl;
		}
	    
	    	for(int i = 0; i < 6; i++){
	    		                               // Se recorre la matriz para validar que la maquina ponga su signo en casillas validas, al igual como se validaron para el jugador.
				for(int j = 0; j < 7; j++){
					
			if(matriz[i][j] == 'X' && matriz[i + 1][j] == 'X' && matriz[i + 2][j] == 'X' && matriz[i + 3][j] == 'X'){
				ganar = true;
				
				std::cout<<"\nLO SENTIMOS TE HA GANADO LA MAQUINA!!"<<std::endl;
				
			}else
			
			if(matriz[i][j] == 'O' && matriz[i + 1][j] == 'O' && matriz[i + 2][j] == 'O' && matriz[i + 3][j] == 'O'){
				ganar = true;
				
				std::cout<<"\nFELICIDADES HAS GANADO!"<<std::endl;
				
			}else
			
			if(matriz[i][j] == 'X' && matriz[i][j + 1] == 'X' && matriz[i][j + 2] == 'X' && matriz[i][j + 3] == 'X'){
				ganar = true;
				
				std::cout<<"\nLO SENTIMOS TE HA GANADO LA MAQUINA!!"<<std::endl;
				
			}else
			
			if(matriz[i][j] == 'O' && matriz[i][j + 1] == 'O' && matriz[i][j + 2] == 'O' && matriz[i][j + 3] == 'O'){
				ganar = true;
				
				std::cout<<"\nFELICIDADES HAS GANADO!"<<std::endl;
				
			}else
			
			if(matriz[i][j] == 'X' && matriz[i + 1][j - 1] == 'X' && matriz[i + 2][j - 2] == 'X' && matriz[i + 3][j - 3] == 'X'){
				ganar = true;
				
				std::cout<<"\nLO SENTIMOS TE HA GANADO LA MAQUINA!!"<<std::endl;
				
			}else
			
			if(matriz[i][j] == 'X' && matriz[i + 1][j + 1] == 'X' && matriz[i + 2][j + 2] == 'X' && matriz[i + 3][j + 3] == 'X'){
				ganar = true;
				
				std::cout<<"\nLO SENTIMOS TE HA GANADO LA MAQUINA!!"<<std::endl;
				
			}else
			
			if(matriz[i][j] == 'O' && matriz[i + 1][j - 1] == 'O' && matriz[i + 2][j - 2] == 'O' && matriz[i + 3][j - 3] == 'O'){
				ganar = true;
				
				std::cout<<"\nFELICIDADES HAS GANADO!"<<std::endl;
				
			}else
			
			if(matriz[i][j] == 'O' && matriz[i + 1][j + 1] == 'O' && matriz[i + 2][j + 2] == 'O' && matriz[i + 3][j + 3] == 'O'){
				ganar = true;
				
				std::cout<<"\nFELICIDADES HAS GANADO!"<<std::endl;
			}
		}
	    } 
			} 
		}			
}

void Juego::jugarJvJ(std::string jugador1, std::string jugador2){
	/*
		Este es un metodo que permite jugar un jugador contra otro, le pide donde desea jugar y valida si gana
		si no es asi permite que le otro jugador juegue hasta que se cumpla que haya un ganador.
	*/
	//jugador.at lo que hace es agarrar la inicial del nombre de los jugadores
	char j1=jugador1.at(0);
	char j2=jugador2.at(0);
	bool ganar = false;//Declaro variable para validar ganador
	char matriz[6][7] = {};//declaro la matriz con sus dimensiones.
		for(int i = 0; i < 6; i++){
			for(int j = 0; j < 7; j++){
	        	matriz[i][j] = ' ';
	    	}
	   	}
	   	std::cout<<"\t\t\t\tBienvenido al juego de 4 en linea!!"<<std::endl<<std::endl;
	    for(int i = 0; i < 6; i++){
			for(int j = 0; j < 7; j++){	
				std::cout<<"["<<matriz[i][j]<<"]";
			}
			std::cout<<std::endl;
	    } 
	    std::cout<<"Ingrese la columna donde desea dejar caer su ficha"<<std::endl;
	    while(ganar == false){
	    	
	    	int fila = 0, columna = 0, intento = 0;
	    	
	    while(intento == 0){
			std::cout<<"\n[0][1][2][3][4][5][6]"<<std::endl;	
			std::cout<<"Ingrese la columna donde desea colocar su movimiento "<<jugador1<<": "<<std::endl; 			
			std::cin>>columna;
			
			if(matriz[5][columna] != j1 && matriz[5][columna] != j2 && columna < 7){ // Se crea un metodo que valide que la posicion elegida por el usuario es una que no este ya marcada, eso con todas las posibles posiciones.
	
				matriz[5][columna] = j1;
				intento = 1;
			}
			else  if(matriz[4][columna] != j1 && matriz[4][columna] != j2 && columna < 7){
				
				matriz[4][columna] = j1;
				intento = 1;
				
			}else if(matriz[3][columna] != j1 && matriz[3][columna] != j2 && columna < 7){
				
				matriz[3][columna] = j1;
				intento = 1;
				
			}else if(matriz[2][columna] != j1 && matriz[2][columna] != j2 && columna < 7){
				
				matriz[2][columna] = j1;
				intento = 1;
				
			}else if(matriz[1][columna] != j1 && matriz[1][columna] != j2 && columna < 7){
				
				matriz[1][columna] = j1;
				intento = 1;
				
			}else if(matriz[0][columna] != j1 && matriz[0][columna] != j2 && columna < 7){
				
				matriz[0][columna] = j1;
				intento = 1;
				
			}else if(matriz[0][columna] == j1 || matriz[0][columna] == j2 && columna > 7){
		
		 		std::cout<<"Posicion no valida, intente nuevamente!"<<std::endl;
			}
		}	
		//toString
	    for(int i = 0; i < 6; i++){ 
			for(int j = 0; j<7; j++){
				std::cout<<"["<<matriz[i][j]<<"]";
			}
			std::cout<<std::endl;
	    }	
	    	//Validar gandor
	    	for(int i = 0; i < 6; i++){ 
	    		
				for(int j = 0; j < 7; j++){
					
			if(matriz[i][j] == j2 && matriz[i + 1][j] == j2 && matriz[i + 2][j] == j2 && matriz[i + 3][j] == j2){
				ganar = true;
				
				std::cout<<"\nGano " <<jugador2<<"!!"<<std::endl;
			}else
			
			if(matriz[i][j] == j1 && matriz[i + 1][j] == j1 && matriz[i + 2][j] == j1 && matriz[i + 3][j] == j1){
				ganar = true;
				
				std::cout<<"\nGano "<<jugador1<<"!!"<<std::endl;
				
			}else
			
			if(matriz[i][j] == j2 && matriz[i][j + 1] == j2 && matriz[i][j + 2] == j2 && matriz[i][j + 3] == j2){
				ganar = true;
				
				std::cout<<"\nGano "<<jugador2<<"!!"<<std::endl;
				
			}else
			
			if(matriz[i][j] == j1 && matriz[i][j + 1] == j1 && matriz[i][j + 2] == j1 && matriz[i][j + 3] == j1){
				ganar = true;
				
				std::cout<<"\nGano "<<jugador1<<"!!"<<std::endl;
				
			}else
			
			if(matriz[i][j] == j2 && matriz[i + 1][j - 1] == j2 && matriz[i + 2][j - 2] == j2 && matriz[i + 3][j - 3] == j2){
				ganar = true;
				
				std::cout<<"\nGano "<<jugador2<<"!!"<<std::endl;
				
			}else
			
			if(matriz[i][j] == j2 && matriz[i + 1][j + 1] == j2 && matriz[i + 2][j + 2] == j2 && matriz[i + 3][j + 3] == j2){
				ganar = true;
				
				std::cout<<"\nGano "<<jugador2<<"!!"<<std::endl;
				
			}else
			
			if(matriz[i][j] == j1 && matriz[i + 1][j - 1] == j1 && matriz[i + 2][j - 2] == j1 && matriz[i + 3][j - 3] == j1){
				ganar = true;
				
				std::cout<<"\nGano "<<jugador1<<"!!"<<std::endl;
				
			}else
			
			if(matriz[i][j] == j1 && matriz[i + 1][j + 1] == j1 && matriz[i + 2][j + 2] == j1 && matriz[i + 3][j + 3] == j1){
				ganar = true;
				
				std::cout<<"\nGano "<<jugador1<<"!!"<<std::endl;
			}
		}
	    }
	    //Permite jugar al segundo jugador
		if(ganar == false){
			std::cout<<"\n[0][1][2][3][4][5][6]"<<std::endl;
			std::cout<<"Ingrese la columna donde desea colocar su movimiento "<<jugador2<<": "<<std::endl; 
			std::cin>>columna;
			
			if(matriz[5][columna] != j2 && matriz[5][columna] != j1 && columna < 7){ // Se crea un metodo que valide que la posicion elegida por el usuario es una que no este ya marcada, eso con todas las posibles posiciones.
	
				matriz[5][columna] = j2;
				intento = 1;
			}
			else  if(matriz[4][columna] != j2 && matriz[4][columna] != j1 && columna < 7){
				
				matriz[4][columna] = j2;
				intento = 1;
				
			}else if(matriz[3][columna] != j2 && matriz[3][columna] != j1 && columna < 7){
				
				matriz[3][columna] = j2;
				intento = 1;
				
			}else if(matriz[2][columna] != j2 && matriz[2][columna] != j1 && columna < 7){
				
				matriz[2][columna] = j2;
				intento = 1;
				
			}else if(matriz[1][columna] != j2 && matriz[1][columna] != j1 && columna < 7){
				
				matriz[1][columna] = j2;
				intento = 1;
				
			}else if(matriz[0][columna] != j2 && matriz[0][columna] != j1 && columna < 7){
				
				matriz[0][columna] = j2;
				intento = 1;
				
			}else if(matriz[0][columna] == j2 || matriz[0][columna] == j1 && columna > 7){
		
		 		std::cout<<"Posicion no valida, intente nuevamente!"<<std::endl;
			}
		}	
		//toString 
	    for(int i = 0; i < 6; i++){ 
			for(int j = 0; j<7; j++){
				std::cout<<"["<<matriz[i][j]<<"]";
			}
			std::cout<<std::endl;
	    }	
	    	//Valida un ganador despues de juega el segundo jugador
	    	for(int i = 0; i < 6; i++){ 
	    		
				for(int j = 0; j < 7; j++){
					
			if(matriz[i][j] == j2 && matriz[i + 1][j] == j2 && matriz[i + 2][j] == j2 && matriz[i + 3][j] == j2){
				ganar = true;
				
				std::cout<<"\nGano "<<jugador2<<"!!"<<std::endl;
			}else
			
			if(matriz[i][j] == j1 && matriz[i + 1][j] == j1 && matriz[i + 2][j] == j1 && matriz[i + 3][j] == j1){
				ganar = true;
				
				std::cout<<"\nGano "<<jugador1<<"!!"<<std::endl;
				
			}else
			
			if(matriz[i][j] == j2 && matriz[i][j + 1] == j2 && matriz[i][j + 2] == j2 && matriz[i][j + 3] == j2){
				ganar = true;
				
				std::cout<<"\nGano "<<jugador2<<"!!"<<std::endl;
				
			}else
			
			if(matriz[i][j] == j1 && matriz[i][j + 1] == j1 && matriz[i][j + 2] == j1 && matriz[i][j + 3] == j1){
				ganar = true;
				
				std::cout<<"\nGano "<<jugador1<<"!!"<<std::endl;
				
			}else
			
			if(matriz[i][j] == j2 && matriz[i + 1][j - 1] == j2 && matriz[i + 2][j - 2] == j2 && matriz[i + 3][j - 3] == j2){
				ganar = true;
				
				std::cout<<"\nGano "<<jugador2<<"!!"<<std::endl;
				
			}else
			
			if(matriz[i][j] == j2 && matriz[i + 1][j + 1] == j2 && matriz[i + 2][j + 2] == j2 && matriz[i + 3][j + 3] == j2){
				ganar = true;
				
				std::cout<<"\nGano "<<jugador2<<"!!"<<std::endl;
				
			}else
			
			if(matriz[i][j] == j1 && matriz[i + 1][j - 1] == j1 && matriz[i + 2][j - 2] == j1 && matriz[i + 3][j - 3] == j1){
				ganar = true;
				
				std::cout<<"\nGano "<<jugador1<<"!!"<<std::endl;
				
			}else
			
			if(matriz[i][j] == j1 && matriz[i + 1][j + 1] == j1 && matriz[i + 2][j + 2] == j1 && matriz[i + 3][j + 3] == j1){
				ganar = true;
				
				std::cout<<"\nGano "<<jugador1<<"!!"<<std::endl;
			}
		}
	    }	
		}
		//Cierra hasta que haya un ganador 		        
}
			


