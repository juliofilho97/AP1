/**
* @file anfibioExotico.h
* @brief Classe dos Anfíbios Exóticos
* @author Júlio Cesar Fernandes Maia Filho e Letícia Moura Pinheiro
* @since 07/11/2019
* @date 10/11/2019
*/

#ifndef _ANFIBIO_EXOTICO_H_
#define _ANFIBIO_EXOTICO_H_

#include "anfibio.h"
#include "animalExotico.h"

/**
* @brief Classe dos anfíbios exóticos
* @details Nesta classe o usuário pode inicializar os dados do anfíbio exótico.
*/

class AnfibioExotico : public Anfibio, public AnimalExotico{
public:
	AnfibioExotico(); /**< Construtor padrão*/

	/** @brief Construtor parametrizado. */
	AnfibioExotico(int id_, std::string classe_, std::string nome_cientifico_,
			char sexo_, double tamanho_, std::string dieta_, Veterinario veterinario_,
			Tratador tratador_, std::string nome_batismo_, int total_mudas_,
			std::string pais_origem_, std::string cidade_origem_,std::string autorizacao_ibama_);

	~AnfibioExotico(); /**< Destrutor padrão*/
	virtual std::ostream& printAnimal( std::ostream & _os );
};

#endif