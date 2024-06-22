#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    /*switch (expression){
    case const1:
        comandos;
        break;
    case const2:
        comandos;
        break;
    default:
        break;
    }*/

    int val;
    char res;

    inicio:

    system("clear");

    cout << "selecione um transporte: \n";
    cout << "1=carro, 2=moto, 3=aviao, 4=helicoptero";
    //cout << "1,2,3=verde, 4,5,6=vermelho\n";
    
    cin >> val;

    switch(val){
        case 1:
        case 2:
            cout << "transporte terrestre \n";
            switch(val){
                case 1:
                    cout << "carro selecionado \n"; 
                    break;
                case 2:
                    cout << "moto selecionada \n";
                    break;
            }
            break;
        case 3:
        case 4:
            cout << "transporte aereo \n";
            switch(val){
                case 3:
                    cout << "aviao selecionado \n"; 
                    break;
                case 4:
                    cout << "helicoptero selecionada \n";
                    break;
            }
            break;
        default:
            cout << "transporte selecionado inválido \n";
    }
    /*switch(val){
        case 1:
        case 2:
        case 3:
            cout << "cor selecionada: verde \n";
            break;
        case 4:
        case 5:
        case 6:
            cout << "cor selecionada: vermelho \n";
            break;
        default:
            cout << "valor selecionado inválido \n";
    }*/

    cout << "Deseja continuar? s/n\n";
    cin >> res;
    

    if(res=='S'||res=='s'){
        goto inicio;
    }

    return 0;
}
