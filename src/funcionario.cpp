//using namespace PetFera;
//using namespace std;
#include <fstream>
#include "funcionario.h"
#include "veterinario.h"
#include "tratador.h"

Funcionario::Funcionario() {}

Funcionario::Funcionario(int id_, string nome_, string cpf_,
			short idade_, short tipo_sanguineo_, char fator_rh_,
			string especialidade_) {
	m_id = id_;
	m_nome = nome_;
	m_cpf = cpf_;
	m_idade = idade_;
	m_tipo_sanguineo = tipo_sanguineo_;
	m_fator_rh = fator_rh_;
	m_especialidade = especialidade_; }

Funcionario::~Funcionario() {}

std::int Funcionario::getId() {
	return m_id;
}

std::void Funcionario::setId(int id_) {
	m_id = id_;
}

std::string Funcionario::getNome() {
	return m_nome;
}

std::void Funcionario::setNome(string nome_) {
	m_nome = nome_;
}

std::string Funcionario::getCpf() {
	return m_cpf;
}

std::void Funcionario::setCpf(string cpf_) {
	m_cpf = cpf_;
}

std::short Funcionario::getIdade() {
	return m_idade;
}

std::void Funcionario::setIdade(short idade_) {
	m_idade = idade_;
}

std::short Funcionario::getTipo_sanguineo() {
	return m_tipo_sanguineo;
}

std::void Funcionario::setTipo_sanguineo(short tipo_sanguineo_) {
	m_tipo_sanguineo = tipo_sanguineo_;
}

std::char Funcionario::getFator_rh() {
	return m_fator_rh;
}

std::void Funcionario::setFator_rh(char fator_rh_) {
	m_fator_rh = fator_rh_;
}

std::string Funcionario::getEspecialidade() {
	return m_especialidade;
}

std::void Funcionario::setEspecialidade(string especialidade_) {
	m_especialidade = especialidade_;
}

ostream& Funcionario::printFuncionario( ostream & _os ) {

	_os << std::endl;
	_os << "  Ficha do Funcionario  " << std::endl;
	_os << "ID:\t\t" << m_id << std::endl;
	_os << "Nome:\t\t" << m_nome << std::endl;
	_os << "CPF:\t" << m_cpf << std::endl;
	_os << "Idade:\t\t" << m_idade << std::endl;
	_os << "Tipo Sanguineo:\t\t" << m_tipo_sanguineo << std::endl;
	_os << "Fator RH:\t\t" << m_fator_rh << std::endl;
	_os << "Especialidade:\t" << m_especialidade << std::endl;
	_os << std::endl;

	return _os;

}








