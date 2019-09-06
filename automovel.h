#ifndef AUTOMOVEL_H
#define AUTOMOVEL_H

#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

#include "gerenciar.h"
#include "automovel.h"
#include "concessionaria.h"



using namespace std;

class automovel{
	private: 
		string marca; 
		float preco;
		string chassi; 
		

//Getters e Setters
	public: 
		static int numeroCarros;

		automovel();
		automovel(string marca, float preco);
		~automovel ();

		string getMarca(); 
		string setMarca(string marca); 
		float getPreco(); 
		float setPreco(float preco);
		string getChassi();
		string setChassi(string chassi);
	
};




#endif // AUTOMOVEL_H
