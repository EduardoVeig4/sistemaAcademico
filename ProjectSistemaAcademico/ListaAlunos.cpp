#include "ListaAlunos.h"
#include "Disciplina.h"


// Construtoras e Destrutora
ListaAlunos::ListaAlunos(int na/*, const char* n*/) {
	numero_alunos = na;
	cont_alunos = 0;

	pElAlunoPrim = NULL;
	pElAlunoAtual = NULL;

	//strcpy(nome, n);
}

ListaAlunos::~ListaAlunos() {
	ElAluno* paux1, * paux2;
	paux1 = pElAlunoPrim;
	paux2 = paux1;

	// Desalocação dos elementos da lista
	while (paux1 != NULL) {
		paux2 = paux1->pProx;
		delete(paux1); // libera a memória alocada para a lista Alunos, liberando-destruindo cada objeto criado dinamicamente
		paux1 = paux2;
	}

	pElAlunoPrim = NULL;
	pElAlunoAtual = NULL;
}

/*
void ListaAlunos::setNome(const char* n) {
	strcpy(nome, n);
}

char* ListaAlunos::getNome() {
	return nome;
}
*/

void ListaAlunos::incluaAluno(Aluno* pa) { // Inclui um novo aluno se houver espaço e a entrada for válida
	if ((cont_alunos < numero_alunos) && (pa != NULL)) {

		ElAluno* paux = NULL; // Criado o ponteiro para ElAluno

		/* Equivalente ao 'maloc' memory alocation do C */
		paux = new ElAluno; // Criado um objeto ElAluno, sendo seu endereço armazenado em aux

		paux->setAluno(pa); // Aqui recebe uma cópia do objeto interm.

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
	else {
		if (pa != NULL) {
			cout << "Aluno não incluído. Turma já lotada em " << numero_alunos << " alunos." << endl;
		}
		else {
			cout << "Ponteiro está nulo!" << endl;
		}
	}
}

void ListaAlunos::listeAlunos() {
	ElAluno* paux = NULL;
	paux = pElAlunoPrim;

	if (paux == NULL) {
		cout << "nenhum aluno cadastrado" << endl;
		return;
	}

	while (paux != NULL) {
		cout << "Aluno " << paux->getNome() << " matriculado em " << paux->getDisciplina()->getNome() << endl;
		paux = paux->pProx;
	}
	cout << endl; // Equivalente a \n
}


ElAluno* ListaAlunos::getAlunoPrim() {
	return pElAlunoPrim;
}
/*
void ListaAlunos::listeAlunos2() {
	ElAluno* paux = NULL;
	paux = pElAlunoAtual;
	while (paux != NULL) {
		cout << "Aluno " << paux->getNome() << " matriculado em " << nome << "\n" << endl;
		paux = paux->pAnte;
	}
}
*/