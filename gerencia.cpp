#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

#include "gerencia.h"
#include "automovel.h"

using namespace std;


bool gerencia::add_carro(){
	string marca;
	float preco;
	string chassi;

	cout << endl << "-> Digite os dados do carro : "

	cout << endl << "Marca : ";
	getline(cin,marca);

	cout << endl << "Preco : ";	
	preco = get_int();

	cout << endl << "Numero do Chassi : ";
	getline(cin, chassi);

	// Ira conferir apenas o chassi pois o chassi é como se fosse o cpf do carro, é unico
	automovel *func = new automovel(chassi);

	for (vector<<automovel*> iterator it = listaConc.begin(); it != listaConc.end();it++)
	{
		if (**it == *func){
			cout << endl << "Carro ja cadastrado. Operacao CANCELADA !"<< endl;
			return false;
		}
	}
	listaConc.push_back(func);

	return true;

}












