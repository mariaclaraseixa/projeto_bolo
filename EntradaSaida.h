#ifndef ENTRADA_SAIDA_H
#define ENTRADA_SAIDA_H

#include <string>

using namespace std;

string escolherMassa();
string escolherRecheio();
string escolherCobertura();
int continuar();

void exibirBolo(const string& massa, const string& recheio, const string& cobertura);

#endif
