/**
* @file animalExotico.h
* @brief Classe dos animais exóticos
* @author Júlio Cesar Fernandes Maia Filho e Letícia Moura Pinheiro
* @since 07/11/2019
* @date 10/11/2019
*/

#ifndef _ANIMAL_EXOTICO_H_
#define _ANIMAL_EXOTICO_H_

#include "animalSilvestre.h"

/**
* @brief Classe dos animais exóticos
* @details Nesta classe, o usuário pode colocar e alterar algumas informações específicas de animais exóticos,
como seu país e cidade de origem.
*/

class AnimalExotico : public AnimalSilvestre {
protected:
	std::string m_pais_origem; /**< Define o nome do país de origem do animal*/
	std::string m_cidade_origem; /**< Defime o nome da cidade de origem do animal*/

public:
	AnimalExotico(); /**< Construtor padrão*/

	/** @brief Construtor parametrizado. */
	AnimalExotico(std::string pais_origem_, std::string cidade_origem_,
				std::string autorizacao_ibama_);

	~AnimalExotico(); /**< Destrutor padrão*/

	std::string getPais_origem(); /**< Visualiza o país de origem do animal*/
	void setPais_origem(std::string pais_origem_); /**< Altera o país de origem do animal*/

	std::string getCidade_origem(); /**< Visualiza a cidade de origem do animal*/
	void setCidade_origem(std::string cidade_origem_); /**< Altera a cidade de origem do animal*/
};

#endif