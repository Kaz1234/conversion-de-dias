#include <cstdlib>
#include <iostream>

using namespace std;

//Declaracion de variables
int dias, horas, minutos, segundos;

//estos son nuevos comentarios para saber si git funciona

//Declaracion de funciones
void entrada(){
	cout<<"Ingrese un numero de dias: ";
	cin>>dias;
	system("cls");
}

void proceso(){
	horas=dias*24;
	minutos=horas*60;
	segundos=minutos*60;
}

void salida(){
	cout<<"La equivalencia en horas es: "<<horas<<endl;
	cout<<"La equivalencia en minutos es: "<<minutos<<endl;
	cout<<"La equivalencia en segundos es: "<<segundos<<endl;
}
int main(int argc, char** argv) {
	
	entrada();
	proceso();
	salida();
	
	return 0;
}
