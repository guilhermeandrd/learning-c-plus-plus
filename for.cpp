#include <iostream>

using namespace std;

int main() {

    /* for(inciação/condicional/incremento/decremento)
    */

    int x, y, z;


    //for (int temp=0;temp<1000000000;temp++);

    for(x=0,y=1, z=0;x<=10 && z<=6;x++,y+=2,z+=5){
        cout << x << "   " << y  << "   " << z << "\n";
    }

    return 0;
}