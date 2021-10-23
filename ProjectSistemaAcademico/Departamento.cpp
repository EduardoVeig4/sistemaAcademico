#include "Departamento.h"
#include "Universidade.h"
#include "Disciplina.h"
#include <string.h>
#include <iostream>

Departamento::Departamento(){
	pDisciplPrim = NULL;
	pDisciplAtual = NULL;
}

Departamento::~Departamento(){
	pDisciplPrim = NULL;
	pDisciplAtual = NULL;
}

void Departamento::setNome(const char* nome) {
	strcpy(nomeD, nome);
}
char* Departamento::getNome() {
	return nomeD;
}

void Departamento::setUniversidade(Universidade* pu) {
	pUniv = pu;
}

Universidade* Departamento::getUniversidade() {
	return pUniv;
}

void Departamento::incluaDisciplina(Disciplina* pd) {
	if (pDisciplPrim == NULL) {
		pDisciplPrim = pd;
		pDisciplAtual = pd;
	}
	else {
		pDisciplAtual->pProx = pd;
		pDisciplAtual = pd;
	}
}

void Departamento::listeDisciplinas() {
	Disciplina* pAux;
	pAux = pDisciplPrim;

	while (pAux != NULL) {
		//printf("A disciplina %s pertence ao Departamento %s \n", pAux->getNome(), nomeD);
		cout << "A disciplina " << pAux->getNome() << " pertence ao Departamento " << nomeD << endl;
		pAux = pAux->pProx;
	}
}