#include <iostream>

using namespace std;

void message1(void);
void message2(void);
void message3(void);



typedef void (*pf)(void);
pf* mess;

int main(){
    int nombre;

    pf tabP[3];
    tabP[0]=&message1; tabP[1]=&message2; tabP[2]=&message3;
    cout << "Entrée un nombre de fonction" << endl;
    cin >> nombre;

    mess = new pf[nombre];

    for(int i=0; i < nombre; i++){
        int ii;
        cout << "Choissisez l'indice de la première fonction" << nombre << endl;
        cin >> ii;
        mess[i] = tabP[ii];
    }

    for (int i = 0; i < sizeof(mess) ;i++ ){
         mess[i]();
    }
}

void message1(void)
{
    cout << "M1" << endl;
}

void message2(void){
    cout << "M2" + 1 << endl;
}

void message3(void){
    cout << "M3" + 2 << endl;
}