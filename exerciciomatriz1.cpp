#include <iostream>

using namespace std;

int main(){

    int n,p,veri,i,x,k;

    cin >> n;

    x = n/2;

    veri = n%2;

    if(veri==0){
        p=2;
    }else{
        p=3;
    }

    int m[x][p];

    for(i=0;i<x;i++){
        for(k=0;k<p;k++){
            cin >> m[i][k];
        }
    }
    
    cout << m[1][0] << endl;

    return 0;
}