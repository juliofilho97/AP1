#include "animalExotico.h"

AnimalExotico::AnimalExotico() {}

AnimalExotico::AnimalExotico(std::string pais_origem_, std::string cidade_origem_,
			std::string autorizacao_ibama_) {
	m_pais_origem = pais_origem_;
	m_cidade_origem = cidade_origem_;
	m_autorizacao_ibama = autorizacao_ibama_; }

AnimalExotico::~AnimalExotico() {}

std::string AnimalExotico::getPais_origem() {
	return m_pais_origem;
}

void AnimalExotico::setPais_origem(std::string pais_origem_) {
	m_pais_origem = pais_origem_;
}

std::string AnimalExotico::getCidade_origem() {
	return m_cidade_origem;
}

void AnimalExotico::setCidade_origem(std::string cidade_origem_) {
	m_cidade_origem = cidade_origem_;
}