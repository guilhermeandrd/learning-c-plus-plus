#include <iostream>

using namespace std;

int main(){
    int limite, i, tentativas=0, acertos=0, chuteFalho;

    cout << "insira o número de letras da palavra" << "\n";
    cin >> limite;
    
    char palavra[limite];
    char resposta[limite];
    char chute;

    cout << "insira a palavra" << "\n";
    for(i=0;i<limite;i++){
        cin >> palavra[i];
    }

    cout << "pode começar os chutes" << "\n";

    while(tentativas<5){
        cin >> chute;
        for(i=0;i<limite;i++){
            if(palavra[i]==chute){
                cout << "a palavra contém essa letra na " << i+1 << "enésima posição" << "\n";
            }else{
                chuteFalho = 1;
            }
        }
        if(chuteFalho==1){
            tentativas += 1;
        }
    }
    //tá dando erro dele mostrar esse cout abaixo antes de ter o numero de tentativas estimado porque ele está adicionando 1 a tentativas cada vez que ele verifica que se o chute está em palavra[i]
    cout << "qual você acha que é a resposta?" << "\n";


    cin >> resposta;

    for(i=0;i<limite;i++){
        cin >> resposta[i];
    }

    for(i=0;i<(limite-1);i++){
        if(palavra[i]==resposta[i]){
            acertos += 1;
        }else{
            break;
        }
    }

    if(acertos==limite){
        cout << "parabens vc acertou" << endl;
    }else{
        cout << "tente depois" << endl;
    }
    return 0;
}