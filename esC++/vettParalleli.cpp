/* 

Data:
	
	Obiettivo:
		Considerare due array di interi, contenenti rispettivamente, la matricola e il voto di analisi I. Visualizzare la classifica della valutazione
		dallo studente con voto piu alto a quello piu basso.
		
	FDeg
*/

#include <iostream>
#define MAX 5
using namespace std;



/* 
utilizzo algoritmo ingenuo (bubble sort) per ordinare i voti 
*/

void ordinamentoVoti (int vettoreMat[],int vettoreVoti[], int DIM){
	
	cout << "Lo Ordino (crescente)..." << endl;
	int app = 0;
	int app2 = 0;
	for (int i = 0; i<DIM-1; i++){ // scorro array con primo indice fino a posizione DIM-1
		for (int j = i+1 ; j<DIM; j++) // scorro array con secondo indice che avra la posizione i+1
			if (vettoreVoti[i]<vettoreVoti[j]){ // scambio se elemento in posizione i é maggiore dell'elemento in posizione j
				app = vettoreVoti[j]; // variabile di appoggio
				vettoreVoti [j] = vettoreVoti[i];
				vettoreVoti [i] = app;
				app2 = vettoreMat[j];
				vettoreMat[j] = vettoreMat[i];
				vettoreMat[i] = app2;
				}
	}
}


/*
funzione bool che controlla se il voto é consistente
*/

bool controllo(int vett2[], int pos){ 
	if (vett2[pos]<=0 || vett2[pos] >31){
		return false;
	}
	else {
		return true;
	}
}

void caricaVett(int vettore[],int vettore2[],int d){ // funzione che carica vettore
	for (int i = 0 ; i<d; i++)
	if(!(cin >> vettore[i] >> vettore2[i])){	 // controllo che siano inseriti solo valori interi
			cin.clear(); // cancello flag errore di ingresso dati
			cin.ignore(1000,'\n'); // ignoro i caratteri non interi immessi in precedenza
			cerr << "Voglio solo numeri\n";
			cout << "Reinserisci valore in posizione: " << i << endl;
			i--; // ritorno alla posizione in cui mi devo inserire il dato
	} else {
		if (!(controllo(vettore2, i))){ // richiamo la funzione controllo
			cerr << "Voto fuori dal limite massimo consentito, reinserire..." << endl;
			i--; // torno indietro di una posizione per reinserire il voto
		}
	}

	
}

void stampaVett (int vettore[], int vettore2[], int dimensione){ // funzione che stampa vettore
	
	cout << "MATRICOLA" << '\t' << "VOTI" << endl;
	for (int i = 0 ; i<dimensione; i++)
		cout << vettore[i]<< "\t\t" << vettore2[i] << endl;
	
}


int main(){

	int dim = MAX+MAX;
	int matricola [MAX];
	int voti [MAX];
	cout << "Inserisci rispettivamente matricola e voti..." << endl;
	caricaVett(matricola, voti, MAX);
	stampaVett(matricola,voti,MAX);
	cout << "Ordino dal voto piu alto..." << endl;
	ordinamentoVoti(matricola, voti, MAX);
	stampaVett(matricola,voti,MAX);



 	
	return 0;
}