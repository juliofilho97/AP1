/**
* @file animal.h
* @brief Classe base dos animais
* @author Júlio Cesar Fernandes Maia Filho e Letícia Moura Pinheiro
* @since 07/11/2019
* @date 08/11/2019
*/

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include "veterinario.h"
#include "tratador.h"

/**
* @brief Classe base para todos os grupos de animais
* @details Nesta classe o usuário pode fazer o controle geral de todos os animais. Ela permite a criação de animais de diferentes
subclasses, assim como suas configurações específicas (dieta, nome científico, veterinário e tratador responsável, etc.)
*/

class Animal {
protected:
	int m_id; /**< Define o número de identificação do animal */
	std::string m_classe; /**< Define a classe à qual o animal pertence */
	std::string m_nome_cientifico; /**< Define o nome científico do animal */
	char m_sexo; /**< Define o sexo do animal */
	double m_tamanho; /**< Define o tamanho médio (em metros) do animal */
	std::string m_dieta; /**< Define a dieta predominante do animal */
	Veterinario m_veterinario; /**< Define o veterinário associado ao animal */
	Tratador m_tratador; /**< Define o tratador associado ao animal */
	std::string m_nome_batismo; /**< Define o nome de batismo (nome pelo qual o animal atende) */
public:
	int getId();
	void setId(int id_);

	std::string getClasse();
	void setClasse(std::string classe_);

	std::string getNome_cientifico();
	void setNome_cientifico(std::string nome_cientifico_);

	char getSexo();
	void setSexo(char sexo_);

	double getTamanho();
	void setTamanho(double tamanho_);

	std::string getDieta();
	void setDieta(std::string dieta_);

	Veterinario getVeterinario();
	void setVeterinario(Veterinario veterinario_);

	Tratador getTratador();
	void setTratador(Tratador tratador_);

	std::string getNome_batismo();
	void setNome_batismo(std::string nome_batismo_);

	Animal(); /**< Construtor padrão*/

	/** @brief Construtor parametrizado. */
	Animal(int id_, std::string classe_, std::string nome_cientifico_,
		char sexo_, double tamanho_, std::string dieta_, Veterinario veterinario_,
		Tratador tratador_, std::string nome_batismo_);

	~Animal(); /**< Destrutor padrão*/
};

#endif