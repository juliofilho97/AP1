#include "reptilExotico.h"

ReptilExotico::ReptilExotico() {}

ReptilExotico::ReptilExotico(int id_, std::string classe_, std::string nome_cientifico_,
		char sexo_, double tamanho_, std::string dieta_, Veterinario veterinario_,
		Tratador tratador_, std::string nome_batismo_, std::string tipo_veneno_) {
	m_id = id_;
	m_classe = classe_;
	m_nome_cientifico = nome_cientifico_;
	m_sexo = sexo_;
	m_tamanho = tamanho_;
	m_dieta = dieta_;
	m_veterinario = veterinario_;
	m_tratador = tratador_;
	m_nome_batismo = nome_batismo_;
	m_tipo_veneno = tipo_veneno_; }

ReptilExotico::~ReptilExotico() {}