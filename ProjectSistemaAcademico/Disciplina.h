#pragma once
#include "Departamento.h"
#include "Aluno.h"

class Disciplina{
private:

	int id;
	char nome[150];
	char area_conhecimento[150];
/*---------------------------------------------------------------------------------*/
	Departamento* pDeptoAssociado; // Associa cada Disciplina a um Departamento

	// Disciplina* pProx; // *Melhor colocar private e fazer getProx();*

public:

	Disciplina(const char* ac = "");
	~Disciplina();
/*---------------------------------------------------------------------------------*/
	void setId(int n);
	int getId();
/*---------------------------------------------------------------------------------*/
	void setNome(const char* n);
	char* getNome();
/*---------------------------------------------------------------------------------*/
	Disciplina* pProx;
/*---------------------------------------------------------------------------------*/
	//void setProx(Disciplina* prox);
	//Disciplina* getProx();
/*---------------------------------------------------------------------------------*/
	void setDepartamento(Departamento* pdpto); // Associa cada Disciplina a um Departamento
	Departamento* getDepartamento();
};

