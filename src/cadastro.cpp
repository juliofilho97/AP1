
#include "cadastro.h"
#include <fstream>
#include <map>
#include <vector>
#include <tuple>
#include <iostream>
using namespace std;


cadastro::~cadastro()
{
	for (auto i = m_tabela_anfibio.begin(); i != m_tabela_anfibio.end(); ++i)
	{
		delete (i->second);
	}
	for (auto i = m_tabela_mamifero.begin(); i != m_tabela_mamifero.end(); ++i)
	{
		delete (i->second);
	}
	for (auto i = m_tabela_reptil.begin(); i != m_tabela_reptil.end(); ++i)
	{
		delete (i->second);
	}
	for (auto i = m_tabela_ave.begin(); i != m_tabela_ave.end(); ++i)
	{
		delete (i->second);
	}
	for (auto i = m_tabela_funcionario.begin(); i != m_tabela_funcionario.end(); ++i)
	{
		delete (i->second);
	}
}


void cadastro::cadastrar_mamifero( std::string classe_ , std::string tipo_ )
{
	
	std::string aux;
	int id_;
	std::string nome_, cientifico_, dieta_,  batismo_, ibama_, uf_origem_, autorizacao_, pais_origem, cor_pelo;
	char  sexo_;
	float tamanho_;
	int  id_veterinario;
	int	id_tratador;
	
	cin.clear();
	cin.ignore(200,'\n');
	
	cout << "Numero de Identificacao do Animal (ID): ";
	getline(cin, aux);
	id_ = stoi(aux);

	cout << "\nNome: ";
	getline(cin, nome_);

	cout << "\nNome Cientifico: ";
	getline(cin, cientifico_);

	cout << "\nSexo: ";
	getline(cin, aux);
	sexo_ = aux[0];

	cout << "\nTamanho: ";
	getline(cin, aux);
	tamanho_ = stof(aux);

	cout << "\nDieta: ";
	getline(cin, dieta_);

	cout << "\nID do Veterinario responsavel: ";
	getline(cin, aux);
	id_veterinario = stoi(aux);

	cout << "\nID do Tratador responsavel: ";
	getline(cin, aux);
	id_tratador = stoi(aux);

	cout << "\nNome de batismo: ";
	getline(cin, batismo_);

	std::cout << "\nCor do pelo do animal: ";
	std::getline(std::cin, cor_pelo);

	Funcionario * tratador_resp = nullptr;
	Funcionario * veterinario_resp = nullptr;

	if( m_tabela_funcionario.find( id_tratador ) != m_tabela_funcionario.end() )
		tratador_resp = m_tabela_funcionario[ id_tratador ];

	if( m_tabela_funcionario.find( id_veterinario ) != m_tabela_funcionario.end() )
		veterinario_resp = m_tabela_funcionario[ id_veterinario ];

	if( tipo_.compare( "Nativo" ) == 0 )
	{

		std::cout << "\nID do Ibama: ";
		std::getline(std::cin, ibama_);
		std::cout << "\nEstado de Origem: ";
		std::getline(std::cin, uf_origem_);
		std::cout << "\nAutorizacao do Ibama: ";
		std::getline(std::cin, autorizacao_);

		Mamifero * mamifero_nativo = new MamiferoNativo( id_, _classe, _tipo, nome_, cientifico_ , sexo_, tamanho_, dieta_, veterinario_resp,
		tratador_resp, batismo_, cor_pelo, ibama_, uf_origem_, autorizacao_ );

		m_tabela_mamifero.insert( std::pair<int, Mamifero*> ( id_, mamifero_nativo ) );

	} else if( tipo_.compare( "Exotico" ) == 0 )
	{
		std::cout << "\nID do Ibama: ";
		std::getline(std::cin, ibama_);
		std::cout << "\nPais de Origem: ";
		std::getline(std::cin, pais_origem);

		Mamifero * mamifero_exotico = new MamiferoExotico( id_, _classe, _tipo, nome_, cientifico_, sexo_, tamanho_, dieta_, veterinario_resp
		, tratador_resp, batismo_, cor_pelo, ibama_, pais_origem );

		m_tabela_mamifero.insert( std::pair<int, Mamifero*> ( id_, mamifero_exotico ) );
	}

	std::cout << "\nAnimal cadastrado !\n" << std::endl;

}

