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
		string setMarca(string marca_){
			marca = marca_;
			return marca; 
		}
		double getPreco(); 
		double setPreco(double preco_){
			preco = preco_; 
			return preco;
		}

		string getChassi();
		string setChassi(string chassi_){
			chassi = chassi_;
			return chassi; 
		}

		bool operator==(automovel a){
			return a.getChassi() == chassi;
		}

		friend ostream& operator << (ostream &o, automovel &automovel);

		bool operator==(const automovel &auto) const;

		bool operator==(const string &marca) const;
	
};




#endif // AUTOMOVEL_H
