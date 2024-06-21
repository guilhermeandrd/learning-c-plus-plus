#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int nota1, nota2, res;
    char opc;

    inicio:

    system("clear");

    cout << "digite o valor da primeira nota: ";
    cin >> nota1;
    cout << "digite o valor da segunda nota: ";
    cin >> nota2;

    res=nota1+nota2;

    /*
        notas >=60 aprovado
        40<=notas<60 recuperação
        notas<40 reprovado 
    */

    if(res>=60){
        cout << "\nvocê foi aprovado \n";
    }else if(res>=40){
        cout << "você está de recuperação \n";
    }else{
        cout << "você foi reprovado \n";
    }

    cout << "você deseja digitar outras notas? [s/n] \n";
    cin >> opc;

    if(opc=='s' or opc=='S'){
        goto inicio;
    }

    return 0;
}