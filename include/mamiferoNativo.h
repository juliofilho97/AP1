/**
* @file mamiferoNativo.h
* @brief Classe dos mamíferos nativos
* @author Júlio Cesar Fernandes Maia Filho e Letícia Moura Pinheiro
* @since 07/11/2019
* @date 13/11/2019
*/

#ifndef _MAMIFERO_NATIVO_H_
#define _MAMIFERO_NATIVO_H_

#include "mamifero.h"
#include "animalNativo.h"

/**
* @brief Classe dos mamíferos nativos
*/

class MamiferoNativo : public Mamifero, public AnimalNativo{
public:
	MamiferoNativo(); /**< Construtor padrão*/

	/** @brief Construtor parametrizado. */
	MamiferoNativo(int id_, std::string classe_, std::string nome_cientifico_,
			char sexo_, double tamanho_, std::string dieta_, Veterinario veterinario_,
			Tratador tratador_, std::string nome_batismo_, std::string cor_pelo_);

	~MamiferoNativo(); /**< Destrutor padrão*/

};

#endif