#include "automovel.h"
using namespace std;

automovel::automovel(){
		marca = " ";
		preco = 0;

	}

automovel::automovel( string marca, float preco){
	setMarca(marca);
	setPreco(preco);
}

string automovel::getMarca(){
	return marca;
}
float automovel::getPreco(){
	return preco;
}

