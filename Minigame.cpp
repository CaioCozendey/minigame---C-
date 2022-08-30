#include <cstdlib>
#include "arma.cpp"
#include "Monstro.cpp"
#include "Personagem.cpp"

using namespace std;

int randomNumber(){
	int r1 = rand() % 10 + 1;
    return r1;
}

void iniciaJogo(){
    Arma m1("M4A1", 30, 25, "Rifle");
    Arma m2("p90", 45, 15, "SMG");
    Arma m3("1911", 8, 28, "Pistola");

    Personagem p1("Cleitinho", m3);

    Monstro demogorgon("Demogorgon", "Garra");
    cout << "Jogo Iniciado!\n";
}

int Minigame(){

}
