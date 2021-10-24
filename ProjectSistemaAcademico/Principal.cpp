#include "Principal.h"

int main() {
	Principal obj;
	obj.Executar(); // Execução do Objeto Principal
}

Principal::Principal() :
	// Chamar a construtora sem parâmetros é opcional, o C++ chama implicitamente, porém é recomendável chamá-la
	// Professores:
	Einstein(),
	Newton(),
	Simao(),

	// Alunos
	AAA(),
	BBB(),
	CCC(),
	DDD(),

	// Universidades:
	UTFPR(),
	Princeton(),
	Cambridge(),

	// Departamentos:
	DAELN(),
	DAMAT(),
	DAFIS(),

	MatematicaCambridge(),
	FisicaCambridge(),

	MatematicaPrinceton(),
	FisicaPrinceton(),

	// Disciplinas
	Computacao1_2006(),
	Computacao2_2007(),
	Introd_Alg_2007(),
	Metodos2_2007()

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

	// Aqui os objetos UTFPR e Simao são associados.
	// Na verdade, UTFPR é associado ao Simao via uma passagem por referência do 'endereço' dela.
	//Simao.setUnivFiliado(&UTFPR);

	Inicializa();
}

Principal::~Principal(){}

void Principal::Inicializa() {
	InicializaUniversidades();
	InicializaDepartamentos();
	InicializaProfessores();
	InicializaDisciplinas();
}

void Principal::InicializaUniversidades() {
	// Registro dos nomes das universidades
	UTFPR.setNome("UTFPR");
	Princeton.setNome("Princeton");
	Cambridge.setNome("Cambridge");
}

void Principal::InicializaDepartamentos() {
	// Registro dos nomes dos departamentos
	DAELN.setNome("Eletronica UTFPR");
	DAMAT.setNome("Matematica UTFPR");
	DAFIS.setNome("Fisica UTFPR");
	MatematicaPrinceton.setNome("Matematica Princeton");
	FisicaPrinceton.setNome("Fisica Princeton");
	MatematicaCambridge.setNome("Matematica Cambridge");
	FisicaCambridge.setNome("Fisica Cambridge");

	// Agragação dos Departamentos as Universidades
	UTFPR.setDepartamento(&DAELN);
	UTFPR.setDepartamento(&DAMAT);
	UTFPR.setDepartamento(&DAFIS);
	Princeton.setDepartamento(&FisicaPrinceton);
	Cambridge.setDepartamento(&MatematicaCambridge);
}

void Principal::InicializaProfessores() {
	// Inicialização dos objetos de classe Professor
	Simao.inicializa(3, 10, 1976, "Jean Simão");
	Einstein.inicializa(14, 3, 1879, "Albert Einstein");
	Newton.inicializa(4, 1, 1643, "Isaac Newton");

	// "Filiação" a universidade
	Simao.setUnivFiliado(&UTFPR);
	Einstein.setUnivFiliado(&Princeton);
	Newton.setUnivFiliado(&Cambridge);

	// Area de Conhecimento
	// Simao.setDominio("Computação");
	// Einstein.setDominio("Física");
	// Newton.setDominio("Matemática - Física");

	// "Filiação" ao departamento
	Simao.setDepartamento(&DAELN);
	Einstein.setDepartamento(&FisicaPrinceton);
	Newton.setDepartamento(&MatematicaCambridge);
}

void Principal::InicializaDisciplinas() {
	Computacao1_2006.setNome("Computação I");
	Introd_Alg_2007.setNome("Intro. de Alg. de Programação");
	Computacao2_2007.setNome("Computação II");
	Metodos2_2007.setNome("Métodos II");

	Computacao1_2006.setDepartamento(&DAELN);
	Computacao2_2007.setDepartamento(&DAELN);
	Introd_Alg_2007.setDepartamento(&DAELN);
	Metodos2_2007.setDepartamento(&DAELN);

	Computacao1_2006.incluaAluno(&AAA);
	Computacao1_2006.incluaAluno(&BBB);
	Computacao1_2006.incluaAluno(&CCC);
	Computacao1_2006.incluaAluno(&DDD);

	Computacao2_2007.incluaAluno(&AAA);
	Computacao2_2007.incluaAluno(&CCC);
	Computacao2_2007.incluaAluno(&DDD);
}

void Principal::InicializaAlunos() {
	AAA.setNome("Eduardo");
	BBB.setNome("Kendy");
	CCC.setNome("Pontes");
	DDD.setNome("Veiga");
}

void Principal::CalcIdadeProfs() {
	// Cálculo da idade
	Simao.calc_idade_imprime(diaAtual, mesAtual, anoAtual);
	Einstein.calc_idade_imprime(diaAtual, mesAtual, anoAtual);
	Newton.calc_idade_imprime(diaAtual, mesAtual, anoAtual);
	printf("\n");
}

void Principal::UnivOndeProfsTrabalham() {
	// Universidade que a Pessoa trabalha
	Simao.OndeTrabalho();
	Einstein.OndeTrabalho();
	Newton.OndeTrabalho();
	printf("\n");
}

void Principal::DepOndeProfsTrabalham() {
	// Departamento que a Pessoa trabalha
	Simao.QualDepartamentoTrabalho();
	Einstein.QualDepartamentoTrabalho();
	Newton.QualDepartamentoTrabalho();
	printf("\n");
}

void Principal::ListeDiscDeptos() {
	DAELN.listeDisciplinas();
	printf("\n");
}

void Principal::ListeAlunosDisc() {
	Computacao1_2006.listeAlunos();
	printf("\n");
}

void Principal::Executar() {
	CalcIdadeProfs();
	UnivOndeProfsTrabalham();
	DepOndeProfsTrabalham();
	// ListeDepPorUniv();
	// Metodos2.ListeAlunos();
	ListeDiscDeptos();
	ListeAlunosDisc();
}