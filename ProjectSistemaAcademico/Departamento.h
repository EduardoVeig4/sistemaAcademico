#pragma once
// Se A inlui B, B n�o pode incluir A
class Universidade; // Pequeno artif�cio para contornar o problema

class Departamento{
private:
	char nomeD[130];

public:
	Departamento(); // Construtor
	~Departamento(); // Destrutor

	void setNome(const char* nomeD = "");
	char* getNome();
};

