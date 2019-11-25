/**
* @file anfibioNativo.h
* @brief Classe dos Anfíbios Nativos
* @author Júlio Cesar Fernandes Maia Filho e Letícia Moura Pinheiro
* @since 07/11/2019
* @date 10/11/2019
*/

#ifndef _ANFIBIO_NATIVO_H_
#define _ANFIBIO_NATIVO_H_

#include "anfibio.h"
#include "animalNativo.h"

/**
* @brief Classe dos anfíbios nativos
* @details Nesta classe o usuário pode inicializar os dados do anfíbio, além de visualizar e
*		alterar o número de trocas de pele (mudas) do animal. 
*/

class AnfibioNativo : public Anfibio, public AnimalNativo{
public:
	AnfibioNativo(); /**< Construtor padrão*/

	/** @brief Construtor parametrizado. */
	AnfibioNativo(int id_, std::string classe_, std::string nome_cientifico_,
			char sexo_, double tamanho_, std::string dieta_, Veterinario veterinario_,
			Tratador tratador_, std::string nome_batismo_, int total_de_mudas_,
			std::string uf_origem_, std::string autorizacao_, std::string autorizacao_ibama_);

	~AnfibioNativo(); /**< Destrutor padrão*/
	virtual std::ostream& printAnimal( std::ostream & _os );

};

#endif