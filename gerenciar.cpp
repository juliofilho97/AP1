#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

#include "gerenciar.h"
#include "automovel.h"
#include "concessionaria.h"

using namespace std;
using std::string;
using std::getline;

gerenciar::gerenciar(){
	listaLoja = {}; 
}

gerenciar::~gerenciar(){
	
}

concessionaria gerenciar::criarconcessionaria (){
	string nome;
	int cnpj;
	vector <automovel> listaConc;

	
	cout << "Informe o nome da concessionaria: ";
	getline(cin,nome);

	cout << endl<< "Informe o CNPJ da concessionaria: ";
	cin >> cnpj; 

	concessionaria novaConc = concessionaria(nome,cnpj,listaConc);
	statusConc status = inexistente;

	for ( int i = 0; i < listaLoja.size(); ++i){
		if (listaLoja[i] == novaConc){
			cout << endl << "Concessionaria existente. Tente outra vez";
			status = existe;
		}
	}

	if (status == inexistente){
			listaLoja.push_back(novaConc);
			cout<< endl << "Concessionaria Inaugurada."<< endl;
	}

	return novaConc;

}


void gerenciar::cadastrarCarro(){

	cout << endl << "Deseja cadastrar o carro em qual concessionaria? " <<endl<< "Concessionarias:" << endl << endl;


	for (int i = 0; i < listaLoja.size(); ++i){
		cout << listaLoja[i].get_nome() << endl;
	}

	cout << endl << "Digite a concessionaria: ";
	string nome;
	getline(cin,nome);
	statusConc status = inexistente;

	for (int i = 0; i < listaLoja.size(); ++i){
		if (listaLoja[i].get_nome() == nome){
			status = existe;
			if (listaLoja[i].add_carro()){
				status = carroCadastrado;
			} 
		}
	}
	if (status == inexistente){
		cout << endl << "Concessionaria nao encontrada. Tente novamente." << endl;
	} 
	else if (status == carroCadastrado){
		cout << endl << "Carro cadastrado." << endl;
	} 
	else{
		cout << endl << "Carro ja cadastrado." << endl;
	}
	return;
}

bool gerenciar::estoques (){

	cout << endl << "Estoque de qual concessionaria quer acessar? " << endl << "Concessionarias:" << endl << endl;
			  
	for ( int i = 0; i < listaLoja.size(); ++i){
		cout << listaLoja[i].get_nome() << endl;
	}

	cout << endl << "Digite a concessionaria: ";
	string nome;
	getline(cin,nome);

	for ( int i = 0; i < listaLoja.size(); ++i){
		if (listaLoja[i].get_nome() == nome){
			cout << endl << " O estoque da " << nome << " possui: "<< endl;
			//cout << listaLoja[i]; (Implementar a sobrecarga do operador <<)
			return true;
		}
	}
	cout << endl << "Concessionaria nao encontrada. Tente novamente." << endl;
	return false;
}
























