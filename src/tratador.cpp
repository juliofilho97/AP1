#include "tratador.h"

Tratador::Tratador() {}

Tratador::Tratador(int id_, std::string nome_, std::string cpf_,
			short idade_, short tipo_sanguineo_, char fator_rh_,
			std::string especialidade_, int nivel_de_seguranca_) {
	m_id = id_;
	m_nome = nome_;
	m_cpf = cpf_;
	m_idade = idade_;
	m_tipo_sanguineo = tipo_sanguineo_;
	m_fator_rh = fator_rh_;
	m_especialidade = especialidade_;
	m_nivel_de_seguranca = nivel_de_seguranca_; }

Tratador::~Tratador(){}

int Tratador::getNivel_de_seguranca() {
	return m_nivel_de_seguranca;
}

void Tratador::setNivel_de_seguranca(int nivel_de_seguranca_) {
	m_nivel_de_seguranca = nivel_de_seguranca_;
}