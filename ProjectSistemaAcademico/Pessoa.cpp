#include "Pessoa.h"

// Função Construtora
Pessoa::Pessoa(int Id): nomeP("") {
	id = Id;
	idadeP = 0;
}

Pessoa::~Pessoa(){}

void Pessoa::inicializa(int diaNa, int mesNa, int anoNa, const char* nome) {
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

void Pessoa::setId(int i) {
	id = i;
}
int Pessoa::getId() {
	return id;
}

void Pessoa::setNome(const char* n) {
	strcpy(nomeP, n);
}

char* Pessoa::getNome() {
	return nomeP;
}