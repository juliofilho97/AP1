#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

#include "gerenciar.h"
#include "automovel.h"
#include "concessionaria.h"
using namespace std;


class concessionaria
{
private:
	string nome;
	int cnpj;
	vector<automovel*> listaConc;


public:
	static int numeroConc;

	//construtor
	concessionaria();

	// destrutor
	~concessionaria();


	concessionaria(string nome, int cnpj, const vector <automovel*> listaConc);

	string get_nome();
	string set_nome();
	int get_cnpj();
	int set_CNPJ();

	bool add_carro();

	bool lista_carro();

	int estoque();

