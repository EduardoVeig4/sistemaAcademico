#pragma once
class Departamento{
private:
	char nomeD[130];

public:
	Departamento(); // Construtor
	~Departamento(); // Destrutor

	void setNome(const char* nomeD = "");
	char* getNome();
};

