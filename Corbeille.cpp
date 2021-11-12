#include <iostream>

using namespace std;

void message1(int recu);
void message2(int recu);
void message3(int recu);



typedef void (*pf)(int);
pf* mess;

int main(){

    mess = new pf[3];
    mess[0]=&message1; mess[1]=&message2; mess[2]=&message3;

    for (int i = 0; i < sizeof(mess) ;i++ ){
         mess[i](2);
    }
}

void message1(int recu)
{
    cout << recu << endl;
}

void message2(int recu){
    cout << recu + 1 << endl;
}

void message3(int recu){
    cout << recu + 2 << endl;
}