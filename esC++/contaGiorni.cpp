//Input giorno e mese e quanti giorni sono trascorsi dall'inizio dell' anno


#include <iostream>
using namespace std;




int main (){
	
	int giorno, mese;
	
	
	do {
	cout << "Inserisci giorno" << endl;
	cin >> giorno;
	cout << "Inserisci mese"<< endl;
	cin >> mese;
	} while (giorno == 31);
	
	return 0;
	
	
	
	
}
