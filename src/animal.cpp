#include "animal.h"

Animal::Animal() {}

Animal::Animal(int id_, std::string classe_, std::string nome_cientifico_,
				char sexo_, double tamanho_, std::string dieta_, Veterinario veterinario_,
				Tratador tratador_, std::string nome_batismo_) {
	m_id = id_;
	m_classe = classe_;
	m_nome_cientifico = nome_cientifico_;
	m_sexo = sexo_;
	m_tamanho = tamanho_;
	m_dieta = dieta_;
	m_veterinario = veterinario_;
	m_tratador = tratador_;
	m_nome_batismo = nome_batismo_; }

Animal::~Animal() {}

int Animal::getId() {
	return m_id;
}

void Animal::setId(int id_) {
	m_id = id_;
}

std::string Animal::getClasse() {
	return m_classe;
}

void Animal::setClasse(std::string classe_) {
	m_classe = classe_;
}

std::string Animal::getNome_cientifico() {
	return m_nome_cientifico;
}

void Animal::setNome_cientifico(std::string nome_cientifico_) {
	m_nome_cientifico = nome_cientifico_;
}

char Animal::getSexo() {
	return m_sexo;
}

void Animal::setSexo(char sexo_) {
	m_sexo = sexo_;
}

double Animal::getTamanho() {
	return m_tamanho;
}

void Animal::setTamanho(double tamanho_) {
	m_tamanho = tamanho_;
}

std::string Animal::getDieta() {
	return m_dieta;
}

void Animal::setDieta(std::string dieta_) {
	m_dieta = dieta_;
}

Veterinario Animal::getVeterinario() {
	return m_veterinario;
}

void Animal::setVeterinario(Veterinario veterinario_) {
	m_veterinario = veterinario_;
}

Tratador Animal::getTratador() {
	return m_tratador;
}

void Animal::setTratador(Tratador tratador_) {
	m_tratador = tratador_;
}

std::string Animal::getNome_batismo() {
	return m_nome_batismo;
}

void Animal::setNome_batismo(std::string nome_batismo_) {
	m_nome_batismo = nome_batismo_;
}