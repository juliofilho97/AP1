#include "animalSilvestre.h"

AnimalSilvestre::AnimalSilvestre() {}

AnimalSilvestre::AnimalSilvestre(std::string autorizacao_ibama_) {
	m_autorizacao_ibama = autorizacao_ibama_;
}

AnimalSilvestre::~AnimalSilvestre() {}

std::string AnimalSilvestre::getAutorizacao_ibama() {
	return m_autorizacao_ibama;
}

void AnimalSilvestre::setAutorizacao_ibama(std::string autorizacao_ibama_) {
	m_autorizacao_ibama = autorizacao_ibama_;
}