#include "ElAluno.h"

// Classe de enclapsulamento para a classe Aluno

// Construtora e Destrutora
ElAluno::ElAluno(){}
ElAluno::~ElAluno(){}


// Gets e Sets
void ElAluno::setAluno(Aluno* pa) {
	pAluno = pa;
}

Aluno* ElAluno::getAluno() {
	return pAluno;
}

const char* ElAluno::getNome() {
	return pAluno->getNome();
}

Disciplina* ElAluno::getDisciplina() {
	return pAluno->getDisciplina();
}
