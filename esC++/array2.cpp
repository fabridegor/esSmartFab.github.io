/*
27- 11-17
Obiettivo: 
	Def vettore di intri di dieci elementi, caricare il vettore, con un valore che per ogni posizione,é pari all'indice +2
*/
#include <iostream>
#define DIM 10
using namespace std;


int main(){
	
	int vett[DIM];
	
	cout << "Riempi il vettore" << endl;
	
	for (int i = 0 ; i < DIM; i++){
		cin >> vett[i];
	}
	
	for (int i = 0; i<DIM; i++){
		vett [i]=i+2;
		cout << vett[i] << " ";
	}
	
	cout << endl;
	
	return 0;
}