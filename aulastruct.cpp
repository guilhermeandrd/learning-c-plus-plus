#include <iostream>

using namespace std;

struct Carro{
    string nome;
    string cor;
    int pot;
    int valMax;
    int vel;

    void insere(string stnome, string stcor, int stpot, int stvelMax){
        nome=stnome;
        cor=stcor;
        pot=stpot;
        valMax=stvelMax;
        vel=0;
    }

    void ler(){
        cout << nome << "\n" << cor << "\n" << pot << "\n" << vel << "\n" << valMax;
    }

    void mudaVel(int mv){
        vel = mv;

        if(vel>valMax){
            vel=valMax;
        }
        if(vel<0){
            vel=0;
        }
    }
};

int main() {

    Carro car1, car2;

    car1.insere("Tornado", "Vermelho", 450, 350);
    car2.insere("Luxo", "Preto", 250, 260);

    car1.ler();
    car1.mudaVel(400);
    car1.ler();
   

    return 0;
}