#include "Disciplina.h"
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

Disciplina::Disciplina(const char* ac) {
	id = NULL;
	pDeptoAssociado = NULL;
	pProx = NULL;
	strcpy(area_conhecimento, ac);
}

Disciplina::~Disciplina() {
	pDeptoAssociado = NULL;
	pProx = NULL;
}

void Disciplina::setId(int n) {
	id = n;
}

int Disciplina::getId() {
	return id;
}

void Disciplina::setNome(const char* n) {
	strcpy(nome, n);
}

char* Disciplina::getNome() {
	return nome;
}

void Disciplina::setDepartamento(Departamento* pdpto) {
	pDeptoAssociado = pdpto;
}

Departamento* Disciplina::getDepartamento() {
	return pDeptoAssociado;
}

/*
void Disciplina::setProx(Disciplina* prox) {
	pProx = prox;
}

Disciplina* Disciplina::getProx() {
	return pProx;
}
*/