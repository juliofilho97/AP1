/**
* @file ave.h
* @brief Classe das aves
* @author Júlio Cesar Fernandes Maia Filho e Letícia Moura Pinheiro
* @since 07/11/2019
* @date 09/11/2019
*/

#ifndef AVE_H
#define AVE_H

#include "animal.h"

/**
* @brief Classe responsável pelo controle das aves
* @details Nesta classe, o usuário pode definir características específicas das aves,
* 			como o tamanho do bico e a envergadura das asas.
*/

class Ave : public Animal {
private:
	/** Transforma a classe em abstrata, impedindo a instanciação de um objeto */
	virtual std::ostream& print(std::ostream& os) const = 0;
protected:
	double m_tamanho_do_bico_cm; /**< Define o tamanho do bico em centímetros*/
	double m_envergadura_das_asas; /**< Define a envergadura das asas da ave*/
public:
	Ave(); /**< Construtor padrão*/

	/** @brief Construtor parametrizado. */
	Ave(int id_, std::string classe_, std::string nome_cientifico_,
			char sexo_, double tamanho_, std::string dieta_, Veterinario veterinario_,
			Tratador tratador_, std::string nome_batismo_, double tamanho_do_bico_cm_,
			double envergadura_das_asas_);

	~Ave(); /**< Destrutor padrão*/

	double getTamanho_do_bico_cm(); /**< Visualiza o tamanho do bico (em cm) das aves */
	void setTamanho_do_bico_cm(double tamanho_do_bico_cm_); /**< Altera o tamanho do bico (em cm) das aves */

	double getEnvergadura_das_asas(); /**< Visualiza a envergadura das asas */
	void setEnvergadura_das_asas(double envergadura_das_asas_); /**< Altera a envergadura das asas */
	virtual std::ostream& printAnimal( std::ostream & _os );
};

#endif