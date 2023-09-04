#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	
	//declarar las variables
	
	int a[5];
	
	int dato;
	
	char band = 'F';
	
	//solicitar datos
	
	for(int i = 0; i < 5; i++){
		
		cout << "ingrese un numero: ";
		
		cin >> a[i];
		
	}
	
	//solicitar que ingrese el numero a buscar
	
	cout << "\nIngrese el numero a buscar: ";
	cin >> dato;
	
	//algoritmo de busqueda secuencial
	
	int j;
	
	while((band == 'F')&&(j < 5)){
		
		if(a[j] == dato){
			
			band = 'V';
			
			
		}
		
		j++;
			
	}
	
	if(band == 'F'){
		
		cout << "\nEL NUMERO A BUSCAR NO EXISTE EN EL VECTOR";
		
	}
	else if(band == 'V'){
		
		cout << "El numero " << dato << " Fue encontrado en la posicion " << j;
	}

	getch();
	return 0;
}
