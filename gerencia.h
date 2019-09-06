#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

#include "gerencia.h"
#include "automovel.h"

using namespace std;
gerencia listaConc

int main (){
	int x = -1;
	while (x!= 0) {
		cout << endl << " Escolha a opcao desejada: "<<endl
		<< "1 - Adiconar Automovel "<<endl
		<< " 2- Criar Concessionaria"<< endl
		<< "3 - Lista de Automoveis"<< endl
		<<"4- Autualizar uma Concessionaria"<< endl
		<< " 0 - Sair"<< endl
		<< endl<< " Digite sua Escolha: ";
	
		int x = get_int();

		switch (x){
			case 1: 
					listaConc.add_carro();
					break;
			case 2: 
					listaConc.criar_conc();
					break;
			case 3:
					listaConc.lista_carro();
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
