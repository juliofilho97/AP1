/**
* @file animalSilvestre.h
* @brief Classe dos animais silvestres
* @author Júlio Cesar Fernandes Maia Filho e Letícia Moura Pinheiro
* @since 07/11/2019
* @date 10/11/2019
*/

#ifndef _ANIMAL_SILVESTRE_H_
#define _ANIMAL_SILVESTRE_H_

#include <string>

/**
* @brief Classe dos animais silvestres
* @details Nesta classe, o usuário pode visualizar e alterar a autorização do IBAMA sobre o animal silvestre.
*/

class AnimalSilvestre {
protected:
	std::string m_autorizacao_ibama; /**< Define qual a autorização do IBAMA*/

public:
	AnimalSilvestre(); /**< Construtor padrão*/
	AnimalSilvestre(std::string autorizacao_ibama_); /**< Construtor parametrizado*/
	~AnimalSilvestre(); /**< Destrutor padrão*/

	std::string getAutorizacao_ibama(); /**< Visualiza a autorização do IBAMA sobre o animal silvestre */
	void setAutorizacao_ibama(std::string autorizacao_ibama_); /**< Altera a autorização do IBAMA sobre o animal silvestre */
};

#endif