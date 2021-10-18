#include "Professor.h"

Professor::Professor(int diaNa, int mesNa, int anoNa, const char* nome):
Pessoa(diaNa, mesNa, anoNa, nome){
		pUnivFiliado = NULL;
		pDptoFiliado = NULL;
}

Professor::Professor() :
Pessoa() {
	pUnivFiliado = NULL;
	pDptoFiliado = NULL;
}

Professor::~Professor() {
	pUnivFiliado = NULL;
	pDptoFiliado = NULL;
}

void Professor::setUnivFiliado(Universidade* pu) {
	pUnivFiliado = pu;
}

void Professor::setDepartamento(Departamento* pdep) {
	pDptoFiliado = pdep;
}

void Professor::OndeTrabalho() {
	// Um método da referência UnivFiliado é chamado
	cout << nomeP << " trabalha para a " << pUnivFiliado->getNome() << endl;
}

void Professor::QualDepartamentoTrabalho() {
	cout << nomeP << "trabalha para a " << pUnivFiliado->getNome() << pDptoFiliado->getNome() << endl;
}