void cadastro::cadastrar_reptil( std::string classe_, std::string tipo_ )
{

	std::string aux;
	int id_;
	std::string nome_, cientifico_, dieta_,  batismo_, ibama_, uf_origem_, autorizacao_, pais_origem, cor_pelo, venenoso_, tipo_veneno,;
	char  sexo_;
	float tamanho_;
	int  id_veterinario;
	int	id_tratador;
	bool possui_veneno = false;
	

	std::cin.clear();
	std::cin.ignore(200,'\n');
	std::cout << "Numero de Identificacao do Animal (ID): ";
	std::getline(std::cin, aux);
	id_ = std::stoi(aux);

	std::cout << "\nNome: ";
	std::getline(std::cin, nome_);

	std::cout << "\nNome Cientifico: ";
	std::getline(std::cin, cientifico_);

	std::cout << "\nSexo: ";
	std::getline(std::cin, aux);
	sexo_ = aux[0];

	std::cout << "\nTamanho: ";
	std::getline(std::cin, aux);
	tamanho_ = std::stoi(aux);

	std::cout << "\nDieta: ";
	std::getline(std::cin, dieta_);

	std::cout << "\nID do Veterinario responsavel: ";
	std::getline(std::cin, aux);
	id_veterinario = std::stoi(aux);

	std::cout << "\nID do Tratador responsavel: ";
	std::getline(std::cin, aux);
	id_tratador = std::stoi(aux);

	std::cout << "\nNome de batismo: ";
	std::getline(std::cin, batismo_);	

	std::cout << "\nAnimal venenoso ( Sim ou Nao ): ";
	std::getline(std::cin, venenoso_);

	if( venenoso_.compare( "Sim" ) == 0 or venenoso_.compare( "sim" ) == 0 )
	{
		std::cout << "\nTipo do veneno: ";
		std::getline(std::cin, tipo_veneno);
		possui_veneno = true;

	} else
	{
		tipo_veneno = "Nenhum";
	}

	Funcionario * tratador_resp = nullptr;
	Funcionario * veterinario_resp = nullptr;

	if( m_tabela_funcionario.find( id_tratador ) != m_tabela_funcionario.end() )
		tratador_resp = m_tabela_funcionario[ id_tratador ];

	if( m_tabela_funcionario.find( id_veterinario ) != m_tabela_funcionario.end() )
		veterinario_resp = m_tabela_funcionario[ id_veterinario ];

	if( tipo_.compare( "Nativo" ) == 0 )
	{

		std::cout << "\nID do Ibama: ";
		std::getline(std::cin, ibama_);
		std::cout << "\nEstado de Origem: ";
		std::getline(std::cin, uf_origem_);
		std::cout << "\nAutorizacao do Ibama: ";
		std::getline(std::cin, autorizacao_);

		Reptil * reptil_nativo = new ReptilNativo( id_, _classe, _tipo, nome_, cientifico_
													, sexo_, tamanho_, dieta_, veterinario_resp
													, tratador_resp, batismo_, possui_veneno, tipo_veneno
													, ibama_, uf_origem_, autorizacao_ );

		m_tabela_reptil.insert( std::pair<int, Reptil*> ( id_, reptil_nativo ) );
		
	} else if( tipo_.compare( "Exotico" ) == 0 )
	{

		std::cout << "\nID do Ibama: ";
		std::getline(std::cin, ibama_);
		std::cout << "\nPais de Origem: ";
		std::getline(std::cin, pais_origem);
		
		Reptil * reptil_exotico = new ReptilExotico( id_, _classe, _tipo, nome_, cientifico_
													, sexo_, tamanho_, dieta_, veterinario_resp
													, tratador_resp, batismo_, possui_veneno, tipo_veneno
													, ibama_, pais_origem );

		m_tabela_reptil.insert( std::pair<int, Reptil*> ( id_, reptil_exotico ) );

	}

	std::cout << "\nAnimal cadastrado!\n" << std::endl;

}

