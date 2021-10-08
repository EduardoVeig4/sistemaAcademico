#include "Principal.h"
#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;

Principal::Principal() :
	// Chamar a construtora sem parâmetros é opcional, o C++ chama implicitamente, porém é recomendável chamá-la
	Einstein(),
	Newton()
{
	Einstein.inicializa(14, 3, 1879, "Albert Einstein");
	Newton.inicializa(4, 1, 1643, "Isaac Newton");

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
	Einstein.calc_idade_imprime(diaAtual, mesAtual, anoAtual);
	Newton.calc_idade_imprime(diaAtual, mesAtual, anoAtual);
}