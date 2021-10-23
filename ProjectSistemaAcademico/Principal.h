#pragma once // Impede que a classe seja incluida mais de uma vez
#include "Pessoa.h"
#include "Universidade.h"
#include "Professor.h"
#include "Disciplina.h"

class Principal {
private:

	// Universidades
	// UTFPR é agregada ao objeto desta classe
	Universidade UTFPR;
	Universidade Princeton;
	Universidade Cambridge;
/*---------------------------------------------------------------------------------*/
	// Departamentos
	Departamento DAELN;
	Departamento MatematicaUTFPR;
	Departamento FisicaUTFPR;

	Departamento FisicaPrinceton;
	Departamento MatematicaPrinceton;

	Departamento FisicaCambridge;
	Departamento MatematicaCambridge;
/*---------------------------------------------------------------------------------*/
	// Professores
	Professor Simao;
	Professor Einstein;
	Professor Newton;
/*---------------------------------------------------------------------------------*/
	// Disciplinas
	Disciplina Computacao1_2006;
	Disciplina Introd_Alg_2007;
	Disciplina Computacao2_2007;
	Disciplina Metodos2_2007;
/*---------------------------------------------------------------------------------*/
	int diaAtual, mesAtual, anoAtual;

public:
	Principal();
	~Principal();
/*---------------------------------------------------------------------------------*/
	// Inicializações
	void Inicializa();
	void InicializaUniversidades();
	void InicializaDepartamentos();
	void InicializaProfessores();
	void InicializaDisciplinas();
/*---------------------------------------------------------------------------------*/
	void Executar();
/*---------------------------------------------------------------------------------*/
	void CalcIdadeProfs();
	void UnivOndeProfsTrabalham();
	void DepOndeProfsTrabalham();
	void ListeDiscDeptos();
};
