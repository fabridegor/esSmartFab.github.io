/* 

Data:
	
	Obiettivo:
		Fare un array di caratteri e vedere se la parola scritta é palindroma
		
	
	FDeg
*/

#include <iostream>
#include <cstring> // classe string
using namespace std;


// soluzione con oggetto string
bool controllaPalindroma (string palindroma){
	for (int i = 0; i<palindroma.length(); i++){
		if(palindroma[i]!=palindroma[palindroma.length()-i-1])
			return false;
	}
	return true;
}

int main(){

	string parola;
	cout << "Inserisci una stringa" << endl;
	cin >> parola;

	if(controllaPalindroma(parola))
		cout << "La parola é palindroma" << endl;
	else
		cerr<< "NON E' palindroma" << endl;




	return 0;
}