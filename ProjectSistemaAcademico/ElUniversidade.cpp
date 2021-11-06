#include "ElUniversidade.h"

// classe de encapsulamento para a classe universidade

// Construtora e Destrutora
ElUniversidade::ElUniversidade() {}
ElUniversidade::~ElUniversidade() {}

void ElUniversidade::setUniversidade(Universidade *pa){
	pUniversidade = pa;
}

Universidade* ElUniversidade::getUniversidade(){
	return pUniversidade;
}

const char* ElUniversidade::getNome(){
	return pUniversidade->getNome();
}