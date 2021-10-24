#include "ElAluno.h"

void ElAluno::setAluno(Aluno* pa) {
	pAL = pa;
}

Aluno* ElAluno::getAluno() {
	return pAL;
}

char* ElAluno::getNome() {
	return pAL->getNome();
}
