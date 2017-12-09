#include <iostream>
using namespace std;




int perimetro (int n, int m){
	int ris = n + m;
	return ris;
	
}
	
int area (int n, int m){
	int ris = n * m;
	return ris;
}

void stampa(int n,int m){
	for (int i = 0 ; i<n ; i++){
		for (int j = 0 ; j<m; j++){
			cout << "*";
		}
		cout << endl;
	}
}


int main(){
	
	int val1 =1 , val2 = 1;
	
	while (val1!=0 )
	

	
	
	stampa(val1,val2);
	
	cout << "Il perimetro é: " << perimetro(val1, val2)<< endl;;
	cout << "L'Area é: " << area(val1, val2)<< endl;
	
	
	return 0;
}