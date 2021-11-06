#include "Aluno.h"

Aluno::Aluno(int i):Pessoa(id) {
	RA = 0;
}

Aluno::~Aluno() {}

// Sets e Gets
void Aluno::setRA(int ra) {
	RA = ra;
}

int Aluno::getRA() {
	return RA;
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