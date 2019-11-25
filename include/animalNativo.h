/**
* @file animalNativo.h
* @brief Classe dos animais nativos
* @author Júlio Cesar Fernandes Maia Filho e Letícia Moura Pinheiro
* @since 07/11/2019
* @date 10/11/2019
*/

#ifndef ANIMAL_NATIVO_H
#define ANIMAL_NATIVO_H

#include "animalSilvestre.h"

/**
* @brief Classe dos animais nativos
* @details Nesta classe, o usuário pode colocar e alterar algumas informações específicas de animais nativos,
como seu estado de origem.
*/

class AnimalNativo : public AnimalSilvestre {
protected:
	std::string m_uf_origem; /**< Define o nome da UF de origem do animal*/
	std::string m_autorizacao; /**< Define a autorização para portar o animal*/

public:
	AnimalNativo(); /**< Construtor padrão*/

	/** @brief Construtor parametrizado. */
	AnimalNativo(std::string uf_origem_, std::string autorizacao_, std::string autorizacao_ibama_);

	~AnimalNativo(); /**< Destrutor padrão*/

	std::string getUf_origem(); /**< Visualiza a UF de origem do animal */
	void setUf_origem(std::string uf_origem_); /**< Altera a UF de origem do animal */

	std::string getAutorizacao();
	void setAutorizacao(std::string autorizacao_);
};

#endif