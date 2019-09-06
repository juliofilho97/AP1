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
	while (x!= 0) {
		cout << endl << " Escolha a opcao desejada: "<<endl
		<< "1 - Adiconar Automovel "<<endl
		<< " 2- Criar Concessionaria"<< endl
		<< "3 - Lista de Automoveis"<< endl
		<< " 0 - Sair"<< endl
		<< endl<< " Digite sua Escolha: ";
	
		cin >> x;

		switch (x){
			case 1: 
					listaConc.cadastrarCarro();
					break;
			case 2: 
					listaConc.criarconcessionaria ();
					break;
			case 3:
					listaConc.estoques ();
			case 0:
					cout<<endl<< "Ate mais!"<< endl;
					return 0;
			default:
			cin.clear();
			cin.ignore(200,'\n');
			cout << endl << "Entrada invalida, digite novamente"<<endl;
		}
	}
	return 0;


}
