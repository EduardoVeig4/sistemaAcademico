#pragma once
#include "stdafx.h"

#include "ListaAlunos.h"
#include "Departamento.h"

class Disciplina{
private:

	int id;
	char nome[150];
	char area_conhecimento[150];

	Departamento* pDeptoAssociado; // Associa cada Disciplina a um Departamento

	ListaAlunos ObjLAlunos;

public:

	Disciplina(int id, int tamanho_lista = 45, const char* ac = ""); // Número de aluno 'na' que por padrão é 45
	~Disciplina();

	void setId(int i);
	int getId();

	void setNome(const char* n);
	const char* getNome();

	void setDepartamento(Departamento* pd); // Associa cada Disciplina a um Departamento
	Departamento* getDepartamento();

	void incluaAluno(Aluno* pa);
	void listeAlunos();
	// void listeAlunos2();
};

