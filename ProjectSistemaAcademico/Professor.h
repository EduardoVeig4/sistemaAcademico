#pragma once
#include "Pessoa.h"
#include "Universidade.h"

class Professor : public Pessoa{ // Herda os atributos e m�todos da classe Pessoa
private:
	// pUnivFiliado � apenas uma refer�ncia a um objeto associado
	Universidade* pUnivFiliado;
	Departamento* pDptoFiliado;

public:
	Professor(int diaNa, int mesNa, int anoNa, const char* nome = "");
	Professor();
	~Professor();

	void setUnivFiliado(Universidade* pu);
	void setDepartamento(Departamento* pdpto);
	void OndeTrabalho();
	void QualDepartamentoTrabalho();
};

