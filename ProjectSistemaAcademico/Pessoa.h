#pragma once // Impede que a classe seja incluida mais de uma vez
#include "stdafx.h"

#include "Universidade.h"

class Pessoa {
protected:

	int diaP;
	int mesP;
	int anoP;
	int idadeP;
	char nomeP[30];
	int id;

public:

	//Pessoa(int diaNa, int mesNa, int anoNa, const char* nome = "");
	Pessoa(int id);
	~Pessoa();

	void inicializa(int diaNa, int mesNa, int anoNa, const char* nome);

	void calc_idade(int diaAT, int mesAT, int anoAT);
	void imprime_idade();
	void calc_idade_imprime(int diaAT, int mesAT, int anoAT);
	int getIdade();

	void setId(int i);
	int getId();

	void setNome(const char* n);
	char* getNome();
};