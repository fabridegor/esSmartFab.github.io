/* 

Data:
	
	Obiettivo:
			Caricare due vettori della stessa lunghezza, fare il profotto scalare di due vettori
	
	FDeg
*/

#include <iostream>
#define DIM 5
using namespace std;



void caricaVett(int vettore[],int d){ // funzione che carica vettore
	for (int i = 0 ; i<d; i++)
		cin >> vettore[i];
}

void stampaVett (int vettore[], int dimensione){ // funzione che stampa vettore
	
	cout << "Il tuo vettore e':\n" << "[ ";
	for (int i = 0 ; i<dimensione; i++)
		cout << vettore[i]<< " ";
	
	cout << "]" << endl;
}

int prodScalare(int v1[],int v2[], int v3[], int dimensione){
	
	int somma = 0;
	
	cout << "Faccio il proddotto scalare tra i due vettori...\n";
	
	for(int i = 0; i<dimensione; i++){
		v3[i] = v1[i]*v2[i];
		somma+=v3[i];
	}
	
	return somma;
}

	

int main(){
	int vett1[DIM];
	int vett2[DIM];
	int vettApp[DIM];
	
	cout << "Carica elementi nel vettore1\n";
	caricaVett(vett1,DIM);
	stampaVett(vett1,DIM);
	cout << "Carica elementi nel vettore2\n";
	caricaVett(vett2,DIM);
	stampaVett(vett2,DIM);
	
	
	cout << prodScalare(vett1,vett2,vettApp,DIM) << endl;
	stampaVett(vettApp,DIM);


	return 0;
}