#include <iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo { 
       int dato;
       Nodo*der;
       Nodo*izq;
};
//Prototipos
void menu();
Nodo*crearNodo(int);
void insertarNodo(Nodo*&,int);

Nodo*arbol=NULL;

int main(){
	menu();
	getch();
	return 0;
}
//Funcion de menu
void menu(){
	int dato, opcion;
	do{
		cout<<"\.:MENU:."<<endl;
		cout<<"1. Insertar un nuevo nodo"<<endl;
		cout<<"2. Salir"<<endl;
		cin>>opcion;
		
		switch(opcion){
			case 1:cout<<"\Digite un numero:";
			cin>>dato;
			insertarNodo(arbol,dato);//Insertamos un nuevo 
nodo
			cout<<"\n";
			system("pause");
			break;
		}
		system("cls");
	}
	while(opcion !=2);
}
//Funcion para crear nuevo nodo
 Nodo*crearNodo(int n){
 	Nodo*nuevonodo=new Nodo();
 	nuevonodo->dato=n;
 	nuevonodo->der=NULL;
 	nuevonodo->izq=NULL;
 	return nuevonodo;
 }
 //Funcion para insertar elementos en el arbol
 void insertarNodo(Nodo*&arbol,int n){
    if (arbol==NULL){//Si el arbol esta vacio
 		Nodo*nuevonodo=crearNodo(n);
 		arbol=nuevonodo;
 	}
 	else{//Si el arbol tiene un nodo o mas
 		int valorRaiz=arbol->dato;//Obtenemos el valor de la 
raiz
 		if(n<valorRaiz){//Si el elemto es menor a la raiz, 
insertamos en izq
 			insertarNodo(arbol->izq,n);
 		}
	    else {//Si el elemnto es mayor a la raiz, insertamos en der
		 insertarNodo(arbol->der,n);
 	   }
     }
 }
