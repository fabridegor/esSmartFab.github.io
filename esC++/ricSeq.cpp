/* 

Data:
	
	Obiettivo:
		Algoritmo ricerca sequenziale -> metto in input x = 4, scandisco tutto l'array, non appena trovo un valore pari a x, mi fermo e:
		1. Restituisco posizione -> piu conveniente
		2. Bool c'é o non c'é

		Mi fermo nella prima posizione utile.

		Algoritmo Ordinamento ingenuo -> dato un'array per ordinarlo vengono utlizzati due indici, uno situato alla posizione i e uno alla posizione i+1
										 si fa un confronto tra i due valori e si scambiano nel momento in cui il primo é piu grande del secondo
										 (in caso di ordinamento crescente)
	
	FDeg
*/

#include <iostream>
#include <cstring> // funzione libreria per gestire stringhe in cpp
#define DIM 5	   // il programma accetta solo array di 5 elementi
using namespace std;



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

// Ricerca Sequenziale
void ricercaSequenziale (int vettore[]){
	bool trovato = false;
	int valore;
	int i = 0;
	
	cout << "Scrivi valore da trovare"<< endl;
	cin >> valore;
	
	// scorro array
	do{
		if(vettore[i]==valore) //appena trovo il valore setto la variabile bool a true
			trovato = true;
		else 
			i++;
	} while (i<DIM && !trovato); // ciclo finché una delle condizioni non é vera
	
	if (trovato)
		cout << "Ho trovato valore: " << valore << " in posizione -> " << i << endl; // se trovato é vero
	else 
		cout << "Non ho trovato il valore che cerchi"<< endl;
	
}


void ordinamentoCre (int vettore[]){
	
	cout << "Lo Ordino (crescente)..." << endl;
	int app = 0;
	for (int i = 0; i<DIM-1; i++){ // scorro array con primo indice fino a posizione DIM-1
		for (int j = i+1 ; j<DIM; j++) // scorro array con secondo indice che avra la posizione i+1
			if (vettore[i]>vettore[j]){ // scambio se elemento in posizione i é maggiore dell'elemento in posizione j
				app = vettore[j]; // variabile di appoggio
				vettore [j] = vettore[i];
				vettore [i] = app;
				}
	}
}

void ordinamentoDec (int vettore[]){
	
	cout << "Lo Ordino (decrescente)..." << endl;
	int app = 0;
	for (int i = 0; i<DIM-1; i++){ // scorro array con primo indice fino a posizione DIM-1
		for (int j = i+1 ; j<DIM; j++) // scorro array con secondo indice che avra la posizione i+1
			if (vettore[i]<vettore[j]){ // scambio se elemento in posizione i é maggiore dell'elemento in posizione j
				app = vettore[j]; // variabile di appoggio
				vettore [j] = vettore[i];
				vettore [i] = app;
				}
	}
}


void sommaVett(int v1[],int v2[],int v3[],int dim){
	
	cout << "Sommo elemento per elemento i due vettori..."<< endl;
	for (int i = 0; i<dim; i++){
		v3[i]=v1[i]+v2[i];
	}
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
	char scelta;
	string risposta; // stringa
	
	do{
		cout << "Carica elementi nel vettore1\n";
		caricaVett(vett1,DIM);
		stampaVett(vett1,DIM);
		cout << "Che operazione vuoi fare?\n";
		cout << "r -> RicercaSequenziale\nc -> OrdinamentoCrescente\nd -> OrdinamentoDecrescente\np -> ProdottoScal\nf -> Termina" << endl;
		cin >> scelta;
		switch (scelta){
			case 'r': 
				ricercaSequenziale(vett1);
				stampaVett(vett1,DIM);
				break;
			case 'c':
				ordinamentoCre(vett1);
				stampaVett(vett1,DIM);
				break;
			case 'd':
				ordinamentoDec(vett1);
				stampaVett(vett1,DIM);
				break;
			case 's':
				cout << "Carica elementi nel vettore2\n";
				caricaVett(vett2,DIM);
				stampaVett(vett1,DIM);
				sommaVett(vett1,vett2,vettApp,DIM);
				stampaVett(vettApp,DIM);
				break;
			case 'p':
				cout << "Carica elementi nel vettore2\n";
				caricaVett(vett2,DIM);
				stampaVett(vett1,DIM);
				cout << prodScalare(vett1,vett2,vettApp,DIM) << endl;
				break;
			case 'f':
				cout << "Termina\n";
				break;
			default:
				cerr << "Carattere non valido\n";
				break;
			}
		} while (scelta!='f');	
	

	/*cout << "Carica elementi nel vettore\n";
	caricaVett(vett,DIM);
	stampaVett(vett,DIM);
	ricercaSequenziale(vett);
	stampaVett(vett,DIM);
	
	cout << "Vuoi ordinarlo?" << endl;
	cin >> risposta;
	
	if (risposta.compare("si") == 0){ //chiedo se voglio ordinarlo
		cout << "Crescente o decrescente?\n";
		risposta.clear(); 			// funzione utilitá per cancellare la stringa
		cin >> risposta;
		
		if(risposta.compare("crescente") == 0)
			ordinamentoCre(vett);
		else 
			ordinamentoDec(vett);
	}
	
	stampaVett(vett,DIM);
*/

	return 0;
}