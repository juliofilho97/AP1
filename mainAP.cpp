#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

#include "gerenciar.h"
#include "automovel.h"
#include "concessionaria.h"

using namespace std;
gerenciar listaConc;

int automovel::numeroCarros = 0;
int concessionaria::numeroConc = 0;

int main (){
	int x = -1;
	while (x!= 0){
		cout << endl << "Escolha a opção desejada"<<endl
		<< "Digite 1 - Adicionar Automóvel "<<endl
		<< "Digite 2 - Criar Concessionária"<< endl
		<< "Digite 3 - Lista de Automoveis"<< endl
		<< "Digite 0 - Sair"<< endl
		<< endl<< "Digite sua Escolha: ";
	
		cin >> x; 

		//ver como faz p parar de pular o cin

		switch (x){
			case 1: 
					listaConc.cadastrarCarro();
					break;
			case 2: 
					listaConc.criarconcessionaria ();
					break;
			case 3:
					listaConc.estoques();
			case 0:
					cout<<endl<< "Ate mais!" << endl;
					return 0;
			default:
			cin.clear();
			cin.ignore(200,'\n');
			cout << endl << "Entrada inválida, digite novamente" <<endl;
		}
	}
	return 0;


}
