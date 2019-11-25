/**
* @file reptilExotico.h
* @brief Classe dos répteis exóticos
* @author Júlio Cesar Fernandes Maia Filho e Letícia Moura Pinheiro
* @since 07/11/2019
* @date 13/11/2019
*/

#ifndef _REPTIL_EXOTICO_H_
#define _REPTIL_EXOTICO_H_

#include "reptil.h"
#include "animalExotico.h"

/**
* @brief Classe dos répteis exóticos
*/

class ReptilExotico : public Reptil, public AnimalExotico {
public:
	ReptilExotico(); /**< Construtor padrão*/
	
	/** @brief Construtor parametrizado. */
	ReptilExotico(int id_, std::string classe_, std::string nome_cientifico_,
			char sexo_, double tamanho_, std::string dieta_, Veterinario veterinario_,
			Tratador tratador_, std::string nome_batismo_, std::string tipo_veneno_);

	~ReptilExotico(); /**< Destrutor padrão*/

};

#endif