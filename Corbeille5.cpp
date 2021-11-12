#include <iostream>

using namespace std;

typedef void(*fx)(void);
fx event;

class A{

    public:
        void m(void){
            cout << "A" << endl;
            event();
        }
};

class B{
    public:
        B(void){
            event = &B::m;
        }

        static void m(void){
            cout << "B" << endl;
        }
};

int main(){
    int pause;
    A oA;
    B oB;
    oA.m();
    cin >> pause;
}