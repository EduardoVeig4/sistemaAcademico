#pragma once
#include "stdafx.h"

#include "Disciplina.h"

class ElDisciplina{
private:
	Disciplina* pDisciplina;

public:
	ElDisciplina();
	~ElDisciplina();

	ElDisciplina* pProx;
	ElDisciplina* pAnte;

	void setDisciplina(Disciplina* pd);
	Disciplina* getDisciplina();

	char* getNome();

	Departamento* getDepartamento();
};

