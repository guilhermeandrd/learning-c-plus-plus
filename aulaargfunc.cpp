#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;


int main(int argc, char *argv[]) {

    cout << argv[3] << "\n";
    cout << argc << "\n";

    if(argc>1){
        if(!strcmp(argv[1], "sol")){
            cout << "vou ao clube \n";
        }else if(!strcmp(argv[1], "nublado")){
            cout << "vou ficar em casa \n";
        }else{
            cout << "vou ver tv \n";
        }
    }

    system("pause");
    
    return 0;
}