#pragma once
#include "stdafx.h"

#include "Aluno.h"

class ElAluno{
private:
	Aluno* pAL;
	
public:
	ElAluno();
	~ElAluno();

	ElAluno* pProx; // Colocar no private depois
	ElAluno* pAnte; // Colocar no private depois

	void setAluno(Aluno* pa);
	Aluno* getAluno();
	char* getNome();
};

