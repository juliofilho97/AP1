#ifndef AUTOMOVEL_H
#define AUTOMOVEL_H

#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

#include "gerencia.h"


using namespace std;

class automovel{
	private: 
	string marca; 
	float preco;
	string chassi; 
	/*int fab_ano;
	int fab_dia;
	int fab_mes;
*/
//Getters e Setters
	public: 
	string getMarca(); 
	string setMarca(string marca); 
	float getPreco(); 
	float setPreco(float preco);
	string getChassi();
	string setChassi(string chassi);
	/* int getFab_ano(); 
	int setFab_ano(int fa);
	int getFab_dia(); 
	int setFab_dia(int fd);
	int getFab_mes(); 
	int setFab_mes(int fmes);
	*/
}

/*
class num_chassi{

//usa numero, caracter e letra

	



	}
c
*/

#endif // AUTOMOVEL_H
