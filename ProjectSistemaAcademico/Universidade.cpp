#include "Universidade.h"
#include <string.h>
#include <iostream>
using namespace std;

Universidade::~Universidade() {
}

Universidade::Universidade() {
	strcpy(nomeU, "");
	for (int i = 0; i < 50; i++) { pDpto[i] = NULL; }
}

void Universidade::setNome(const char* nome) { strcpy(nomeU, nome); }

char* Universidade::getNome() { return nomeU; }

void Universidade::setDepartamento(Departamento* pdep, int ctd) {
	// Agregação via ponteiros
	pDpto[ctd] = pdep;
}

void Universidade::imprimeDpto() {
	//Departamento* pDep = NULL;
	for (int i = 0; i < 50; i++) {
		//pDep = pDpto[i];
		if (pDpto[i] != NULL)//(pDep != NULL)
			cout << pDpto[i]->getNome() << endl; //cout << pDep->getNome() << endl;
	}
}