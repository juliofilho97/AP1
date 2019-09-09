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

automovel::automovel(string marca, double preco, string chassi){
	setMarca(marca);
	setPreco(preco);
	setChassi(chassi);
	++numeroCarros;
}


string automovel::getMarca(){
	return marca;
}
double automovel::getPreco(){
	return preco;
}

string automovel::getChassi(){
	return chassi;
}



bool automovel::operator==(const automovel &auto) const {
	if (this->marca == auto.marca){
		return true;
	} else {
		return false;
	}
}

bool automovel::operator==(const std::string &marca) const {
	if (this->marca == marca){
		return true;
	} else {
		return false;
	}
}