#pragma once
#include "stdafx.h"

#include "ElDisciplina.h"

class ListaDisciplinas{
private:
	int cont_disc;
	int num_disc;
	char nome[150];

	ElDisciplina* pElDisciplinaPrim;
	ElDisciplina* pElDisciplinaAtual;

public:
	ListaDisciplinas(int nd = 1000, const char* n = "");
	~ListaDisciplinas();

	void setNome(const char* n);
	void incluaDisciplina(Disciplina* pdi);

	void listeDisciplinas();
	void listeDisciplinas2();
};

