#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

#include "gerenciar.h"
#include "automovel.h"
#include "concessionaria.h"

using namespace std;

automovel::automovel(){
		marca = " ";
		preco = 0;
		chassi = " ";
		++numeroCarros;

	}

automovel::automovel( string marca, float preco, string chassi){
	setMarca(marca);
	setPreco(preco);
	setChassi(chassi);
	++numeroCarros;
}

string automovel::getMarca(){
	return marca;
}
float automovel::getPreco(){
	return preco;
}

string automovel::getChassi(){
	return chassi;
}