void cadastro::cadastrar_ave( std::string classe_, std::string tipo_ )
{

	std::string aux;
	int id_;
	std::string nome_, cientifico_, dieta_,  batismo_, ibama_, uf_origem_, autorizacao_, pais_origem, cor_pelo;
	char  sexo_;
	float tamanho_;
	int  id_veterinario;
	int	id_tratador;
	float tamanho_bico;
	float envergadura_;
	
	std::cin.clear();
	std::cin.ignore(200,'\n');
	std::cout << "Numero de Identificacao do Animal (ID): ";
	std::getline(std::cin, aux);
	id_ = std::stoi(aux);

	std::cout << "\nNome: ";
	std::getline(std::cin, nome_);

	std::cout << "\nNome Cientifico: ";
	std::getline(std::cin, cientifico_);

	std::cout << "\nSexo: ";
	std::getline(std::cin, aux);
	sexo_ = aux[0];

	std::cout << "\nTamanho: ";
	std::getline(std::cin, aux);
	tamanho_ = std::stoi(aux);

	std::cout << "\nDieta: ";
	std::getline(std::cin, dieta_);

	std::cout << "\nID do Veterinario responsavel: ";
	std::getline(std::cin, aux);
	id_veterinario = std::stoi(aux);

	std::cout << "\nID do Tratador responsavel: ";
	std::getline(std::cin, aux);
	id_tratador = std::stoi(aux);

	std::cout << "\nNome de batismo: ";
	std::getline(std::cin, batismo_);

	std::cout << "\nTamanho do bico do animal: ";
	std::getline(std::cin, aux);
	tamanho_bico = std::stoi(aux);

	std::cout << "\nEnvergadura do animal: ";
	std::getline(std::cin, aux);
	envergadura_ = std::stoi(aux);

	Funcionario * tratador_resp = nullptr;
	Funcionario * veterinario_resp = nullptr;

	if( m_tabela_funcionario.find( id_tratador ) != m_tabela_funcionario.end() )
		tratador_resp = m_tabela_funcionario[ id_tratador ];

	if( m_tabela_funcionario.find( id_veterinario ) != m_tabela_funcionario.end() )
		veterinario_resp = m_tabela_funcionario[ id_veterinario ];

	if( tipo_.compare( "Nativo" ) == 0 )
	{

		std::cout << "\nID do Ibama: ";
		std::getline(std::cin, ibama_);
		std::cout << "\nEstado de Origem: ";
		std::getline(std::cin, uf_origem_);
		std::cout << "\nAutorizacao do Ibama: ";
		std::getline(std::cin, autorizacao_);

		Ave * ave_nativo = new AveNativo( id_, _classe, _tipo, nome_, cientifico_, sexo_, tamanho_, dieta_, veterinario_resp
		, tratador_resp, batismo_, tamanho_bico, envergadura_, ibama_, uf_origem_, autorizacao_ );

		m_tabela_ave.insert( std::pair<int, Ave*> ( id_, ave_nativo ) );
		

	} else if( tipo_.compare( "Exotico" ) == 0 )
	{

		std::cout << "\nID do Ibama: ";
		std::getline(std::cin, ibama_);
		std::cout << "\nPais de Origem: ";
		std::getline(std::cin, pais_origem);

		Ave * ave_exotico = new AveExotico( id_, _classe, _tipo, nome_, cientifico_, sexo_, tamanho_, dieta_, veterinario_resp
		, tratador_resp, batismo_, tamanho_bico, envergadura_, ibama_, pais_origem );

		m_tabela_ave.insert( std::pair<int, Ave*> ( id_, ave_exotico ) );


	}

	std::cout << "\nAnimal cadastrado!\n" << std::endl;

}


