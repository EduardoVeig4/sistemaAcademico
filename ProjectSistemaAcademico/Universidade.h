#pragma once
#include "Departamento.h"
#include <vector> // Faz aloca��o e desaloca��o
// #include <list>
using namespace std;

class Universidade {
private:

	char nomeU[30];
/*---------------------------------------------------------------------------------*/
	//Departamento* pDpto[50]; // Ponteiro para Departamento
	vector< Departamento* > LpDptos;
	// list< Departamento* > LpDptos; // Usando list ao inv�s de vector

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