#include<iostream>
#include<conio.h>

using namespace std;

struct Animal{
	char nombre[20];
	int edad;
	struct Animal *ptr;
}animal1, animal2, *inicio;

int main(int argc, char** argv)
{
	inicio=&animal1;
	inicio->ptr=&animal2;
	
	cout<<"Edad de animal 1: ";
	cin>>inicio->edad;
	cout<<"Nombre de animal 1: ";
	fflush(stdin);
	cin.getline(inicio->nombre, 20, '\n');
	
	cout<<"Edad de animal 2: ";
	cin>>inicio->ptr->edad;
	cout<<"Nombre de animal 2: ";
	fflush(stdin);
	cin.getline(inicio->ptr->nombre, 20, '\n');
	
	int total_animales=10;
	
	cout<<endl<<"Direccion inicio: "<<&inicio<<endl;
	cout<<"Direccion animal1: "<<&animal1<<endl;
	cout<<"Direccion animal2: "<<&animal2<<endl;
	cout<<"Edad 1:"<<inicio->edad<<endl;
	cout<<"Nombre 1:"<<inicio->nombre<<endl;
	cout<<"Edad 2:"<<inicio->ptr->edad<<endl;
	cout<<"Nombre 2:"<<inicio->ptr->nombre<<endl;
	
	cin.get();
	return 0;
}
