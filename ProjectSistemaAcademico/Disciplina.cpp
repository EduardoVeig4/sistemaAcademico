#include "Disciplina.h"

Disciplina::Disciplina(int id, int tamanho_lista, const char* ac) :
ObjLAlunos(tamanho_lista) // Construtor padrão

{
	pDeptoAssociado = NULL;
	//pProx = NULL;
	//pAnte = NULL;
	strcpy(area_conhecimento, ac);
}

Disciplina::~Disciplina() {
	//pProx = NULL;
	//pAnte = NULL;
	pDeptoAssociado = NULL;
}

void Disciplina::setId(int n) {
	id = n;
}

int Disciplina::getId() {
	return id;
}

void Disciplina::setNome(const char* n) {
	strcpy(nome, n);
}

char* Disciplina::getNome() {
	return nome;
}

void Disciplina::setDepartamento(Departamento* pdpto) {
	pDeptoAssociado = pdpto;

	//pdpto->incluaDisciplina(this); // Inclui a Disciplina atual no Departamento
}

Departamento* Disciplina::getDepartamento() {
	return pDeptoAssociado;
}

/*
// Ponteiros da lista duplamente encadeada das disciplinas
void Disciplina::setProx(Disciplina* prox) {
	pProx = prox;
}

Disciplina* Disciplina::getProx() {
	return pProx;
}

void Disciplina::setAnte(Disciplina* ante) {
	pAnte = ante;
}

Disciplina* Disciplina::getAnte() {
	return pAnte;
}
*/

void Disciplina::incluaAluno(Aluno* pa){
	ObjLAlunos.incluaAluno(pa);

	pa->setDisciplina(this);
}

void Disciplina::listeAlunos() {
	ObjLAlunos.listeAlunos();
}

/*
void Disciplina::listeAlunos2() {
	ObjLAlunos.listeAlunos2();
}
*/