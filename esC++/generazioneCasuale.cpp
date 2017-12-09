/* 

Data:
	
	Obiettivo:
		generazione valori pseudocasuali(primo sempre uguale) per vettori
	FDeg
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;




int main(){

	int vett[12];
	int i,j,appoggio;

	srand(time(NULL)); //inizializza il generatore

	cout << "VETTORE GENERATO " << endl;

	for (i=0; i<12;i++){
		vett[i] = 10 + rand()%91; // numeri fra 10 e 100
		cout << vett[i] << " "; 
	}

 	cout << endl;
	return 0;
}