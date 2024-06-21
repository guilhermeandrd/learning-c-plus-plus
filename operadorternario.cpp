#include <iostream>

using namespace std;

int main(){

    //(expressão) ? valor 1 : valor 2;

    int n1, n2, nota;

    string res;

    cout << "digite a primeira nota: \n";
    cin >> n1;
    cout << "digite a segunda nota: \n";
    cin >> n2;

    nota=n1+n2;

    // >= 60   aluno aprov
    // <60     aluno reprov

    //(nota >= 60) ? res="aprovado" : res="reprovado";
    res=(nota >= 60) ? "aprovado" : "reprovado";

    cout << "\nSituação do aluno: " << res << "\n";

    return 0;
}