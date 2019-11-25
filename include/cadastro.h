#ifndef CADASTRO_H
#define CADASTRO_H

#include <fstream>
#include <map>
#include <vector>
#include <tuple>
#include <iostream>


#include "anfibio.h"
#include "anfibioExotico.h"
#include "anfibioNativo.h"

#include "animal.h"
#include "animalExotico.h"	
#include "animalNativo.h"	
#include "animalSilvestre.h"

#include "ave.h"
#include "aveExotico.h"
#include "aveNativo.h"

#include "mamifero.h"
#include "mamiferoExotico.h"
#include "mamiferoNativo.h"

#include "reptil.h"
#include "reptilExotico.h"
#include "reptilNativo.h"

#include "funcionario.h"
#include "tratador.h"	
#include "veterinario.h"




//      Classe que simula parte do cadastro de um pet shop.
 
class cadastro
{
protected:
	std::map< int, Anfibio* > m_tabela_anfibio;
	std::map< int, Mamifero* > m_tabela_mamifero;
	std::map< int, Reptil* > m_tabela_reptil;
	std::map< int, Ave* > m_tabela_ave;
	std::map< int, Funcionario* > m_tabela_funcionario;

public:

	
	// Construtor padrão da classe cadastro
	
	cadastro() {};

	
	// Destrutor padrão da classe cadastro
	
	~cadastro();


	
	void cadastrar_anfibio( std::string classe_, std::string tipo_ );
	/* {    Cadastro de um anfibio
	 
	 classe_  - string que corresponde ao classe do animal
	 tipo_    - string que corresponde ao tipo do animal

	}
	 */

	void cadastrar_mamifero( std::string classe_, std::string tipo_ );
	/* {    Cadastro de um mamifero
	 
	 classe_  - string que corresponde ao classe do animal
	 tipo_    - string que corresponde ao tipo do animal

	}
	 */
	
	void cadastrar_reptil( std::string classe_, std::string tipo_ );
	/* {    Cadastro de um reptil
	 
	 classe_  - string que corresponde ao classe do animal
	 tipo_    - string que corresponde ao tipo do animal

	}
	 */
	void cadastrar_ave( std::string classe_, std::string tipo_ );
	/* {    Cadastro de um ave
	 
	 classe_  - string que corresponde ao classe do animal
	 tipo_    - string que corresponde ao tipo do animal

	}
	 */

	
	void cadastrar_funcionario( std::string _funcao );
	/*
	{		Cadastro de um funiconario
	 
	 funcao_ - string que corresponde a funcao do funcionario
	}
	 */

	void consultar_animais( int id_ );
	/*
	{		Consulta de um animal
	 
	 id_ - inteiro que corresponde a identificacao do animal
	}
	 */
	
	void consultarAnimaisFuncionarios( int id_ );
	/*
	{		Consulta um animal com base em um funcionario especifico
	 
	 id_ - inteiro que corresponde a identificacao do funcionario
	}
	 */
	
	void consultar_funcionarios( int id_ );
	/*
	{		Consulta de um funcionario
	 
	 id_ - inteiro que corresponde a identificacao do funcionario
	}
	 */

	void remover_funcionario( int id_ );
	/*
	{		Remocao de um funcionario
	 
	 id_ - inteiro que corresponde a identificacao do funcionario
	}
	 */

	void remover_animal( int id_ );
	/*
	{		Remocao de um animal
	 
	 id_ - inteiro que corresponde a identificacao do animal
	}
	 */

	void alterar_dados_animais( int id_ );
	/*
	{		Altera dados de um animal
	 
	 id_ - inteiro que corresponde a identificacao do animal
	}
	 */

	void alterar_dados_funcionarios( int id_ );
	/*
	{		Altera dados de um funcionario
	 
	 id_ - inteiro que corresponde a identificacao do funcionario
	}
	 */
	
	unsigned int quantidade_animais_cadastrados( void );
	
	
	unsigned int quantidade_funcionarios_cadastrados( void );

};

#endif
