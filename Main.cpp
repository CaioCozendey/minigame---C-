#include <iostream>
#include "Minigame.cpp"

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i = 0;

    while ( i == 0 ){
        cout << "Digite 0 para jogar!\nNúmero: ";
        cin >> i;
        if ( i == 0 ){
            iniciaJogo();
        }
        else{
            break;
        }
    }
    return 0;
}