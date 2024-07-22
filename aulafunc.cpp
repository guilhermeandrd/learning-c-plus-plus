#include <iostream>

using namespace std;

void texto();
void soma(int a, int b);
int soma2(int n1, int n2);
void tr(string tra[4]);

int main() {
    int res, a ,b;
    string transp[4]={"carro", "moto", "barco", "avião"};

    //cin >> a >> b;

    res= soma2(175,25);

    cout << "valor de res: " << res << "\n";

    tr(transp);

    return 0;
}

void texto(){
    cout << "\nCanal Fessor Bruno\n";
}

void soma(int a, int b){
    cout << "soma dos valores= " << a+b << "\n";
}

int soma2(int n1,int n2){
    return n1+n2;
}

void tr(string tra[4]){
    for(int i=0;i<4;i++){
        cout << tra[i] << "\n";
    }
}

