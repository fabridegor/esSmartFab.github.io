/* 

Data:
	
	Obiettivo:
		Dato un vettore di interi, scambiare il primo con l'ultimo, secondo con il penultimo ecc.. e visualizzare il vettore modificato

	
	FDeg
*/

#include <iostream>
#define MAX 5
using namespace std;
void scambia(int[], int);
void scambia1 (int&, int&);


void scambia(int vett[], int dim){
	int appoggio = 0;

	for (int i = 0 ; i<dim/2 ; i++){ // se continuo a scorrere tutto l'array mi riscambia i vettori ridandomi quello di partenza!
			
		scambia1(vett[i],vett[dim-i-1]); // chiamo una funzione scambia

			/*appoggio = vett[dim-i-1];
			vett[dim-i-1]=vett[i];
			vett[i] = appoggio;
			*/
	}
}

void scambia1(int& val1, int& val2){
	int appoggio;
	appoggio = val1;
	val1 = val2;
	val2 = appoggio;
}




void caricaVett(int vettore[],int d){ // funzione che carica vettore
	for (int i = 0 ; i<d; i++)
	if(!(cin >> vettore[i])){ // controllo che siano inseriti solo valori interi
			cin.clear(); // cancello flag errore di ingresso dati
			cin.ignore(1000,'\n'); // ignoro i caratteri non interi immessi in precedenza
			cerr << "Voglio solo numeri\n";
			cout << "Reinserisci valore in posizione: " << i << endl;
			i--; // ritorno alla posizione in cui mi devo inserire il dato
		}
	
}

void stampaVett (int vettore[], int dimensione){ // funzione che stampa vettore
	
	cout << "[";
	for (int i = 0 ; i<dimensione; i++)
		cout << vettore[i]<< " ";
	
	cout << "]" << endl;
}

int main(){
 	
 	int vettore1[MAX];

 	cout << "Inserirci vettore di 5 elementi:" << endl;
 	caricaVett(vettore1,MAX);
 	cout << "Il vettore e'..." << endl;
 	stampaVett(vettore1,MAX);
 	cout << "Inverto il vettore..." << endl;
 	scambia(vettore1,MAX);
 	stampaVett(vettore1,MAX);

	return 0;
}