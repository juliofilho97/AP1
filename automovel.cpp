#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

#include "gerencia.h"
#include "automovel.h"

using namespace std;

automovel::automovel(){
		marca = " ";
		preco = 0;
		chassi = " ";

	}

automovel::automovel( string marca, float preco, string chassi){
	setMarca(marca);
	setPreco(preco);
	setChassi(chassi);
}

string automovel::getMarca(){
	return marca;
}
float automovel::getPreco(){
	return preco;
}

string automovel::getchassi(){
	return chassi;
}
