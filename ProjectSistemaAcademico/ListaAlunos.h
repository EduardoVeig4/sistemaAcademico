#pragma once
#include "stdafx.h"

#include "Aluno.h"
#include "ElAluno.h"

class ListaAlunos{
private:
	int cont_alunos;
	int num_alunos;
	char nome[150];

	ElAluno* pElAlunoPrim;
	ElAluno* pElAlunoAtual;

public:
	ListaAlunos(int na, const char* n);
	~ListaAlunos();

	void setNome(const char* n);
	char* getNome();

	void incluaAluno(Aluno* pa);
	void listeAlunos();
	void listeAlunos2();
};

