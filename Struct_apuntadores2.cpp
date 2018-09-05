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
	
	struct Animal animal3;
	inicio->ptr->ptr=&animal3;
	//rellenamos a animal 3
	
	cout<<"Edad de animal 3: ";
	cin>>inicio->ptr->ptr->edad;
	cout<<"Nombre de animal 3: ";
	fflush(stdin);
	cin.getline(inicio->ptr->ptr->nombre, 20, '\n');
	
	struct Animal animal4;
	inicio->ptr->ptr->ptr=&animal4;
	//rellenamos a animal 4
	
	cout<<"Edad de animal 4: ";
	cin>>inicio->ptr->ptr->ptr->edad;
	cout<<"Nombre de animal 4: ";
	fflush(stdin);
	cin.getline(inicio->ptr->ptr->ptr->nombre, 20, '\n');
	
	cout<<endl<<"Direccion inicio: "<<&inicio<<endl;
	cout<<"Direccion animal1: "<<&animal1<<endl;
	cout<<"Direccion animal2: "<<&animal2<<endl;
	cout<<"Direccion animal3: "<<&animal3<<endl;
	cout<<"Direccion animal4: "<<&animal4<<endl;
	cout<<"Edad 1: "<<inicio->edad<<endl;
	cout<<"Nombre 1: "<<inicio->nombre<<endl;
	cout<<"Edad 2: "<<inicio->ptr->edad<<endl;
	cout<<"Nombre 2: "<<inicio->ptr->nombre<<endl;
	cout<<"Edad 3: "<<inicio->ptr->ptr->edad<<endl;
	cout<<"Nombre 3: "<<inicio->ptr->ptr->nombre<<endl;
	cout<<"Edad 4: "<<inicio->ptr->ptr->ptr->edad<<endl;
	cout<<"Nombre 4: "<<inicio->ptr->ptr->ptr->nombre<<endl;
	
	cin.get();
	return 0;
}
