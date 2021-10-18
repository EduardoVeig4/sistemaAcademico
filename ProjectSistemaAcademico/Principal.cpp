#include "Principal.h"
#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;

int main() {
	Principal obj;
	obj.Executar();
}

Principal::Principal() :
	// Chamar a construtora sem parâmetros é opcional, o C++ chama implicitamente, porém é recomendável chamá-la
	Einstein(),
	Newton(),
	Simao()
{
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

	// Inicialização dos objetos da classe Pessoa
	Simao.inicializa(3, 10, 1976, "Jean Simão");
	Einstein.inicializa(14, 3, 1879, "Albert Einstein");
	Newton.inicializa(4, 1, 1643, "Isaac Newton");

	// Registro dos nomes das universidades
	UTFPR.setNome("UTFPR");
	Princeton.setNome("University of Princeton");
	Cambridge.setNome("University od Cambridge");

	// Registro dos nomes dos departamentos
	DAELN.setNome("Eletronica");
	FisicaPrinceton.setNome("Fisica");
	MatematicaCambridge.setNome("Matematica");

	// Agragação dos Departamentos as Universidades
	UTFPR.setDepartamento(&DAELN, 0);
	Princeton.setDepartamento(&FisicaPrinceton, 0);
	Cambridge.setDepartamento(&MatematicaCambridge, 0);

	// Aqui os objetos UTFPR e Simao são associados.
	// Na verdade, UTFPR é associado ao Simao via uma passagem por referência do 'endereço' dela.
	//Simao.setUnivFiliado(&UTFPR);

	// 'Filiação' a universidade
	Simao.setUnivFiliado(&UTFPR);
	Einstein.setUnivFiliado(&Princeton);
	Newton.setUnivFiliado(&Cambridge);
	printf("\n");

	// 'Filiação' ao departamento
	Simao.setDepartamento(&DAELN);
	Einstein.setDepartamento(&FisicaPrinceton);
	Newton.setDepartamento(&MatematicaCambridge);
	printf("\n");

	// Executar(); // Execução do Objeto Principal
}

Principal::~Principal(){}

void Principal::Executar() {
	// Cálculo da idade
	Simao.calc_idade_imprime(diaAtual, mesAtual, anoAtual);
	Einstein.calc_idade_imprime(diaAtual, mesAtual, anoAtual);
	Newton.calc_idade_imprime(diaAtual, mesAtual, anoAtual);
	printf("\n");

	// Universidade que a Pessoa trabalha
	Simao.OndeTrabalho();
	Einstein.OndeTrabalho();
	Newton.OndeTrabalho();
	printf("\n");

	// Departamento que a Pessoa trabalha
	Simao.QualDepartamentoTrabalho();
	Einstein.QualDepartamentoTrabalho();
	Newton.QualDepartamentoTrabalho();
}