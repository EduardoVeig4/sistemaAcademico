#include "Universidade.h"
#include <string.h>
#include <iostream>
#include <vector>
// #include <list>
using namespace std;

Universidade::~Universidade() {
}

Universidade::Universidade() {
	strcpy(nomeU, "");
	int tam = (int)LpDptos.size();
	for (int i = 0; i < tam; i++) { LpDptos[i] = NULL; }
}

void Universidade::setNome(const char* nome) { strcpy(nomeU, nome); }

char* Universidade::getNome() { return nomeU; }

void Universidade::setDepartamento(Departamento* pdep) {
	// Agrega��o via ponteiros
	//pDpto[ctd] = pdep;

	LpDptos.push_back(pdep); // Empurra o final do vetor o endere�o do ponteiro passado por par�metro
}

void Universidade::imprimeDpto() {
	int tam = (int)LpDptos.size();
	for (int i = 0; i < tam; i++) {
		cout << LpDptos[i]->getNome() << endl;
	}

	// Usando list
	/*
	list< Departamento* >::iterator iterador; // Tipo iterator pertence ao list

	for(iterador = LpDptos.begin(); iterador != LpDptos.end(); iterador++){
		pDep = *iterador;
		cout << (*iterador)->getNome() << end;
	}
	*/
}