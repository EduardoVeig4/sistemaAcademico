#include "Disciplina.h"

Disciplina::Disciplina(int na, const char* ac) {
	pDeptoAssociado = NULL;
	pElAlunoPrim = NULL;
	pElAlunoAtual = NULL;
	pProx = NULL;
	pAnte = NULL;
	cont_alunos = 0;
	num_alunos = na;
	strcpy(area_conhecimento, ac);
}

Disciplina::~Disciplina() {
	pDeptoAssociado = NULL;
	pElAlunoPrim = NULL;
	pElAlunoAtual = NULL;
	pProx = NULL;
	pAnte = NULL;
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

	pdpto->incluaDisciplina(this); // Inclui a Disciplina atual no Departamento
}

Departamento* Disciplina::getDepartamento() {
	return pDeptoAssociado;
}

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

void Disciplina::incluaAluno(Aluno* pa){
	ElAluno* paux = NULL; // Criado o ponteiro para ElAluno

	/* Equivalente ao 'maloc' memory alocation do C */
	paux = new ElAluno; // Criado um objeto ElAluno, sendo seu endereço armazenado em aux

	paux->setAluno(pa); // Aqui recebe uma cópia do objeto interm.

	if ((cont_alunos < num_alunos) && (pa != NULL)) {
		if (pElAlunoPrim == NULL) {
			pElAlunoPrim = paux;
			pElAlunoAtual = paux;
		}
		else {
			pElAlunoAtual->pProx = paux;
			paux->pAnte = pElAlunoAtual;
			pElAlunoAtual = paux;
		}
		cont_alunos++;
	}
	else { cout << "Aluno não incluído. Turma já lotada\n" << endl; }
}

void Disciplina::listeAlunos() {
	ElAluno* paux = NULL;
	paux = pElAlunoPrim;
	while (paux != NULL) {
		cout << "Aluno " << paux->getNome() << " matriculado em " << nome << "\n" << endl;
		paux = paux->pProx;
	}
}

void Disciplina::listeAlunos2() {
	ElAluno* paux = NULL;
	paux = pElAlunoAtual;
	while (paux != NULL) {
		cout << "Aluno " << paux->getNome() << " matriculado em " << nome << "\n" << endl;
		paux = paux->pAnte;
	}
}