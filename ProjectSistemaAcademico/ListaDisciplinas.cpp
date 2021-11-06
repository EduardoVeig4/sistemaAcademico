#include "ListaDisciplinas.h"

// Construtora e Destrutora
ListaDisciplinas::ListaDisciplinas(int nd/*, const char* n*/) {
	numero_disc = nd;
	cont_disc = 0;

	pElDisciplinaPrim = NULL;
	pElDisciplinaAtual = NULL;

	//strcpy(nome, n);
}

ListaDisciplinas::~ListaDisciplinas() {
	ElDisciplina* paux1, * paux2;

	paux1 = pElDisciplinaPrim;
	paux2 = paux1;

	// Desaloca todos os elementos da lista
	while (paux1 != NULL) {
		paux2 = paux1->pProx;
		delete(paux1); // Libera a memória alocada dinamicamente
		paux1 = paux2;
	}

	pElDisciplinaPrim = NULL;
	pElDisciplinaAtual = NULL;
}

/*
void ListaDisciplinas::setNome(const char* n) {
	strcpy(nome, n);
}
*/

void ListaDisciplinas::incluaDisciplina(Disciplina* pdi)
{
	if (((cont_disc < numero_disc) && (pdi != NULL)) ||((numero_disc == -1) && (pdi != NULL))){

		// Aqui é criado um ponteiro para LAluno
		ElDisciplina* paux;

		// Aqui é criado um objeto LAluno, sendo seu
		// endereço armazenado em aux
		paux = new ElDisciplina();

		// Aqui recebe uma cópia do objeto interm.
		paux->setDisciplina(pdi);

		if (pElDisciplinaPrim == NULL){
			pElDisciplinaPrim = paux;
			pElDisciplinaAtual = paux;
		}
		else{
			pElDisciplinaAtual->pProx = paux;
			paux->pAnte = pElDisciplinaAtual;
			pElDisciplinaAtual = paux;
		}
		cont_disc++;
	}
	else{
		cout << " Disciplina não incluída " << " Quantia de disc. já lotada em " << numero_disc << " disciplinas." << endl;
	}
}

void ListaDisciplinas::listeDisciplinas(){
	ElDisciplina* paux;
	paux = pElDisciplinaPrim;
	if (paux == NULL) {
		cout << "nenhuma disciplina cadastrada" << endl;
		return;
	}

	while (paux != NULL){
		cout << " Disciplina " << paux->getNome()
			<< " do Departamento " << paux->getDepartamento()->getNome() << "." << endl;
		paux = paux->pProx;
	}
	cout << endl;
}

/*
void ListaDisciplinas::listeDisciplinas2(){
	ElDisciplina* paux;
	paux = pElDisciplinaAtual;

	while (paux != NULL){
		cout << " Disciplina " << paux->getNome()
			<< " do Departamento " << nome << "." << endl;
		paux = paux->pAnte;
	}
}
*/

// Localiza uma Disciplina de nome 'n' na lista de disciplinas
Disciplina* ListaDisciplinas::localizar(char* n){
	ElDisciplina* paux;
	paux = pElDisciplinaPrim;

	while (paux != NULL){
		if (0 == strcmp(n, paux->getNome())){
			return paux->getDisciplina();
		}
		paux = paux->pProx;
	}
	return NULL;
}

ElDisciplina* ListaDisciplinas::getDisciplinaPrim() {
	return pElDisciplinaPrim;
}