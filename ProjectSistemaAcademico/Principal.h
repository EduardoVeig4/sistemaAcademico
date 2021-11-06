#pragma once // Impede que a classe seja incluida mais de uma vez
#include "stdafx.h"

#include "Pessoa.h"
#include "ListaUniversidades.h"
#include "ListaDepartamentos.h"
#include "ListaDisciplinas.h"

// Caso use a criação de objetos na 'Unha'
//#include "Professor.h"
//#include "ListaAlunos.h"

//#include "Universidade.h"
//#include "Disciplina.h"
//#include "Aluno.h"

class Principal {
private:

	// Contadores para identificadores
	int cont_idUniv;
	int cont_idDisc;
	int cont_idDepart;
	int cont_idAluno;
	
	/* Criação na 'Unha'
	// Universidades
	// UTFPR é agregada ao objeto desta classe
	Universidade UTFPR;
	Universidade Princeton;
	Universidade Cambridge;

	// Departamentos
	Departamento DAELN;
	Departamento DAMAT;
	Departamento DAFIS;

	Departamento FisicaPrinceton;
	Departamento MatematicaPrinceton;

	Departamento FisicaCambridge;
	Departamento MatematicaCambridge;

	// Professores
	Professor Simao;
	Professor Einstein;
	Professor Newton;

	// Disciplinas
	Disciplina Computacao1_2006;
	Disciplina Introd_Alg_2007;
	Disciplina Computacao2_2007;
	Disciplina Metodos2_2007;

	// Alunos
	Aluno AAA;
	Aluno BBB;
	Aluno CCC;
	Aluno DDD;
	*/

	//int diaAtual, mesAtual, anoAtual;

	// LISTAS
	// Criação dos Objetos dinamicamente
	ListaUniversidades LUniversidades;
	ListaDepartamentos LDepartamentos;
	ListaDisciplinas LDisciplinas;
	ListaAlunos LAlunos;

public:
	Principal();
	~Principal();

	void Executar();

	void CadDisciplina();
	void CadDepartamento();
	void CadUniversidade();
	void CadAluno();

	void GravarTudo();
	void GravarUniversidades();
	void GravarDepartamentos();
	void GravarDisciplinas();
	void GravarAlunos();

	void RecuperarTudo();
	void RecuperarUniversidades();
	void RecuperarDepartamentos();
	void RecuperarDisciplinas();
	void RecuperarAlunos();

	/*
	// Inicializações
	void Inicializa();
	void InicializaUniversidades();
	void InicializaDepartamentos();
	void InicializaProfessores();
	void InicializaDisciplinas();
	void InicializaAlunos();

	void CalcIdadeProfs();
	void UnivOndeProfsTrabalham();
	void DepOndeProfsTrabalham();
	void ListeDiscDeptos();
	void ListeAlunosDisc();
	*/

	void MenuCad();
	void MenuExe();
	void MenuGravar();
	void MenuRecuperar();
	void Menu();
};
