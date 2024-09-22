/*
IMPLEMTANTAÇÃO DAS FUNÇÕES REFERENTES A BIBLIOTECA EntradaSaida.h
*/

#include <iostream>
#include "EntradaSaida.h" // Inclusão da biblioteca criada

using namespace std;

/** Função para escolher massa
int escolherMassa() {
    int opcao;
    do {
        cout << "Escolha a massa do bolo:\n";
        cout << "1 - Branca\n";
        cout << "2 - Chocolate\n";
        cout << "3 - Mescla\n";
        cin >> opcao;
    } while (opcao < 1 || opcao > 3);
    return opcao;
}
**/

string escolherMassa() {
    int opcao;
    string massa[] = {"Branca", "Chocolate", "Mescla"};

    do {
        cout << "Escolha a massa do bolo:\n";
        cout << "1 - Branca\n";
        cout << "2 - Chocolate\n";
        cout << "3 - Mescla\n";
        cin >> opcao;
    } while (opcao < 1 || opcao > 3);

    return massa[opcao - 1];  // Retorna a string correspondente à opção
}


/** Função para escolher recheio
int escolherRecheio() {
    int opcao;
    do {
        cout << "Escolha o recheio do bolo:\n";
        cout << "1 - Brigadeiro\n";
        cout << "2 - Morango\n";
        cout << "3 - Sem recheio\n";
        cin >> opcao;
    } while (opcao < 1 || opcao > 3);
    return opcao;
}
**/


string escolherRecheio() {
    int opcao;
    string recheios[] = {"Brigadeiro", "Morango", "Sem recheio"};

    do {
        cout << "Escolha o recheio do bolo:\n";
        cout << "1 - Brigadeiro\n";
        cout << "2 - Morango\n";
        cout << "3 - Sem recheio\n";
        cin >> opcao;
    } while (opcao < 1 || opcao > 3);

    return recheios[opcao - 1];  // Retorna a string correspondente à opção
}


/** Função para escolher cobertura
int escolherCobertura() {
    int opcao;
    do {
        cout << "Escolha a cobertura do bolo:\n";
        cout << "1 - Chantilly\n";
        cout << "2 - Pasta americana\n";
        cout << "3 - Sem cobertura\n";
        cin >> opcao;
    } while (opcao < 1 || opcao > 3);
    return opcao;
}
**/

string escolherCobertura() {
    int opcao;
    string cobertura[] = {"Chantilly", "Pasta americana", "Sem cobertura"};
    do {
        cout << "Escolha a cobertura do bolo:\n";
        cout << "1 - Chantilly\n";
        cout << "2 - Pasta americana\n";
        cout << "3 - Sem cobertura\n";
        cin >> opcao;
    } while (opcao < 1 || opcao > 3);
    return cobertura[opcao - 1];
}


// Exibir bolo escolhido
void exibirBolo(const string& massa, const string& recheio, const string& cobertura) {
    cout << "\nSua escolha de bolo foi:\n";
    cout << "Massa: " << massa << "\n";
    cout << "Recheio: " << recheio << "\n";
    cout << "Cobertura: " << cobertura << "\n";
}

// Função para continuar
int continuar() {
    int opcao;
    do {
        cout << "\nDeseja continuar?\n";
        cout << "1 - Sim\n";
        cout << "2 - Não\n";
        cin >> opcao;
    } while (opcao < 1 || opcao > 2);
    return opcao;
}
