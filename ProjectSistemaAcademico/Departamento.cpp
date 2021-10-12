#include "Departamento.h"
#include <string.h>
#include <iostream>

#include "Universidade.h"

Departamento::Departamento(){
	strcpy(nomeD, "");
}

Departamento::~Departamento() {}

void Departamento::setNome(const char* nome) {
	strcpy(nomeD, nome);
}
char* Departamento::getNome() {
	return nomeD;
}