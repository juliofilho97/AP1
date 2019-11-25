/**
* @file mamiferoExotico.h
* @brief Classe dos mamíferos exóticos
* @author Júlio Cesar Fernandes Maia Filho e Letícia Moura Pinheiro
* @since 07/11/2019
* @date 13/11/2019
*/

#ifndef _MAMIFERO_EXOTICO_H_
#define _MAMIFERO_EXOTICO_H_

#include "mamifero.h"
#include "animalExotico.h"

/**
* @brief Classe dos mamíferos exóticos
*/

class MamiferoExotico : public Mamifero, public AnimalExotico {
public:
	MamiferoExotico(); /**< Construtor padrão*/
	
	/** @brief Construtor parametrizado. */
	MamiferoExotico(int id_, std::string classe_, std::string nome_cientifico_,
			char sexo_, double tamanho_, std::string dieta_, Veterinario veterinario_,
			Tratador tratador_, std::string nome_batismo_, std::string cor_pelo_);

	~MamiferoExotico(); /**< Destrutor padrão*/
};

#endif