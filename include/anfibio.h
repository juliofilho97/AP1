/**
* @file anfibio.h
* @brief Classe dos Anfíbios
* @author Júlio Cesar Fernandes Maia Filho e Letícia Moura Pinheiro
* @since 07/11/2019
* @date 08/11/2019
*/

#ifndef _ANFIBIO_H_
#define _ANFIBIO_H_

#include "animal.h"

/**
* @brief Classe dos anfíbios
* @details Nesta classe o usuário pode inicializar os dados do anfíbio, além de visualizar e
*		alterar o número de trocas de pele (mudas) do animal. 
*/

class Anfibio : public Animal {
private:
	/** Transforma a classe em abstrata, impedindo a instanciação de um objeto */
	virtual std::ostream& print(std::ostream& os) const = 0;
protected:
	int m_total_mudas;
	std::string m_ultima_muda;
	//date m_ultima_muda; Precisamos de uma classe que manipule datas
public:
	std::string get_ultima_muda( void );
	void set_ultima_muda( std::string new_muda );
	int getTotal_de_mudas();
	void setTotal_de_mudas(int total_de_mudas_);

	//get e set da data da última muda

	Anfibio(); /**< Construtor padrão*/

	/** @brief Construtor parametrizado. */
	Anfibio(int id_, std::string classe_, std::string nome_cientifico_,
			char sexo_, double tamanho_, std::string dieta_, Veterinario veterinario_,
			Tratador tratador_, std::string nome_batismo_, int total_mudas_);

	
	//~Anfibio(); /**< Destrutor padrão*/
	virtual ~Anfibio(){};
	virtual std::ostream& printAnimal( std::ostream & _os );
};

#endif