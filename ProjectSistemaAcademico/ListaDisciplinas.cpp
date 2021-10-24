#include "ListaDisciplinas.h"

ListaDisciplinas::ListaDisciplinas(int nd, const char* n) {
	num_disc = nd;
	cont_disc = 0;

	pElDisciplinaPrim = NULL;
	pElDisciplinaAtual = NULL;

	strcpy(nome, n);
}

ListaDisciplinas::~ListaDisciplinas() {
	ElDisciplina* paux1, * paux2;

	paux1 = pElDisciplinaPrim;
	paux2 = paux1;

	while (paux1 != NULL) {
		paux2 = paux1->pProx;
		delete(paux1);
		paux1 = paux2;
	}

	pElDisciplinaPrim = NULL;
	pElDisciplinaAtual = NULL;
}

void ListaDisciplinas::setNome(const char* n) {
	strcpy(nome, n);
}

void ListaDisciplinas::incluaDisciplina(Disciplina* pdi)
{
	if (
		((cont_disc < num_disc) && (pdi != NULL)) ||
		((num_disc == -1) && (pdi != NULL))
		)
	{
		// Aqui é criado um ponteiro para LAluno
		ElDisciplina* paux;
		// Aqui é criado um objeto LAluno, sendo seu
		// endereço armazenado em aux
		paux = new ElDisciplina();
		// Aqui recebe uma cópia do objeto interm.
		paux->setDisciplina(pdi);
		if (pElDisciplinaPrim == NULL)
		{
			pElDisciplinaPrim = paux;
			pElDisciplinaAtual = paux;
		}
		else
		{
			pElDisciplinaAtual->pProx = paux;
			paux->pAnte = pElDisciplinaAtual;
			pElDisciplinaAtual = paux;
		}
		cont_disc++;
	}
	else
	{
		cout << " Disciplina não incluída " << " Quantia de disc. já lotada em " << num_disc << " disciplinas." << endl;
	}
}

void ListaDisciplinas::listeDisciplinas()
{
	ElDisciplina* paux;
	paux = pElDisciplinaPrim;
	while (paux != NULL)
	{
		cout << " Disciplina " << paux->getNome()
			<< " do deparatamento " << nome << "." << endl;
		paux = paux->pProx;
	}
}
void ListaDisciplinas::listeDisciplinas2()
{
	ElDisciplina* paux;
	paux = pElDisciplinaAtual;
	while (paux != NULL)
	{
		cout << " Disciplina " << paux->getNome()
			<< " do Departamento " << nome << "." << endl;
		paux = paux->pAnte;
	}
}