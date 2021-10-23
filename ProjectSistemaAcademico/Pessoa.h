#pragma once // Impede que a classe seja incluida mais de uma vez
#include <stdio.h>
#include "Universidade.h"
#include <iostream>
using namespace std;

class Pessoa {
protected:

	int diaP;
	int mesP;
	int anoP;
	int idadeP;
	char nomeP[30];
	int id;

public:

	Pessoa(int diaNa, int mesNa, int anoNa, const char* nome = "");
	Pessoa();
	~Pessoa();
/*---------------------------------------------------------------------------------*/
	void inicializa(int diaNa, int mesNa, int anoNa, const char* nome = "");
/*---------------------------------------------------------------------------------*/
	void calc_idade(int diaAT, int mesAT, int anoAT);
	void imprime_idade();
	void calc_idade_imprime(int diaAT, int mesAT, int anoAT);
	int getIdade();
/*---------------------------------------------------------------------------------*/
	void setId(int i) { id = i; }
	int getId() { return id; }
/*---------------------------------------------------------------------------------*/
	void setNome(char* n) { strcpy(nomeP, n); }
	char* getNome() { return nomeP; }
};