#include <iostream>
#include "arma.cpp"

using namespace std;

class Monstro {
public:
    string nome;
    string arma;
    int dano;
    int vida = 250;

    Monstro(string nome, string arma){
        nome = nome;
        arma = arma;
        danoMonstro();
    }

    void danoArmaBase(){
        if ( arma == "Garras"){
            dano = 20;
        }
    }

    int danoMonstro(){
        int danoGolpe;
        int golpe = randomNumber();

        if(golpe > 8){
            danoGolpe = dano;
        }
        else if(golpe > 4){
            danoGolpe = dano - 5;
        }
        else{
            danoGolpe = 0;
        }
        return danoGolpe;
    }
};