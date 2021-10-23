#pragma once
// Se A inlui B, B não pode incluir A
class Universidade; // Pequeno artifício para contornar o problema
class Disciplina;

class Departamento{
private:

	char nomeD[130];
/*---------------------------------------------------------------------------------*/
	// Associação para com uma Universidade
	Universidade* pUniv;
/*---------------------------------------------------------------------------------*/
	// Associação para com várias Disciplinas
	Disciplina* pDisciplPrim;
	Disciplina* pDisciplAtual;

public:
	Departamento(); // Construtor
	~Departamento(); // Destrutor
/*---------------------------------------------------------------------------------*/
	void setNome(const char* nomeD);
	char* getNome();
/*---------------------------------------------------------------------------------*/
	void setUniversidade(Universidade* pu);
	Universidade* getUniversidade();
/*---------------------------------------------------------------------------------*/
	void incluaDisciplina(Disciplina* pd);
	void listeDisciplinas();
};

