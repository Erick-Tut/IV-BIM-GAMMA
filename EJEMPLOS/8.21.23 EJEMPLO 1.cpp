#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	//para almacenar las filas y columnas
	int columna, fila;
	
	cout<<"Ingrese la cantidad de columnas a usar: ";
	
	cin>> columna;
	
	cout<<"Ingrese la cantidad de filas a usar: ";
	
	cin>> fila;
	
	//declaramos la matriz
	int mat[columna][fila];
	
	for(int i = 0; i < columna; i++){
		for(int j = 0; j < fila; j++){
		
		cout<< "Ingrese un numero para almacenar en la posicion " << i + 1<< ", " << j + 1 << ": ";
		
		cin>> mat[i][j];
		
    	}	
	}
	
	//suma de columnas
	
	int maxsuma = 0, columnamaxima = 0;
	
	for(int k = 0; k < columna; k++ ){
		
		int sumacolumna = 0;
		
		for(int l = 0; l < fila; l++ ){
			
			sumacolumna = sumacolumna + mat[l][k];
		
		}
		
		if(sumacolumna>maxsuma){
			
			maxsuma = sumacolumna;
			columnamaxima = k;
			
		}
		
	}
	
	//imprimir 
	
	cout<< "\n Imprimiendo matriz...\n";
	
	for(int i = 0; i < columna; i++){
		for(int j = 0; j < fila; j++){
		
		cout<< mat[i][j] << " ";
		
    	}	
    	
    	cout<<"\n";
	}
	
	cout<< "La columna " << columnamaxima + 1<< " tiene una suma de " << maxsuma;
	
	return 0;
	
}
