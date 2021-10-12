#pragma once
// Se A inlui B, B não pode incluir A
class Universidade; // Pequeno artifício para contornar o problema

class Departamento{
private:
	char nomeD[130];

public:
	Departamento(); // Construtor
	~Departamento(); // Destrutor

	void setNome(const char* nomeD = "");
	char* getNome();
};

