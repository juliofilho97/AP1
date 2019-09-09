#ifndef CONCESSIONARIA_H
#define CONCESSIONARIA_H

#include<iostream>
#include<vector>
#include<string>
#include<iterator>
#include<algorithm>

#include "automovel.h"
#include "concessionaria.h"

using namespace std;


class concessionaria{

private:
	string nome;
	int cnpj;
	vector<automovel> listaConc;


public:
	static int numeroConc;

	//construtor
	concessionaria ();

	// destrutor
	~concessionaria ();


	concessionaria (string nome, int cnpj, const vector <automovel> listaConc);

	string get_nome();
	void set_nome(string nome_){nome = nome_; }
	int get_cnpj();
	int set_cnpj(int cnpj_){cnpj = cnpj_;}

	bool add_carro();

	bool lista_carro();

	int estoque();
	bool operator==(concessionaria a){
		return a.get_cnpj() == cnpj;
	}

};

#endif 
