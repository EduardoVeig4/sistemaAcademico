#include "Principal.h"
#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;

Principal::Principal() :
	// Chamar a construtora sem parâmetros é opcional, o C++ chama implicitamente, porém é recomendável chamá-la
	Einstein(),
	Newton(),
	Simao()
{
	Simao.inicializa(3, 10, 1976, "Jean Simão");
	Einstein.inicializa(14, 3, 1879, "Albert Einstein");
	Newton.inicializa(4, 1, 1643, "Isaac Newton");

	UTFPR.setNome("UTFPR");

	// Aqui os objetos UTFPR e Simao são associados.
	// Na verdade, UTFPR é associado ao Simao via uma passagem por referência do 'endereço' dela.
	Simao.setUnivFiliado(&UTFPR);

	/*
	// Pergunta ao usuário a data
	cout << "Informe o dia/mes/ano." << endl;
	cin >> diaAtual >> mesAtual >> anoAtual;
	*/

	// Pega a data atual (biblioteca Windows.h)
	SYSTEMTIME st;
	GetSystemTime(&st);

	diaAtual = st.wDay;
	mesAtual = st.wMonth;
	anoAtual = st.wYear;

	Executar(); // Execução do Objeto Principal
}

void Principal::Executar() {
	Simao.calc_idade_imprime(diaAtual, mesAtual, anoAtual);
	Einstein.calc_idade_imprime(diaAtual, mesAtual, anoAtual);
	Newton.calc_idade_imprime(diaAtual, mesAtual, anoAtual);

	Simao.OndeTrabalho();
}