#include "Departamento.h"
#include "Universidade.h"
#include "Disciplina.h"
#include "ListaDisciplinas.h"

// Construtora e Destrutora
Departamento::Departamento(int Id){
	id = Id;
	pObjLDisciplinas = new ListaDisciplinas(-1);
}

Departamento::~Departamento(){
	if (pObjLDisciplinas) {
		delete pObjLDisciplinas;
	}
}

// Sets e Gets
void Departamento::setNome(const char* n) {
	strcpy(nome, n);
}
char* Departamento::getNome() {
	return nome;
}

void Departamento::setUniversidade(Universidade* pu) {
	pUniv = pu;
}

Universidade* Departamento::getUniversidade() {
	return pUniv;
}

int Departamento::getId() {
	return id;
}

// Métodos de inclusão na lista e de listagem
void Departamento::incluaDisciplina(Disciplina* pdi) {
	pObjLDisciplinas->incluaDisciplina(pdi);
	pdi->setDepartamento(this);
}

void Departamento::listeDisciplinas() {
	pObjLDisciplinas->listeDisciplinas();
}

/*
void Departamento::listeDisciplinas2() {
	pObjLDisciplinas->listeDisciplinas2();
}
*/