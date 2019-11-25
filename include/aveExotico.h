/**
* @file aveExotico.h
* @brief Classe das aves exóticas
* @author Júlio Cesar Fernandes Maia Filho e Letícia Moura Pinheiro
* @since 07/11/2019
* @date 13/11/2019
*/

#ifndef _AVE_EXOTICO_H_
#define _AVE_EXOTICO_H_

#include "ave.h"
#include "animalExotico.h"

/**
* @brief Classe das aves exóticas
*/

class AveExotico : public Ave, public AnimalExotico {
public:
	AveExotico(); /**< Construtor padrão*/

	/** @brief Construtor parametrizado. */
	AveExotico(int id_, std::string classe_, std::string nome_cientifico_,
			char sexo_, double tamanho_, std::string dieta_, Veterinario veterinario_,
			Tratador tratador_, std::string nome_batismo_, double tamanho_do_bico_cm_,
			double envergadura_das_asas_);

	~AveExotico(); /**< Destrutor padrão*/

};

#endif