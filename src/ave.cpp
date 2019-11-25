#include "ave.h"

Ave::Ave() {}
/*
Ave::Ave(int id_, std::string classe_, std::string nome_cientifico_,
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
	*/


Ave::~Ave() {}

double Ave::getTamanho_do_bico_cm() {
	return m_tamanho_do_bico_cm;
}

void Ave::setTamanho_do_bico_cm(double tamanho_do_bico_cm_) {
	m_tamanho_do_bico_cm = tamanho_do_bico_cm_;
}

double Ave::getEnvergadura_das_asas() {
	return m_envergadura_das_asas;
}

void Ave::setEnvergadura_das_asas(double envergadura_das_asas_) {
	m_envergadura_das_asas = envergadura_das_asas_;
}
std::ostream& Ave::printAnimal( std::ostream & _os )
{
	_os << std::endl;
	_os << "Ficha do animal " << std::endl;
	_os << "ID:\t\t"     		<< this->getId() << std::endl;
	_os << "Classe:\t\t"   	<< this->getClasse() << std::endl;
	_os << "Cientifico:\t"  	<< this->getNome_cientifico() << std::endl;
	_os << "Batismo:\t"    	<< this->getNome_batismo() << std::endl;
	_os << "Dieta:\t\t"    	<< this->getDieta() << std::endl;
	_os << "Sexo:\t\t"    		<< this->getSexo() << std::endl;
	//_os << "Veterinario:\t"  	<< (this->getVeterinario()!=nullptr?this->getVeterinario()->getNome():"") << std::endl;
	//_os << "Tratador:\t"  		<< (this->getTratador()!=nullptr?this->getTratador()->getNome():"") << std::endl;
	_os << "Bico:\t\t"  		<< this->getTamanho_do_bico_cm() << std::endl;
	_os << "Envergadura:\t"  	<< this->getEnvergadura_das_asas() << std::endl;
	_os << std::endl;

	return _os;
}