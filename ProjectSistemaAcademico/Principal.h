#pragma once // Impede que a classe seja incluida mais de uma vez
#include "Pessoa.h"
#include "Universidade.h"

class Principal {
private:
	Pessoa Simao;
	Pessoa Einstein;
	Pessoa Newton;

	// UTFPR é agregada ao objeto desta classe
	Universidade UTFPR;

	int diaAtual;
	int mesAtual;
	int anoAtual;

public:
	Principal();
	void Executar();
};
