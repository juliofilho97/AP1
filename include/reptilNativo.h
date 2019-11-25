/**
* @file reptilNativo.h
* @brief Classe dos répteis nativos
* @author Júlio Cesar Fernandes Maia Filho e Letícia Moura Pinheiro
* @since 07/11/2019
* @date 13/11/2019
*/

#ifndef REPTIL_NATIVO_H
#define REPTIL_NATIVO_H

#include "reptil.h"
#include "animalNativo.h"

/**
* @brief Classe dos répteis nativos
*/

class ReptilNativo : public Reptil, public AnimalNativo {
public:
	ReptilNativo(); /**< Construtor padrão*/
	
	/** @brief Construtor parametrizado. */
	ReptilNativo(int id_, std::string classe_, std::string nome_cientifico_,
			char sexo_, double tamanho_, std::string dieta_, Veterinario veterinario_,
			Tratador tratador_, std::string nome_batismo_, std::string tipo_veneno_);

	~ReptilNativo(); /**< Destrutor padrão*/

};

#endif