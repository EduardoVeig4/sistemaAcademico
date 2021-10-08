#pragma once // Impede que a classe seja incluida mais de uma vez
#include "Pessoa.h"

class Principal {
private:
	Pessoa Einstein;
	Pessoa Newton;

	int diaAtual;
	int mesAtual;
	int anoAtual;

public:
	Principal();
	void Executar();
};
