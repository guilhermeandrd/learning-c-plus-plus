#include <iostream>

using namespace std;

int main(){
    int n[10];

    int i, v;

    cin >> v;
    

    for(i=0;i<sizeof(n)/4;i++){
        n[i] = v;
        cout << "N[" << i <<"] = " << n[i] << endl;
        v = v *2;
    }
    return 0;
}