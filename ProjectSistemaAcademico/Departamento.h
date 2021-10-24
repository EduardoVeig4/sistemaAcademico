#pragma once
#include "stdafx.h"

// Se A inlui B, B n�o pode incluir A
class Universidade; // Pequeno artif�cio para contornar o problema
class Disciplina;
class ListaDisciplinas;

class Departamento{
private:

	char nomeD[130];
/*---------------------------------------------------------------------------------*/
	// Associa��o para com uma Universidade
	Universidade* pUniv;
/*---------------------------------------------------------------------------------*/
	// Associa��o para com v�rias Disciplinas
	ListaDisciplinas* pObjLDisciplinas;

public:
	Departamento(); // Construtor
	~Departamento(); // Destrutor
/*---------------------------------------------------------------------------------*/
	void setNome(const char* nomeD);
	char* getNome();
/*---------------------------------------------------------------------------------*/
	void setUniversidade(Universidade* pu);
	Universidade* getUniversidade();
/*---------------------------------------------------------------------------------*/
	void incluaDisciplina(Disciplina* pd);
	void listeDisciplinas();
	void listeDisciplinas2();
};

