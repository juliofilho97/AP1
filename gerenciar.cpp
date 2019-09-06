#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

#include "concessionaria.h"
#include "automovel.h"
#include "gerenciar.h"

using namespace std;



gerenciar::gerenciar(){
	listaLoja = {}; 
}
gerenciar::~gerenciar(){
	
}

concessionaria gerenciar::criarconcessionaria (){
	string nome;
	int cnpj;
	vector <automovel*> listaConc;
	
	cout << endl << "Informe o nome da concessionaria : ";
	getline(cin, nome);

	cout << endl<< "Informe o CNPJ da concessionaria : ";
	cnpj = get_int();

	concessionaria *novaConc = new concessionaria(nome,cnpj);
	statusConc status = inexistente;

	for ( vector <concessionaria*>::iterator it = listaLoja.begin();it != listaLoja.end(); ++it){
		if (**it == *novaConc)
		{
			cout << endl << "concessionaria existente. tente outra"
			status = criada;
		}

	}
	if (status == inexistente)
		{
			listaLoja.push_back(novaConc);
			cout<< endl << "concessionaria inaugurada"<< endl;

		}
	return *novaConc;


}


void gerenciar::cadastrarCarro(){

	cout << endl << "Deseja cadastrar o carro em qual concessionaria? " <<endl
			  << "concessionarias:" << endl << endl;


	for (vector<concessionaria*>::iterator it = listaLoja.begin(); it != listaLoja.end(); ++it)
	{
		cout << (**it).get_nome() << endl;
	}

	cout << endl << "Digite a concessionaria: ";
	string nome;
	getline(cin,nome);
	statusConc status = inexistente;

	for (vector<concessionaria*>::iterator it = listaLoja.begin(); it != listaLoja.end(); ++it)
	{
		if ( (**it).get_nome() == nome){
			status = existe;
			if ((**it).cadastrarCarro())
			{
				status = carroCadastrado;
			} 
		}
	}
	if (status == inexistente)
	{
		cout << endl << " concessionaria nao encontrada tente novamente." << endl;
	} 
	else if (status == carroCadastrado)
	{
		cout << endl << "Carro cadastrado." << endl;
	} 
	else {
		cout << endl << "Carro ja cadastrado." << endl;
	}
	return;
}

bool gerenciar::estoques (){

	cout << endl << "estoque de qual concessionaria quer acessar? " << endl
			  << "concessionarias:" <<endl << endl;
	for (vector<concessionaria*>::iterator it = listaLoja.begin(); it != listaLoja.end(); ++it)
	{
		cout << (**it).get_nome() << endl;
	}
	cout << endl << "Digite a concessionaria: ";
	string nome;
	getline(cin,nome);
	for (vector<concessionaria*>::iterator it = listaLoja.begin(); it != listaLoja.end(); ++it)
	{
		if ( (**it).get_nome() == nome){
			cout << endl << " O estoque da " << nome << " possui: "<< endl;
			cout << (**it);
			return true;
	}
	cout << endl << " concessionaria nao encontrada tente novamente." << endl;
	return false

}






















