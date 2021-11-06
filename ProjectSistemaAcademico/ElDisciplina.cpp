#include "ElDisciplina.h"

// Classe de encapsulamento para a classe disciplina

// Construtora e Destrutora
ElDisciplina::ElDisciplina() {}
ElDisciplina::~ElDisciplina() {}


// Gets e Sets
void ElDisciplina::setDisciplina(Disciplina* pdi){
	pDisciplina = pdi;
}

Disciplina* ElDisciplina::getDisciplina(){
	return pDisciplina;
}

const char* ElDisciplina::getNome(){
	return pDisciplina->getNome();
}

Departamento* ElDisciplina::getDepartamento() {
	return pDisciplina->getDepartamento();
}