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
concessionaria::concessionaria(string nome, int cnpj, const vector< automovel>listaConc)
{
	set_nome(nome);
	set_cnpj(cnpj);
	++numeroConc;
}
concessionaria::~concessionaria(){
	--numeroConc;

}


string concessionaria::get_nome(){
	return nome;
}

int concessionaria::get_cnpj(){
	return cnpj;
}



bool concessionaria::add_carro(){
	string chassi;
	string marca;
	float preco;

	cout << endl << "-> Digite os dados do carro : ";

	cout << endl << "Numero do Chassi : ";
	getline(cin, chassi);

	cout << endl << "Marca : ";
	getline(cin,marca);

	cout << endl << "Preco : ";	
	preco=10;
	//cin >> preco;

	// Ira conferir apenas o chassi pois o chassi é como se fosse o cpf do carro, é unico
	automovel func = automovel(marca, preco, chassi);

	for (int i = 0; i < listaConc.size(); i++)
	{
		if (listaConc[i] == func){
			cout << endl << "Carro ja cadastrado. Operacao CANCELADA !"<< endl;
			return false;
			
		}
	}

	listaConc.push_back(func);

	return true;

}

int concessionaria::estoque(){
	return listaConc.size();
}












