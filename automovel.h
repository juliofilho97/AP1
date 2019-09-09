#ifndef AUTOMOVEL_H
#define AUTOMOVEL_H

#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;

class automovel{
	private: 
		string marca; 
		double preco;
		string chassi; 
		

//Getters e Setters
	public: 
		static int numeroCarros;

		automovel();
		automovel(string marca, double preco, string chassi);

		string getMarca(); 
		string setMarca(string marca_){marca = marca_;} 
		double getPreco(); 
		double setPreco(double preco_){preco = preco_;}
		string getChassi();
		string setChassi(string chassi_){chassi = chassi_;}

		bool operator==(automovel a){
			return a.getChassi() == chassi;
		}
	
};




#endif // AUTOMOVEL_H
