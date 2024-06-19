#include <iostream>

using namespace std;

int main(){
    
    int matriz[3][4];
    int l, c;

    for(l=0;l<3;l++){
        //ele começa com 0
        //ai ele começa tudo de novo
        for(c=0;c<4;c++){
           cin >> matriz[l][c];
           //matriz[l][c] = l;
            //enquanto l for 0, ele vai executar esse for, prenchendo cada espaço do c
            //qual l for 1 ele sai daqui
            //até preencher todo o c om l valendo 1
        }
    }
    /**matriz[0][0]=0;
    matriz[0][1]=0;
    matriz[0][2]=0;
    matriz[0][3]=0;

    matriz[1][0]=1;
    matriz[1][1]=1;
    matriz[1][2]=1;
    matriz[1][3]=1;

    matriz[2][0]=2;
    matriz[2][1]=2;
    matriz[2][2]=2;
    matriz[2][3]=2;**/

    for(l=0;l<3;l++){
        //ele começa com 0
        //ai ele começa tudo de novo
        for(c=0;c<4;c++){
            cout << matriz[l][c] << " ";
            //enquanto l for 0, ele vai executar esse for, prenchendo cada espaço do c
            //qual l for 1 ele sai daqui
            //até preencher todo o c om l valendo 1
        }
        cout << "\n";
    }
    return 0;
}