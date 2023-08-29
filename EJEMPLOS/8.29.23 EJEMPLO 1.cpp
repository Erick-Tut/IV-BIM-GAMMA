#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	char palabra[20];
	char palabra2[] = "Hola";
	
	cout << "Ingrese una cadena: ";
	
	//cin >> palabra[]
	
	gets(palabra);
	
	//cin.getline(palabra,5,'\n');
	
	cout<< "\n" << palabra;
	
	//**STRLEN**
	
	int longitud = strlen(palabra);
	
	cout << "\nla cantidad de caracteres que posee la palabra: " << longitud;
	
	return 0;
	getch();
}
