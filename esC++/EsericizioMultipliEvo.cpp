// Acquisire due valori positivi e dire se uno é multiplo dell'altro

#include <iostream>
using namespace std;

int main(){
    int valoreApp=0, valore1, valore2;

    cout << "Inserisci il primo valore"<< endl;
    cin >> valore1;
      if (valore1<=0)
        cerr << "Valore negativo" << endl;
     else{
    	 cout << "Inserisci il secondo valore"<< endl;
     	 cin >> valore2;
        if(valore2<0)
            cerr << "Valore negativo" << endl;
        else{
         
         if(valore1<valore2){
     	    valoreApp=valore2;
     	    valore2=valore1;
            valore1=valoreApp;
         }
         
         cout << endl;
         cout << valoreApp << '\t';
         cout << valore1 << '\t';
         cout << valore2 << endl;
      
      
        if (valore1%valore2 == 0)
             cout << valore1 << " e' multiplo di " << valore2 << endl;
        else
             cerr << "Il Valore dato non e' multiplo di " << valore2 << endl;
        }
    }

    return 0;
}

