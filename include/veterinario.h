/**
* @file veterinario.h
* @brief Classe responsável pelo veterinário dos animais
* @author Júlio Cesar Fernandes Maia Filho e Letícia Moura Pinheiro
* @since 07/11/2019
* @date 09/11/2019
*/

#ifndef VETERINARIO_H
#define VETERINARIO_H

#include "funcionario.h"

/**
* @brief Classe responsável pelo veterinário dos animais
* @details Nesta classe, o usuário pode definir características especíificas
*			dos veterinários, como o conselho regional à qual ele pertence.
*/

class Veterinario : public Funcionario {
private:
	std::string m_crmv; /**< Define o conselho regional de medicina veterinária à qual o veterinário pertence*/
public:
	Veterinario(); /**< Construtor padrão*/

	/** @brief Construtor parametrizado. */
	Veterinario(int id_, std::string nome_, std::string cpf_,
				short idade_, short tipo_sanguineo_, char fator_rh_,
				std::string especialidade_, std::string crmv_);

	~Veterinario();/**< Destrutor padrão*/
	
	std::string getCrmv();
	void setCrmv(std::string crmv_);
};

#endif