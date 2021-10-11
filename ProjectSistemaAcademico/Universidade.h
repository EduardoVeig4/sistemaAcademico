#pragma once
#include "Departamento.h"
class Universidade {
private:
	char nomeU[30];

	Departamento DACOC;
	Departamento DAEFI;
	Departamento DAELN;
	Departamento DAELT;
	Departamento DAEST;
	Departamento DAFIS;
	Departamento DAGEE;
	Departamento DAINF;
	Departamento DALEM;
	Departamento DAMAT;
	Departamento DAMEC;
	Departamento DAQBI;
	Departamento DEAAU;

public:
	Universidade(const char* nome = ""); // Construtor
	~Universidade(); // Destrutor

	void setNome(const char* nome = "");
	char* getNome();
};