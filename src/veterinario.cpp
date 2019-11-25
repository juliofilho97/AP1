#include "veterinario.h"

Veterinario::Veterinario() {}

Veterinario::Veterinario(int id_, std::string nome_, std::string cpf_,
			short idade_, short tipo_sanguineo_, char fator_rh_,
			std::string especialidade_, std::string crmv_) {
	m_id = id_;
	m_nome = nome_;
	m_cpf = cpf_;
	m_idade = idade_;
	m_tipo_sanguineo = tipo_sanguineo_;
	m_fator_rh = fator_rh_;
	m_especialidade = especialidade_;
	m_crmv = crmv_; }

Veterinario::~Veterinario(){}


std::string Veterinario::getCrmv() {
	return m_crmv;
}

void Veterinario::setCrmv(std::string crmv_) {
	m_crmv = crmv_;
}