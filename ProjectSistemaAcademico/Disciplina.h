#pragma once
#include "EveryThing.h"
#include "Departamento.h"
#include "ElAluno.h"

class Disciplina{
private:

	int id;
	char nome[150];
	char area_conhecimento[150];
/*---------------------------------------------------------------------------------*/
	ElAluno* pElAlunoPrim;
	ElAluno* pElAlunoAtual;
	int num_alunos;
	int cont_alunos;
/*---------------------------------------------------------------------------------*/
	Departamento* pDeptoAssociado; // Associa cada Disciplina a um Departamento

	//Disciplina* pProx; // *Melhor colocar private e fazer getProx();*
	//Disciplina* pAnte; // *Melhor colocar private e fazer getProx();*

public:

	Disciplina(int na = 45, const char* ac = ""); // Número de aluno 'na' que por padrão é 45
	~Disciplina();
/*---------------------------------------------------------------------------------*/
	void setId(int n);
	int getId();
/*---------------------------------------------------------------------------------*/
	void setNome(const char* n);
	char* getNome();
/*---------------------------------------------------------------------------------*/
	// Lista duplamente encadeada (Refazer como private)
	Disciplina* pProx;
	Disciplina* pAnte;
/*---------------------------------------------------------------------------------*/
	void setProx(Disciplina* prox);
	Disciplina* getProx();

	void setAnte(Disciplina* ante);
	Disciplina* getAnte();
/*---------------------------------------------------------------------------------*/
	void setDepartamento(Departamento* pdpto); // Associa cada Disciplina a um Departamento
	Departamento* getDepartamento();
/*---------------------------------------------------------------------------------*/
	void incluaAluno(Aluno* pa);
	void listeAlunos();
	void listeAlunos2();
};

