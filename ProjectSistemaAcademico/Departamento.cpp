#include "Departamento.h"
#include "Universidade.h"
#include "Disciplina.h"
#include "ListaDisciplinas.h"

Departamento::Departamento(){
	pObjLDisciplinas = new ListaDisciplinas(-1, "");
}

Departamento::~Departamento(){
	if (pObjLDisciplinas) {
		delete pObjLDisciplinas;
	}
}

void Departamento::setNome(const char* nome) {
	strcpy(nomeD, nome);
	pObjLDisciplinas->setNome(nome);
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
	pObjLDisciplinas->incluaDisciplina(pd);
}

void Departamento::listeDisciplinas() {
	pObjLDisciplinas->listeDisciplinas();
}

void Departamento::listeDisciplinas2() {
	pObjLDisciplinas->listeDisciplinas2();
}

/*	// Movido para ListaDisciplinas.cpp
void Departamento::incluaDisciplina(Disciplina* pd) {
	if (pDisciplPrim == NULL) {
		pDisciplPrim = pd;
		pDisciplAtual = pd;
	}
	else {
		//pDisciplAtual->getProx() = pd;
		//pd->getAnte() = pDisciplAtual;

		pDisciplAtual->pProx = pd;
		pd->pAnte = pDisciplAtual;
		pDisciplAtual = pd;
	}
}

void Departamento::listeDisciplinas() {
	Disciplina* pAux;
	pAux = pDisciplPrim;

	while (pAux != NULL) {
		//printf("A disciplina %s pertence ao Departamento %s \n", pAux->getNome(), nomeD);
		cout << "A disciplina " << pAux->getNome() << " pertence ao Departamento " << nomeD << endl;
		pAux = pAux->getProx();
	}
}

void Departamento::listeDisciplinas2() {
	Disciplina* pAux;
	pAux = pDisciplAtual;
	while (pAux != NULL) {
		cout << "A disciplina " << pAux->getNome() << " pertence ao Departamento " << nomeD << endl;
		pAux = pAux->getAnte();
	}
}
*/