void cadastro::cadastrar_anfibio( string classe_, string tipo_ )
{
	std::string aux;
	int id_;
	std::string nome_, cientifico_, dieta_,  batismo_, ultima_muda_, ibama_, uf_origem_, autorizacao_, _pais_origem;
	char  sexo_;
	float tamanho_;
	int  id_veterinario;
	int	id_tratador;
	int	total_mudas_;
	

	cin.clear();
	cin.ignore(200,'\n');
	
	cout << "Numero de Identificacao do Animal (ID): ";
	getline(cin, aux);
	id_ = stoi(aux);

	cout << "\nNome: ";
	getline(cin, nome_);

	cout << "\nNome Cientifico: ";
	getline(cin, cientifico_);

	cout << "\nSexo: ";
	getline(cin, aux);
	sexo_ = aux[0];

	cout << "\nTamanho: ";
	getline(cin, aux);
	tamanho_ = stof(aux);

	cout << "\nDieta: ";
	getline(cin, dieta_);

	cout << "\nID do Veterinario responsavel: ";
	getline(cin, aux);
	id_veterinario = stoi(aux);

	cout << "\nID do Tratador responsavel: ";
	getline(cin, aux);
	id_tratador = stoi(aux);

	cout << "\nNome de batismo: ";
	getline(cin, batismo_);

	cout << "\nTotal de mudas: ";
	getline(cin, aux);
	total_mudas_ = stoi(aux);

	cout << "\nData da ultima muda (DD/MM/AAAA): ";
	getline(cin, ultima_muda_);

	Funcionario * tratador_resp = nullptr;
	Funcionario * veterinario_resp = nullptr;

 	// Verifica se o funcionario existe
	if( m_tabela_funcionario.find( id_tratador ) != m_tabela_funcionario.end() )
		tratador_resp = m_tabela_funcionario[ id_tratador ];
	if( m_tabela_funcionario.find( id_veterinario ) != m_tabela_funcionario.end() )
		veterinario_resp = m_tabela_funcionario[ id_veterinario ];

	if( tipo_.compare( "Nativo" ) == 0 )
	{
		cout << "\nID do Ibama: ";
		getline(cin, ibama_);
		cout << "\nEstado de Origem: ";
		getline(cin, uf_origem_);
		cout << "\nAutorizacao do Ibama: ";
		getline(cin, autorizacao_);

		Anfibio * anfibio_nativo = new AnfibioNativo( id_, classe_, tipo_, nome_, cientifico_, _sexo, tamanho_, dieta_, veterinario_resp,
		 tratador_resp, batismo_, total_mudas_, ultima_muda_, ibama_, uf_origem_, autorizacao_ );

		m_tabela_anfibio.insert( pair<int, Anfibio*> ( id_, anfibio_nativo ) );

	}
	else if( tipo_.compare( "Exotico" ) == 0 )
	{
		cout << "\nID do Ibama: ";
		getline(cin, ibama_);
		cout << "\nPais de Origem: ";
		getline(cin, _pais_origem);

		Anfibio * anfibio_exotico = new AnfibioExotico( id_, classe_, tipo_, nome_, cientifico_,
		 _sexo, tamanho_, dieta_, veterinario_resp, tratador_resp, batismo_, total_mudas_, ultima_muda_, ibama_, _pais_origem );

		m_tabela_anfibio.insert( pair<int, Anfibio*> ( id_, anfibio_exotico ) );		
	}
	cout << "Animal cadastrado!" << endl;
}

void cadastro::cadastrar_funcionario( string funcao_ )
{
	string aux;
	int id_;
	string nome_, especialidade_, CPF_ ;
	short 	idade_;
	string  tipo_sangue;		// A / B / AB / O
	char fator_RH_;			// + / -
	

	cin.clear();
	cin.ignore(200,'\n');
	cout << "Numero de Identificacao do Funcionario (ID): ";
	getline(cin, aux);
	id_ = stoi(aux);

	cout << "\nNome do Funcionario: ";
	getline(cin, nome_);

	cout << "\nCPF do Funcionario: ";
	getline(cin, CPF_);

	cout << "\nIdade do Funcionario: ";
	getline(cin, aux);
	idade_ = stoi(aux);

	cout << "\nTipo sanguineo do Funcionario: ";
	getline(cin, tipo_sangue);

	cout << "\nFator RH do tipo sanguineo: ";
	getline(cin, aux);
	fator_RH_ = aux[0];

	cout << "\nEspecialidade: " << endl;
	getline(cin, especialidade_);

	// Funcao para decidir tratador ou veterinario 


	if( funcao_.compare( "Tratador" ) == 0  )
	{

		Funcionario * novo_tratador = new Tratador( id_, funcao_, nome_, CPF_, idade_, tipo_sangue, fator_RH_, especialidade_ );
		m_tabela_funcionario.insert( pair<int, Funcionario*> ( id_, novo_tratador ) );

	} else if ( funcao_.compare( "Veterinario" ) == 0  )
	{

		Funcionario * novo_veterinario = new Veterinario( id_, funcao_, nome_, CPF_ , idade_, tipo_sangue, fator_RH_, especialidade_ );
		m_tabela_funcionario.insert( pair<int, Funcionario*> ( id_, novo_veterinario ) );

	}

	cout << "\nFuncionario cadastrado!\n" << endl;

}

void cadastro::consultar_animais( int id_ )
{

	std::map< int, Anfibio* >::iterator it_anf = m_tabela_anfibio.find( id_ );
	std::map< int, Mamifero* >::iterator it_mam = m_tabela_mamifero.find( id_ );
	std::map< int, Reptil* >::iterator it_rep = m_tabela_reptil.find( id_ );
	std::map< int, Ave* >::iterator it_ave = m_tabela_ave.find( id_ );


	if( it_anf != m_tabela_anfibio.end() )
	{

		std::cout << "Dados do Animal procurado: " << std::endl;
		std::cout << *(it_anf -> second);

	}else if( it_rep != m_tabela_reptil.end() )
	{

		std::cout << "Dados do Animal procurado: " << std::endl;
		std::cout << *(it_rep -> second);

	} else if( it_ave != m_tabela_ave.end() )
	{

		std::cout << "Dados do Animal procurado: " << std::endl;
		std::cout << *(it_ave -> second);

	}else if( it_mam != m_tabela_mamifero.end() )
	{

		std::cout << "Dados do Animal procurado: " << std::endl;
		std::cout << *(it_mam -> second);

	} else
		std::cout << "Animal nao encontrado!" << std::endl;

}

