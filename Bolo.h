#ifndef BOLO_H
#define BOLO_H

#include <string>
using namespace std;

class Bolo {
private:
    string massa;
    string recheio;
    string cobertura;

public:
    Bolo();  // Construtor padrão
    Bolo(const string& massa, const string& recheio, const string& cobertura); // Construtor com parâmetros

    void set_massa(const string& m);
    string get_massa() const;

    void set_recheio(const string& r);
    string get_recheio() const;

    void set_cobertura(const string& c);
    string get_cobertura() const;
};

#endif
