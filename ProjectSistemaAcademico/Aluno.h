#pragma once
#include "stdafx.h"

#include "Pessoa.h"

class Departamento;

class Aluno : public Pessoa{
private:
	//Universidade* pUnivFiliado;

	int RA;

	Disciplina* pDiscAssociada;

public:
	Aluno(int i);
	~Aluno();

	void setRA(int ra);
	int getRA();

	void setDisciplina(Disciplina* pd);
	Disciplina* getDisciplina();
	int getId();
};

