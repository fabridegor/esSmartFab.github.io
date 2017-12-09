/*
27- 11-17
Obiettivo: 
	Caricare vettore da tastiera, calcolare somma elementi, media , massimo, minimo, max negativi, min positivi
FDeg
*/
#include <iostream>
#define DIM 5
using namespace std;


int main(){
	
	int vett[DIM];
	double somma, media;
	int max, min;
	
	cout << "Carica vettore" << endl;
	
	for (int i = 0 ; i<DIM; i++){
		cin >> vett[i];
	}
	
	somma = 0;
	for (int i = 0 ; i<DIM; i++){
		somma = vett[i] + somma;		
	}
	
	cout << "La somma é: " << somma << endl;
	
	media = somma/DIM;
	cout << "La media é: "<< media << endl;
	
	min = vett[0];
	for (int i = 0 ; i<DIM; i++){
		if (vett[i]<=min)
			min = vett[i];		
	}
	
	cout << "Il minimo é: "<< min << endl;
	
	max = vett[0];
	for (int i = 0 ; i<DIM; i++){
		if (vett[i]>=max)
			max = vett[i];		
	}
	
	cout << "Il massimo é: "<< max << endl;
	
	int minPos = vett[0];
	int maxNeg = vett[0];
	
	for (int i = 0 ; i<DIM; i++){
		if (vett[i]>=0 && vett[i]<=minPos)
			minPos = vett[i];		
	}
	
	for (int i = 0 ; i<DIM; i++){
		if (vett[i]<0 && vett[i]>=maxNeg)
			maxNeg = vett[i];
		else {
			if (vett[i]>0)
				i++;
		}		
	}
	
	cout << "Il massimo dei Negativi é: "<< maxNeg << endl;
	cout << "Il minimo dei Positivi é: "<< minPos << endl;
	
	
	return 0;
}