#pragma once // Impede que a classe seja incluida mais de uma vez
#include "Pessoa.h"
#include "Universidade.h"
#include "Professor.h"

class Principal {
private:
	Professor Simao;
	Professor Einstein;
	Professor Newton;

	// UTFPR é agregada ao objeto desta classe
	Universidade UTFPR, Princeton, Cambridge;

	Departamento DAELN, FisicaPrinceton, MatematicaCambridge;

	int diaAtual, mesAtual, anoAtual;

public:
	Principal();
	~Principal();
	void Executar();
};
