#include <iostream>

using namespace std;

int main() {
    //o dowhile executa os comandos pelo menos uma vez
    //mesmo se a condição estiver satisfeita
    //ao contrário do while, que se fosse com ele, não executaria os seus comandos e continuaria o restante do programa
    int n=20;

    do{//aqui ele faz
        cout << "canal fessor bruno - " << n << "\n";

        n++;
        //if(n==10){ break; }
        //n +=2;
        //cin >> n;
    }while(n<20); //aqui ele testa

    cout << "\nrotina finalizada\n";
    return 0;
}