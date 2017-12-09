/*
 
 
 Leggere una sequenza di valori chiusa da uno zero, fare la media dei positivi e di quelli negativi

 output
 Inserisci un valore
 4
 -3
 4
 -3
 0
 
 4 e' la media dei positivi
 3 e' la media dei negativi
 
 */

#include <iostream>
using namespace std;

int main (){
	float num, mediaP, mediaN, contaP, contaN; //float per fare medie con numeri Reali
	
	mediaP=0;
	mediaN=0;
	contaP=0;
	contaN=0;
	
	/*
	cout << "Inserisci un valore" << endl;
	cin >> num;
	 */
	
	
	//controllo numero sia diverso da 0
	
	while (num!=0){	
		/* se numero positivo, conto mediaP e sommo ogni numero
		   e incremento contaP */
		if (num>0){
			mediaP+=num;
			contaP++;	
		}
		else {
			mediaN+=num;
			contaN++;
		}
	cout << "Inserisci un valore" << endl;
	cin >> num; //cambia condizione di uscita, se voglio uscire metto a 0
	}
	
	
	if (contaP!=0) //controllo che contaP e contaN non siano = 0
		cout << mediaP/contaP << " E' la media dei positivi" << endl;
	else
		cerr << "ERRATO" << endl;
	
	if (contaN!=0)
	cout << mediaN/contaN << " E' la media dei negaivi" << endl;
	else
		cerr << "ERRATO" <<endl;


return 0;
}
