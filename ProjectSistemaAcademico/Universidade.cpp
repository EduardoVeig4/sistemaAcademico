#include "stdafx.h"

#include "Universidade.h"

Universidade::~Universidade() {
}

Universidade::Universidade(int Id) {
	id = Id;
}

void Universidade::setNome(const char* nome){
	strcpy(nomeU, nome);
}

char* Universidade::getNome(){
	return nomeU;
}

int Universidade::getId() {
	return id;
}

// metodos de inclusao na lista e de listagem
void Universidade::incluaDepartamento(Departamento* pd) {
	ObjLDepartamentos.incluaDepartamento(pd);
	pd->setUniversidade(this);

}
void Universidade::listeDepartamentos() {
	ObjLDepartamentos.listeDepartamentos();
}

/*
void Universidade::setDepartamento(Departamento* pdep) {
	// Agregação via ponteiros
	//pDpto[ctd] = pdep;

	LpDptos.push_back(pdep); // Empurra o final do vetor o endereço do ponteiro passado por parâmetro
}

void Universidade::imprimeDpto() {
	int tam = (int)LpDptos.size();
	for (int i = 0; i < tam; i++) {
		cout << LpDptos[i]->getNome() << endl;
	}

	// Usando list
	
	list< Departamento* >::iterator iterador; // Tipo iterator pertence ao list

	for(iterador = LpDptos.begin(); iterador != LpDptos.end(); iterador++){
		pDep = *iterador;
		cout << (*iterador)->getNome() << end;
	}
}
*/
