#pragma once
#include "stdafx.h"

#include "ListaAlunos.h"
#include "Departamento.h"
#include "ElAluno.h"

class Disciplina{
private:

	int id;
	char nome[150];
	char area_conhecimento[150];

	ListaAlunos ObjLAlunos;

	Departamento* pDeptoAssociado; // Associa cada Disciplina a um Departamento

	//Disciplina* pProx; // *Melhor colocar private e fazer getProx();*
	//Disciplina* pAnte; // *Melhor colocar private e fazer getProx();*

public:

	Disciplina(int id, int na = 45, const char* ac = ""); // Número de aluno 'na' que por padrão é 45
	~Disciplina();
	// Lista duplamente encadeada (Refazer como private)
	//Disciplina* pProx;
	//Disciplina* pAnte;

	void setId(int i);
	int getId();

	void setNome(const char* n);
	char* getNome();

/*
	void setProx(Disciplina* prox);
	Disciplina* getProx();

	void setAnte(Disciplina* ante);
	Disciplina* getAnte();
*/

	void setDepartamento(Departamento* pdpto); // Associa cada Disciplina a um Departamento
	Departamento* getDepartamento();

	void incluaAluno(Aluno* pa);
	void listeAlunos();
	// void listeAlunos2();
};

