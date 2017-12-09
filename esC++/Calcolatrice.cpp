/*
Fabrizio D.

Obiettivo:
Creare un programma che dati due valori, faccia scegliere all'utente, tramite un menu,
 di eseguire una delle 4 operazioni: sottrazione moltiplicazione divisione somma.
Il menu deve essere riproposto finché l'utente non decide di uscire dal programma. (op.in forma compatta)
*/

#include <iostream>
using namespace std;


int main (){
	int val1, val2;
	char operazione;
	
	do {

	
	cout <<"Dammi due numeri" << endl;
	

		if(!(cin >> val1 &&	cin >> val2)){ 				//chiedo i valori da tastiera finché non vengono messi valori di tipo int
			cout<< "Hai inserito un valore non numerico\n";
			cin.clear(); 									//funzione che elimina gli errori dal cin in caso di inserimento di un carattere
			cin.ignore(10000,'\n');							//ignoro i valori errati immessi da tastiera (valori diversi da tipo int)
		}
		
		else {
			cout << "Che operazione vuoi fare?\n'f'-> Exit\n";
			cout<<"'a'-> Addizione\n's'-> Sottrazione\n'm'-> Moltiplicazione\n'd'-> Divisione\n";
			cin >> operazione;									//scelgo operazione da effettuare
			cout << endl;
			
			/*
			Il controllo sull'immissione del dato da  tastiera va effettuato per evitare che un utente metta
			un dato non di tipo int, che causa un loop.
			*/
			
			switch(operazione){
				case 'a': 
					cout << "Hai scelto addizzione" << '\n';
					cout << val1;
					val1+=val2;
					cout << " + " << val2 << " = " << val1 << '\n';
					break;
				case 's': 
					cout << "Hai scelto sottrazione" << '\n';
					cout << val1;
					val1-=val2;
					cout << " - " << val2 << " = " << val1 << '\n';
					break;
				case 'm': 
					cout << "Hai scelto moltiplicazione" << '\n';
					cout << val1;
					val1*=val2;
					cout << " x " << val2 << " = " << val1 << endl;				
					break;
				case 'd': 
					cout << "Hai scelto divisione" << '\n';
					cout << val1;
					val1/=val2;
					cout << " : " << val2 << " = " << val1 << endl;
					break;
				case 'f': 
					cout << "Exit" << endl;
					break;
				default: 
					cout << "Valore Errato" << endl;
					break;

			}
		}
	} while (operazione !='f' ); //eseguo tutto il costrutto finché non viene inserito il carattere 'f'

return 0;
}