void cadastro::consultarAnimaisFuncionarios( int id_ )
{
	
	std::map< int, Anfibio* >::iterator it_anf = m_tabela_anfibio.begin();
	std::map< int, Ave* >::iterator it_ave = m_tabela_ave.begin();
	std::map< int, Mamifero* >::iterator it_mam = m_tabela_mamifero.begin();
	std::map< int, Reptil* >::iterator it_rep = m_tabela_reptil.begin();
	

	std::map< int, Funcionario* >::iterator it_func = m_tabela_funcionario.find( id_ );

	if( it_func != m_tabela_funcionario.end() )
	{
		std::cout << "\nLista dos Animais relacionados ao respectivo Funcionario: " << std::endl;

		while( it_anf != m_tabela_anfibio.end() )
		{

			if( it_anf -> second -> getVeterinario() -> getId() == id_
				or it_anf -> second -> getTratador() -> getId() == id_ )
				std::cout << *(it_anf -> second);

			++it_anf;
		}

		while( it_mam != m_tabela_mamifero.end() )
		{

			if( it_mam -> second -> getVeterinario() -> getId() == id_
				or it_mam -> second -> getTratador() -> getId() == id_ )
				std::cout << *(it_mam -> second);

			++it_mam;
		}

		while( it_rep != m_tabela_reptil.end() )
		{

			if( it_rep -> second -> getVeterinario() -> getId() == id_
				or it_rep -> second -> getTratador() -> getId() == id_ )
				std::cout << *(it_rep -> second);

			++it_rep;
		}

		while( it_ave != m_tabela_ave.end() )
		{

			if( it_ave -> second -> getVeterinario() -> getId() == id_
				or it_ave -> second -> getTratador() -> getId() == id_ )
				std::cout << *(it_ave -> second);

			++it_ave;
		}

	} else 
		std::cout << "Nao existe Funcionario com o ID fornecido" << std::endl;

}

void cadastro::consultar_funcionarios( int id_ )
{
	
	std::map< int, Funcionario* >::iterator it_func =  m_tabela_funcionario.find( id_ );
	std::cout << std::endl << m_tabela_funcionario.size()  <<std::endl;
	if( it_func != m_tabela_funcionario.end() )
		std::cout << *(it_func -> second);
	else
		std::cout << "Funcionario nao encontrado" << std::endl;

}

void cadastro::remover_funcionario( int id_ )
{

	std::map< int, Funcionario* >::iterator it_func =  m_tabela_funcionario.find( id_ );

	if( it_func != m_tabela_funcionario.end() )
	{

		m_tabela_funcionario.erase( it_func );
		std::cout << "Funcionario Removido !" << std::endl;

	}else
		std::cout << "Funcionario nao existe" << std::endl;

}

void cadastro::remover_animal( int id_ )
{

	std::map< int, Anfibio* >::iterator it_anf = m_tabela_anfibio.find( id_ );
	std::map< int, Ave* >::iterator it_ave = m_tabela_ave.find( id_ );
	std::map< int, Mamifero* >::iterator it_mam = m_tabela_mamifero.find( id_ );
	std::map< int, Reptil* >::iterator it_rep = m_tabela_reptil.find( id_ );
	

	if( it_anf != m_tabela_anfibio.end() )
		m_tabela_anfibio.erase( it_anf );
	else if( it_mam != m_tabela_mamifero.end() )
		m_tabela_mamifero.erase( it_mam );
	else if( it_rep != m_tabela_reptil.end() )
		m_tabela_reptil.erase( it_rep );
	else if( it_ave != m_tabela_ave.end() )
		m_tabela_ave.erase( it_ave );
	else
		std::cout << "Animal nao existe!" << std::endl;

	std::cout << "\nAnimal removido!\n" << std::endl;

}
unsigned int cadastro::quantidade_animais_cadastrados( void )
{

	return ( m_tabela_anfibio.size() + m_tabela_mamifero.size() + m_tabela_reptil.size() + m_tabela_ave.size() );

}

unsigned int cadastro::quantidade_funcionarios_cadastrados( void )
{
	return m_tabela_funcionario.size();
}

