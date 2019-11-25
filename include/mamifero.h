/**
* @file mamifero.h
* @brief Classe dos mamíferos
* @author Júlio Cesar Fernandes Maia Filho e Letícia Moura Pinheiro
* @since 07/11/2019
* @date 09/11/2019
*/

#ifndef MAMIFERO_H
#define MAMIFERO_H

#include "animal.h"

/**
* @brief Classe dos mamíferos
* @details Nesta classe, o usuário pode inicializar um mamífero e alterar características
*			como a cor do pêlo do animal.
*/

class Mamifero : public Animal {
private:
	/** Transforma a classe em abstrata, impedindo a instanciação de um objeto */
	virtual std::ostream& print(std::ostream& os) const = 0;
protected:
	std::string m_cor_pelo; /**< Define a cor do pêlo do mamífero*/
public:
	Mamifero(); /**< Construtor padrão*/

	/** @brief Construtor parametrizado. */
	Mamifero(int id_, std::string classe_, std::string nome_cientifico_,
			char sexo_, double tamanho_, std::string dieta_, Veterinario veterinario_,
			Tratador tratador_, std::string nome_batismo_, std::string cor_pelo_);

	~Mamifero(); /**< Destrutor padrão*/

	std::string getCor_pelo();  /**< Visualiza a cor do pêlo */
	void setCor_pelo(std::string cor_pelo_); /**< Altera a cor do pêlo */
};

#endif