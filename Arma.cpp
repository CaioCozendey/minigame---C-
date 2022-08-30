#include <iostream>

using namespace std;

int randomNumber(){
    int r1 = rand() % 10 + 1;;
    return r1;
}

class Arma{
public:
    string nome;
    int municao;
    int dano;
    string tipo;

    Arma(string nomeC, int municaoC, int danoC, string tipoC){
        nomeC= nome;
        municaoC = municao;
        danoC = dano;
        tipoC = tipo;
    }

    int danoTiro(){
        int danoAtira = 0;
        int tiro = randomNumber();

        if(tiro > 8){
            danoAtira = dano;
        }
        else if(tiro > 4 && tiro < 8){
            danoAtira = dano - 5;
        }
        else if(tiro < 4){
            danoAtira = 0;
        }
        municao -= 1;
        return danoAtira;
    }
};