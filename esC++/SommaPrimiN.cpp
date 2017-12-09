/*
Fabrizio D.

Obiettivo:
	Dato un n positivo fare la somma dei primi n numeri interi utilizzando i costrutti while
*/

#include <iostream>
using namespace std;

int main (){
	int n;
	int somma=0;
	int conta = 0;
	
	do {
	cout << "Dammi un numero" << endl;
	if(!(cin >> n)){ 				//chiedo i valori da tastiera finché non vengono messi valori di tipo int
		cout<< "Hai inserito un valore non numerico\n";
		cin.clear(); 									//funzione che elimina gli errori dal cin in caso di inserimento di un carattere
		cin.ignore(10000,'\n');							//ignoro i valori errati immessi da tastiera (valori diversi da tipo int)
	}
	} while (n<=0);
	
	
	/* 
	OPPURE
	
	do{
		somma+=conta;
		conta++;
	} while (conta<=n);
	
	*/
	
	while (conta<=n){	
		somma+=conta;
		conta++;
	}
	
	if(somma!=0)
		cout << "La somma n e'" << somma << endl;
	else 
		cout << "Non valido" << endl;

return 0;
	
}
