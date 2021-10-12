#include <string.h>
#include <iostream>
using std::cout; // inclui a biblioteca inteira 'using namespaca std;' ou somente o comando que vai ser utilizado
using std::endl;
using std::cin;
#include "Pessoa.h"

// Função Construtora
Pessoa::Pessoa(int diaNa, int mesNa, int anoNa, const char* nome) {
	inicializa(diaNa, mesNa, anoNa, nome);
}

Pessoa::Pessoa() {
	inicializa(0, 0, 0);
}

Pessoa::~Pessoa(){}

void Pessoa::inicializa(int diaNa, int mesNa, int anoNa, const char* nome) {
	idadeP = 0;
	diaP = diaNa;
	mesP = mesNa;
	anoP = anoNa;
	strcpy(nomeP, nome);
}

void Pessoa::calc_idade(int diaAT, int mesAT, int anoAT) {
	idadeP = anoAT - anoP;

	if (mesP > mesAT)
		idadeP = idadeP - 1;

	else
		if (mesP == mesAT)
			if (diaP < diaAT)
				idadeP = idadeP - 1;
}

void Pessoa::imprime_idade() {
	cout << nomeP << " idade: " << idadeP << endl; // printf("%s idade: %d", nomeP, idadeP);
}

void Pessoa::calc_idade_imprime(int diaAT, int mesAT, int anoAT) {
	calc_idade(diaAT, mesAT, anoAT);
	imprime_idade();
}

int Pessoa::getIdade() {
	return idadeP;
}

void Pessoa::setUnivFiliado(Universidade* pu) {
	pUnivFiliado = pu;
}

void Pessoa::setDepartamento(Departamento* pdep) {
	pDptoFiliado = pdep;
}

void Pessoa::OndeTrabalho() {
	// Um método da referência UnivFiliado é chamado
	cout << nomeP << " trabalha para a " << pUnivFiliado->getNome() << endl;
}

void Pessoa::QualDepartamentoTrabalho() {
	cout << nomeP << "trabalha para a " << pUnivFiliado->getNome() << pDptoFiliado->getNome() << endl;
}