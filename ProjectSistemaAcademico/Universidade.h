#pragma once
class Universidade {
private:
	char nomeU[30];

public:
	Universidade(const char* nome = ""); // Construtor
	~Universidade(); // Destrutor

	void setNome(const char* nome = "");
	char* getNome();
};