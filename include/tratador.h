/**
* @file tratador.h
* @brief Classe responsável pelo tratador dos animais
* @author Júlio Cesar Fernandes Maia Filho e Letícia Moura Pinheiro
* @since 07/11/2019
* @date 09/11/2019
*/

#ifndef TRATADOR_H
#define TRATADOR_H

#include "funcionario.h"

/**
* @brief Classe responsável pelo tratador dos animais
* @details Nesta classe, o usuário pode definir característiccas dos tratadores,
*			como seu nível de segurança.
*/

class Tratador : public Funcionario {
private:
	int m_nivel_de_seguranca; /**<Define o nível de segurança do tratador */
public:
	Tratador(); /**< Construtor padrão*/

	/** @brief Construtor parametrizado. */
	Tratador(int id_, std::string nome_, std::string cpf_,
				short idade_, short tipo_sanguineo_, char fator_rh_,
				std::string especialidade_, int nivel_de_seguranca_);

	~Tratador();/**< Destrutor padrão*/
	
	int getNivel_de_seguranca();
	void setNivel_de_seguranca(int nivel_de_seguranca_);
};

#endif