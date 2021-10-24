#pragma once
#include "EveryThing.h"
#include "Departamento.h"

class Universidade {
private:

	char nomeU[30];
/*---------------------------------------------------------------------------------*/
	//Departamento* pDpto[50]; // Ponteiro para Departamento
	vector< Departamento* > LpDptos;
	// list< Departamento* > LpDptos; // Usando list ao invés de vector

public:

	Universidade(); // Construtor
	~Universidade(); // Destrutor
/*---------------------------------------------------------------------------------*/
	void setNome(const char* nome = "");
	char* getNome();
/*---------------------------------------------------------------------------------*/
	void setDepartamento(Departamento* pdep);
	void imprimeDpto();
};