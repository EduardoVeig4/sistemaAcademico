#pragma once
#include "Departamento.h"
class Universidade {
private:
	char nomeU[30];

	Departamento* pDpto[50]; // Ponteiro para Departamento

public:
	Universidade(); // Construtor
	~Universidade(); // Destrutor

	void setNome(const char* nome = "");
	char* getNome();
	void setDepartamento(Departamento* pdep, int ctd);
	void imprimeDpto();
};