#pragma once // Impede que a classe seja incluida mais de uma vez
#include <stdio.h>
#include "Universidade.h"

class Pessoa {
private:
	int diaP;
	int mesP;
	int anoP;
	int idadeP;
	char nomeP[30];

	// pUnivFiliado é apenas uma referência a um objeto associado
	Universidade* pUnivFiliado;

	Departamento* pDptoFiliado;

public:
	Pessoa(int diaNa, int mesNa, int anoNa, const char* nome = "");
	Pessoa();
	~Pessoa();

	void inicializa(int diaNa, int mesNa, int anoNa, const char* nome = "");
	void calc_idade(int diaAT, int mesAT, int anoAT);
	void imprime_idade();
	void calc_idade_imprime(int diaAT, int mesAT, int anoAT);
	int getIdade();

	void setUnivFiliado(Universidade* pu);
	void setDepartamento(Departamento* pdep);
	void OndeTrabalho();
	void QualDepartamentoTrabalho();
};