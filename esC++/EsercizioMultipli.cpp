//Acquisire due valori positivi e dire se il primo e' multiplo del secondo
#include <iostream>
using namespace std;

int main (){
    int valore1, valore2;
    cout << "Inserisci il primo valore"<< endl;
    cin >> valore1;

    if (valore1<=0)
        cerr << "Valore negativo" << endl;
    else{
     cout << "Inserisci il secondo valore"<< endl;
     cin >> valore2;
        if(valore2<0)
            cerr << "Valore negativo" << endl;
        else
            if (valore1>valore2){
                if (valore1%valore2 == 0)
                    cout << valore1 << " e' multiplo di " << valore2 << endl;
                else
                    cerr << "Il Valore dato non e' multiplo di " << valore2 << endl;
            }
            else
                cerr << "Il valore non e' valido" << endl;
        }
    return 0;
}
