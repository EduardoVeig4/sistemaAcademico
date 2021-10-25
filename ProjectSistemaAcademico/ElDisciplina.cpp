#include "ElDisciplina.h"

ElDisciplina::ElDisciplina() {}
ElDisciplina::~ElDisciplina() {}

void ElDisciplina::setDisciplina(Disciplina* pdi){
	pDisciplina = pdi;
}

Disciplina* ElDisciplina::getDisciplina(){
	return pDisciplina;
}

char* ElDisciplina::getNome(){
	return pDisciplina->getNome();
}

Departamento* ElDisciplina::getDepartamento() {
	return pDisciplina->getDepartamento();
}