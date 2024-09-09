#include <iostream>

using namespace std;

typedef struct{
    string nome;
    string cor;
    int pot;
    int valMax;
    int vel;

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
}Carro;

Carro insere(string stnome, string stcor, int stpot, int stvelMax){
        nome=stnome;
        cor=stcor;
        pot=stpot;
        valMax=stvelMax;
        vel=0;
    }

int main() {

    Carro *carros=new Carro[5];

    car1.insere("Tornado", "Vermelho", 450, 350);
    car2.insere("Luxo", "Preto", 250, 260);

    car1.ler();
    car1.mudaVel(400);
    car1.ler();
   
    
    return 0;
}