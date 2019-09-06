#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>


#include "automovel.h"

using namespace std;

/*enum status_concessionaria
{
	inexistente = 0,
	existe = 1,
	carro_cadastrado = 2
};
*/
class gerencia
{
private:
	vector<concessionaria*> listaConc;


public:
	//construtor
	gerencia();

	// destrutor
	~gerencia();
	concessionaria criar_conc();

	bool add_carro();

	bool lista_carro();
}
