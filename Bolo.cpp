#include "Bolo.h"
#include <iostream>

using namespace std;

// Implementação do construtor padrão
Bolo::Bolo() : massa(""), recheio(""), cobertura("") {}

// Implementação do construtor com parâmetros
Bolo::Bolo(const string& massa, const string& recheio, const string& cobertura)
    : massa(massa), recheio(recheio), cobertura(cobertura) {}

// Implementação dos métodos setters e getters
void Bolo::set_massa(const string& m) {
    massa = m;
}

string Bolo::get_massa() const {
    return massa;
}

void Bolo::set_recheio(const string& r) {
    recheio = r;
}

string Bolo::get_recheio() const {
    return recheio;
}

void Bolo::set_cobertura(const string& c) {
    cobertura = c;
}

string Bolo::get_cobertura() const {
    return cobertura;
}
