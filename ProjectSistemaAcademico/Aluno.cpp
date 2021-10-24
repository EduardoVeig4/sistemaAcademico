#include "Aluno.h"

Aluno::Aluno(int diaNa, int mesNa, int anoNa, const char* nome) :
Pessoa(diaNa, mesNa, anoNa, nome) { }

void Aluno::setNome(const char* n){
	strcpy(nome, n);
}

void Aluno::setRA(int numRa) {
	ra = numRa;
}

int Aluno::getRA() {
	return ra;
}
