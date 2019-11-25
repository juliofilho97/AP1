#include "aveNativo.h"

AveNativo::AveNativo() {}

AveNativo::AveNativo(int id_, std::string classe_, std::string nome_cientifico_,
		char sexo_, double tamanho_, std::string dieta_, Veterinario veterinario_,
		Tratador tratador_, std::string nome_batismo_, double tamanho_do_bico_cm_,
			double envergadura_das_asas_) {
	m_id = id_;
	m_classe = classe_;
	m_nome_cientifico = nome_cientifico_;
	m_sexo = sexo_;
	m_tamanho = tamanho_;
	m_dieta = dieta_;
	m_veterinario = veterinario_;
	m_tratador = tratador_;
	m_nome_batismo = nome_batismo_;
	m_tamanho_do_bico_cm = tamanho_do_bico_cm_;
	m_envergadura_das_asas = envergadura_das_asas_; }

AveNativo::~AveNativo() {}