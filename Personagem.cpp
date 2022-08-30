#include <iostream>
#include "arma.cpp"

using namespace std;

class Personagem {
public:
    string nome;
    Arma arma;
    int vida = 100;

    Personagem(string nome, Arma arma) : arma(arma) {
        nome = nome;
        arma = arma;
    }
};