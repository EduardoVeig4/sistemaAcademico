#include "Universidade.h"
#include <string.h>

Universidade::~Universidade() {
}

Universidade::Universidade(const char* n) {
	strcpy(nomeU, n);
}

void Universidade::setNome(const char* nome) {
	strcpy(nomeU, nome);
}

char* Universidade::getNome() {
	return nomeU;
}