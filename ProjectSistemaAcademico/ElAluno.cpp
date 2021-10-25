#include "ElAluno.h"

// Classe de enclapsulamento para a classe Aluno
ElAluno::ElAluno(){}
ElAluno::~ElAluno(){}

void ElAluno::setAluno(Aluno* pa) {
	pAL = pa;
}

Aluno* ElAluno::getAluno() {
	return pAL;
}

const char* ElAluno::getNome() {
	return pAL->getNome();
}

Disciplina* ElAluno::getDisciplina() {
	return pAL->getDisciplina();
}
