#pragma once
#include "EveryThing.h"
#include "Pessoa.h"

class Departamento;

class Aluno : public Pessoa{
private:
	Universidade* pUnivFiliado;

/*---------------------------------------------------------------------------------*/
	int ra;
	char nome[30];

public:
	Aluno(int diaNa, int mesNa, int anoNa, const char* nome = "");
	Aluno(int i = -1);
	~Aluno();
/*---------------------------------------------------------------------------------*/
	void setNome(const char* nome);

	void setRA(int numRa);
	int getRA();
};

