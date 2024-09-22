#include <iostream>
#include <string>
#include <cstdlib>
#include "EntradaSaida.h"
#include "Bolo.h"

using namespace std;

int main() {
	Bolo bolo("","",""); // criação de objeto

    do {
    	system("cls");// no Linux, usar system("clear") para limpar o console
    	bolo.set_massa(escolherMassa());

		system("cls");
		bolo.set_recheio(escolherRecheio());

		system("cls");
		bolo.set_cobertura(escolherCobertura());

		system("cls");
        exibirBolo(bolo.get_massa(), bolo.get_recheio(), bolo.get_cobertura());

        system("pause");
    } while (continuar() == 1);

    return 0;
}
