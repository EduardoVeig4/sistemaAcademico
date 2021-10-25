#pragma once
#include "stdafx.h"

#include "Aluno.h"
#include "ElAluno.h"

class ListaAlunos{
private:
	int cont_alunos;
	int num_alunos;
	//char nome[150];

	ElAluno* pElAlunoPrim;
	ElAluno* pElAlunoAtual;

public:
	ListaAlunos(int na = 45);
	~ListaAlunos();

	void incluaAluno(Aluno* pa);
	void listeAlunos();
	//void listeAlunos2();

	ElAluno* getAlunoPrim();
};

