#pragma once
#include "stdafx.h"

#include "ListaDepartamentos.h"

class Universidade {
private:
	char nomeU[30];
	ListaDepartamentos ObjLDepartamentos;
	int id;

	//Departamento* pDpto[50]; // Ponteiro para Departamento
	//vector< Departamento* > LpDptos;
	// list< Departamento* > LpDptos; // Usando list ao invés de vector

public:
	Universidade(int id); // Construtor
	~Universidade(); // Destrutor

	void setNome(const char* nome = "");
	char* getNome();
	
	void incluaDepartamento(Departamento* pd);
	void listeDepartamentos();
	int getId();

	//void setDepartamento(Departamento* pdep);
	//void imprimeDpto();
};