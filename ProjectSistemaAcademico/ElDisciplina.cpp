#include "ElDisciplina.h"

ElDisciplina::ElDisciplina()
{
	pProx = NULL;
	pAnte = NULL;
}
ElDisciplina::~ElDisciplina()
{
	pProx = NULL;
	pAnte = NULL;
}
void ElDisciplina::setDisciplina(Disciplina* pdi)
{
	pDisciplina = pdi;
}
Disciplina* ElDisciplina::getDisciplina()
{
	return pDisciplina;
}
char* ElDisciplina::getNome()
{
	return pDisciplina->getNome();
}