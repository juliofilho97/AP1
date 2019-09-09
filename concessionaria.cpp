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

concessionaria::concessionaria(string nome, int cnpj, const vector< automovel>listaConc){
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
	double preco;

	cout << endl << "-> Digite os dados do carro";

	cout << endl << "Numero do Chassi: ";
	getline(cin, chassi);

	cout << endl << "Marca: ";
	getline(cin,marca);

	cout << endl << "Preço: ";	
	cin >> preco;


	// Ira conferir apenas o chassi pois o chassi é como se fosse o cpf do carro, é unico
	automovel auto = automovel(marca, preco, chassi);

	for (int i = 0; i < listaConc.size(); i++){
		if (listaConc[i] == auto){
			cout << endl << "Carro ja cadastrado. Operacao CANCELADA!" << endl;
			return false;	
		}
	}

	listaConc.push_back(auto);

	return true;
}


int concessionaria::estoque(){
	return listaConc.size();
}


std::ostream& operator<< (std::ostream &o, concessionaria &concessionaria){
	for (std::vector<automovel>::iterator i = concessionaria.listaConc.begin(); i != concessionaria.listaConc.end(); ++i)
	{
		o << (i) << std::endl;
	}
	return o;
}

bool concessionaria::operator==(const concessionaria &conc) const{
	if (this->nome == conc.nome){
		return true;
	} else {
		return false;
	}
}











