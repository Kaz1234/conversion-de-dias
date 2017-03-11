#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int valor;
	int array[valor];
	cout<<"ingrese el valor del arreglo: ";
	cin>>valor;
	int i, j, aux;

	for(j=0;j<valor;j++){	
	cout<<"Ingrese valor a comparar: ";
	cin>>array[j];	
			if(array[j] > array[i]){
			
				aux = array[j];
				array[j] = array[i];
				array[i] = aux;
			}

	}
	
	
	
	cout<<"\nNumeros de forma Descendente: ";
	for(j=valor-1;j>=0;j--){
		cout<<array[j]<<" ";
	}
	
	getch();
	return 0;
}
