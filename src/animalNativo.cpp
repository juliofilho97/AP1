#include "animalNativo.h"

AnimalNativo::AnimalNativo() {}

AnimalNativo::AnimalNativo(std::string uf_origem_, std::string autorizacao_,
						std::string autorizacao_ibama_) {
	m_uf_origem = uf_origem_;
	m_autorizacao = autorizacao_;
	m_autorizacao_ibama = autorizacao_ibama_; }

AnimalNativo::~AnimalNativo() {}

std::string AnimalNativo::getUf_origem() {
	return m_uf_origem;
}

void AnimalNativo::setUf_origem(std::string uf_origem_) {
	m_uf_origem = uf_origem_;
}

std::string AnimalNativo::getAutorizacao() {
	return m_autorizacao;
}

void AnimalNativo::setAutorizacao(std::string autorizacao_) {
	m_autorizacao = autorizacao_;
}