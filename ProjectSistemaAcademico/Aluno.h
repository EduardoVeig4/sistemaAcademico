#pragma once
#include "Pessoa.h"

class Aluno : public Pessoa{
private:
	Universidade* pUnivFiliado;

	int ra;

public:
	Aluno(int diaNa, int mesNa, int anoNa, const char* nome = "");
	Aluno(int i = -1);
	~Aluno();

	void setRA(int numRa);
	int getRA();
};

