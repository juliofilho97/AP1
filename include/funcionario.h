/**
* @file funcionario.h
* @brief Classe responsável pelo controle dos funcionários
* @author Júlio Cesar Fernandes Maia Filho e Letícia Moura Pinheiro
* @since 07/11/2019
* @date 08/11/2019
*/

#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
#include <iostream>
#include <memory>

/**
* @brief Classe responsável pelo controle dos funcionários
* @details Nesta classe, o usuário pode visualizar e modificar informações a respeito dos funcionários, tais como:
*			Nome, CPF, tipo sanguíneo, especialidade, etc. 
*/

class Funcionario {
protected:
	int m_id; /**< Define o número de identificação do funcionário*/
	std::string m_nome; /**< Define o nome do funcionário*/
	std::string m_cpf; /**< Define o CPF do funcionário*/
	short m_idade; /**< Define a idade do funcionário*/
	short m_tipo_sanguineo; /**< Define o tipo sanguíneo do funcionário*/
	char m_fator_rh; /**< Define o fator rh do funcionário*/
	std::string m_especialidade; /**< Define a especialidade de trabalho do funcionário*/
public:
	Funcionario(); /**< Construtor padrão*/

	/** @brief Construtor parametrizado. */
	Funcionario(int id_, std::string nome_, std::string cpf_,
				short idade_, short tipo_sanguineo_, char fator_rh_,
				std::string especialidade_);

	~Funcionario(); /**< Destrutor padrão*/
	
	int getId();
	void setId(int id_);

	std::string getNome();
	void setNome(std::string nome_);

	std::string getCpf();
	void setCpf(std::string cpf_);

	short getIdade();
	void setIdade(short idade_);

	short getTipo_sanguineo();
	void setTipo_sanguineo(short tipo_sanguineo_);

	char getFator_rh();
	void setFator_rh(char fator_rh_);

	std::string getEspecialidade();
	void setEspecialidade(std::string especialidade_);
	std::ostream& printFuncionario( std::ostream & _os );

		
		/*
		      Sobrecarga do operador <<.
		 
	      _os    o ostream alvo.
		 _func  O Funcionário alvo
		 */
		inline friend std::ostream & operator << ( std::ostream & _os , Funcionario & _func ) 
		{
			_func.printFuncionario( _os );
			return _os;
		}

};

#endif