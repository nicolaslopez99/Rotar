#include<iostream>
#include "arbol.h"

using namespace std;

main(){ ARBOL a; NODO *p;  int i;

cout<<"Número a insertar? (fin =999)..."<<endl;
cin>>i;

while(i!=999){
    if (a.ins_arbol(i)==-1) cout<<"Ya existe"<< endl;
    cout<<"Número a insertar? (fin =999)..."<<endl;
    cin>>i;}
	cout<<"Número a retirar (fin=999)"<<endl;	
	cin>>i;

while(i!=999){
       if (a.retira_arbol(i)==-1)cout<<"No existe"<<endl;
       cout<<"Número a retirar (fin=999)"<<endl;
       cin>>i;}

a.inorden(a.raiz_arbol()); 
cout<<"___________"<<endl;
getch();
a.preorden(a.raiz_arbol()); 
cout<<"__________"<<endl;
getch();
a.posorden(a.raiz_arbol()); 
cout<<"__________"<<endl;
getch();

/*
a.ins_arbol(100);
a.ins_arbol(150);
a.ins_arbol(180);
a.ins_arbol(50);

a.buscar_arbol(50,) 
*/
}

