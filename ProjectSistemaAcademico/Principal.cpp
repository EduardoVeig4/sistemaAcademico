#include "Principal.h"

Principal::Principal() :

	// Chamar a construtora sem parâmetros é opcional, o C++ chama implicitamente, porém é recomendável chamá-la
	// Professores:
	Einstein(),
	Newton(),
	Simao(),

	// Alunos
	AAA(0),
	BBB(1),
	CCC(2),
	DDD(3),

	// Universidades:
	UTFPR(0),
	Princeton(1),
	Cambridge(2),

	// Departamentos:
	DAELN(0),
	DAMAT(1),
	DAFIS(2),

	MatematicaCambridge(3),
	FisicaCambridge(4),

	MatematicaPrinceton(5),
	FisicaPrinceton(6),

	// Disciplinas
	Computacao1_2006(0),
	Computacao2_2007(1),
	Introd_Alg_2007(2),
	Metodos2_2007(3)


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
	UTFPR.incluaDepartamento(&DAELN);
	UTFPR.incluaDepartamento(&DAMAT);
	UTFPR.incluaDepartamento(&DAFIS);
	Princeton.incluaDepartamento(&FisicaPrinceton);
	Cambridge.incluaDepartamento(&MatematicaCambridge);
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

// Menu ------------------------------------------------------------------------------------------------------
void Principal::Menu() {
	int op = -1;

	while (op != 3) {

		// O comando system nos permite dizer como o console irá se comportar
		system("cls"); // Comando para limpar a tela 'Clear Screen'
		cout << "Informe sua opção:    " << endl;
		cout << "1 - Cadastrar:        " << endl;
		cout << "2 - Executar:         " << endl;
		cout << "3 - Sair.             " << endl;
		cin >> op;


		switch (op) {
		case 1: { MenuCad(); }
			  break;

		case 2: { MenuExe(); }
			  break;

		case 3: { cout << "FIM" << endl; }
			  break;

		default: { 
			cout << "Opção inválida." << endl;
			system("Pause"); // Pause no console
		}
		}
	}
}

void Principal::MenuCad() {
	int op = -1;

	while (op != 4) {
		system("cls");
		cout << "Informe sua opção:    " << endl;
		cout << "1 - Cadastrar Disciplina." << endl;
		cout << "2 - Cadastrar Departamentos." << endl;
		cout << "3 - Cadastrar Universidade." << endl;
		cout << "4 - Sair.             " << endl;
		cin >> op;

		switch (op) {
		case 1: { CadDisciplina(); }
			  break;

		case 2: { CadDepartamento(); }
			  break;

		case 3: { CadUniversidade(); }
			  break;

		case 4: { cout << "FIM" << endl; }
			  break;

		default: {
			cout << "Opção Inválida." << endl;
			getchar();
		}
		}
	}
}

void Principal::MenuExe() {
	int op = -1;

	while (op != 4) {
		system("cls");
		cout << "Informe sua opção:    " << endl;
		cout << "1 - Listat Disciplina." << endl;
		cout << "2 - Listar Departamentos." << endl;
		cout << "3 - Listar Universidade." << endl;
		cout << "4 - Sair.             " << endl;
		cin >> op;

		switch (op) {
		case 1: { LDisciplinas.listeDisciplinas();
			fflush(stdin);
			getchar();
		}
			  break;

		case 2: { LDepartamentos.listeDepartamentos();
			fflush(stdin);
			getchar();
		}
			  break;

		case 3: { LUniversidades.listeUniversidades();
			fflush(stdin);
			getchar();
		}
			  break;

		case 4: { cout << "FIM" << endl; }
			  break;

		default: {
			cout << "Opção Inválida." << endl;
			getchar();
		}
		}
	}
}

void Principal::Executar() {
	CalcIdadeProfs();
	UnivOndeProfsTrabalham();
	DepOndeProfsTrabalham();
	// ListeDepPorUniv();
	// Metodos2.ListeAlunos();
	ListeDiscDeptos();
	ListeAlunosDisc();
	Menu();
}