#pragma once
#include "stdafx.h"

// Se A inlui B, B não pode incluir A
class Universidade; // Pequeno artifício para contornar o problema
class Disciplina;
class ListaDisciplinas;

class Departamento{
private:

	char nome[130];

	// Associação para com uma Universidade
	Universidade* pUniv;

	// Associação para com várias Disciplinas
	ListaDisciplinas* pObjLDisciplinas;
	int id;

public:
	Departamento(int id); // Construtor
	~Departamento(); // Destrutor

	void setNome(const char* n);
	char* getNome();

	void setUniversidade(Universidade* pu);
	Universidade* getUniversidade();

	void incluaDisciplina(Disciplina* pdi);
	void listeDisciplinas();
	//void listeDisciplinas2();
	int getId();
};

