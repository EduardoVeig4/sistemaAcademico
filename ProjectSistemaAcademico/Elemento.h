#pragma once
#include "stdafx.h"

template <class TIPO>
class Elemento {
private:
	
	Elemento<TIPO>* pProximo;
	Elemento<TIPO>* pAnterior;

	TIPO* pInfo;
	string nome;

public:

	// Construtora e Destrutora
	Elemento();
	~Elemento();

	// Sets e Gets
	void setProximo(Elemento<TIPO>* pp);
	Elemento<TIPO>* getProximo();

	void setAnterior(Elemento<TIPO>* pa);
	Elemento<TIPO>* getAnterior();

	void setInfo(TIPO* pi);
	TIPO* getInfo();

	void setNome(string n);
	string getNome();
};

template<class TIPO>
Elemento <TIPO>::Elemento() {
	pProximo = NULL;
	pAnterior = NULL;
	pInfo = NULL;
}

// Implementação dos métodos
template<class TIPO>
Elemento <TIPO>::~Elemento() {}

// Sets e Gets
template<class TIPO>
void Elemento <TIPO>::setProximo(Elemento<TIPO>* pp) {}

template<class TIPO>
Elemento<TIPO>* Elemento <TIPO>::getProximo() {
	return pProximo;
}

template<class TIPO>
void Elemento <TIPO>::setAnterior(Elemento<TIPO>* pa) {
	pAnterior = pa;
}

template<class TIPO>
Elemento<TIPO>* Elemento <TIPO>::getAnterior() {
	return pAnterior;
}

template<class TIPO>
void Elemento <TIPO>::setInfo(TIPO* pi) {
	pInfo = pi;
}

template<class TIPO>
TIPO* Elemento <TIPO>::getInfo() {
	return pInfo;
}

template<class TIPO>
void Elemento <TIPO>::setNome(string n) {
	nome = n;
}

template<class TIPO>
string Elemento <TIPO>::getNome() {
	return nome;
}
