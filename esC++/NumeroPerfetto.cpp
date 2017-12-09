/*dato un numero intero positivo dire se e' perfetto (quando e' pari alla somma dei suoi divisori p.e 6=1+2+3 tutti divisori)
*/

#include <iostream>
using namespace std;

int main(){
	int num;
	int somma=1;
	int contatore=0;
	cin >> num;
	
	while (somma<=num){
		if (num%somma == 0){
			contatore=somma;
			somma++;
		}
		else 
			somma++;
	}
	
	if (contatore == num)
		cout << "Numero e' pefetto" << endl;
	else
		cout << "Non e' perfetto" << endl;
	
	
return 0;
}
