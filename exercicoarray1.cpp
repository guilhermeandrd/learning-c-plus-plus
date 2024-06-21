#include <iostream>

using namespace std;

int main(){
    int numeros[10];
    int i;
    for(i=0; i<sizeof(numeros)/4; i++){
        cin >> numeros[i];
        if(numeros[i]<=0){
            numeros[i] = 1;
        }
    }
    
    for(i=0;i<sizeof(numeros)/4;i++){
        cout << numeros[i] << endl;
    }
    
    
    return 0;
}
