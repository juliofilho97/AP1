#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

#include "gerenciar.h"
#include "automovel.h"
#include "concessionaria.h"

using namespace std;

concessionaria::concessionaria(){

}
concessionaria::concessionaria(string nome, int cnpj, const vector< automovel *>listaConc)
{
	set_nome(nome);
	set_cnpj(cnpj);
	++numeroConc;
}
concessionaria::~concessionaria(){
	--numeroConc;

}


string Empresa::get_nome(){
	return nome;
}

int Empresa::get_cnpj(){
	return cnpj;
}



bool concessionaria::add_carro(){
	string chassi;
	string marca;
	float preco;

	cout << endl << "-> Digite os dados do carro : ";

	cout << endl << "Numero do Chassi : ";
	getline(cin, chassi);

	// Ira conferir apenas o chassi pois o chassi é como se fosse o cpf do carro, é unico
	automovel *func = new automovel(chassi);

	for (vector <automove *l> iterator it = listaConc.begin(); it != listaConc.end();it++)
	{
		if (**it == *func){
			cout << endl << "Carro ja cadastrado. Operacao CANCELADA !"<< endl;
			return false;
			
		}
	}

	cout << endl << "Marca : ";
	getline(cin,marca);

	cout << endl << "Preco : ";	
	preco = get_int();

	listaConc.push_back(func);

	return true;

}

int concessionaria::estoque(){
	return listaConc.size();
}












