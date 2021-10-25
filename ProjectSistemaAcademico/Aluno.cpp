#include "Aluno.h"

Aluno::Aluno(int i):Pessoa(id) {
	ra = 0;
}

void Aluno::setRA(int numRa) {
	ra = numRa;
}

int Aluno::getRA() {
	return ra;
}

void Aluno::setDisciplina(Disciplina* pd) {
	pDiscAssociada = pd;
}

Disciplina* Aluno::getDisciplina() {
	return pDiscAssociada;
}

int Aluno::getId() {
	return id;
}