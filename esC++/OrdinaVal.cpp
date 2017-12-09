//Acquisire tre valori e ordinarli
#include <iostream>
using namespace std;

int main(){
    int valoreApp, valore1, valore2, valore3;
    cout << "Dammi tre valori" << endl;
    cin >> valore1;
    cin >> valore2;
    cin >> valore3;



// controllo il primo valore immesso con il secondo e con il terzo in modo da controllare se sia il piú piccolo 
    if (valore1>valore2){   
        valoreApp=valore2; //valoreApp é la variabile di appoggio che mi serve per non perdere il dato di valore2
        valore2=valore1;
        valore1=valoreApp;
    }

    if(valore1>valore3){
        valoreApp=valore3;
        valore3=valore1;
        valore1=valoreApp;
    }

    if (valore2>valore3){
            valoreApp=valore3;
            valore3=valore2;
            valore2=valoreApp;
    }
    cout << valore1 << " " << valore2 << " " << valore3 << endl;

    return 0;
}
