#include "anfibioNativo.h"

AnfibioNativo::AnfibioNativo() {}

std::ostream& AnfibioNativo::printAnimal( std::ostream & _os ){

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
	//_os << "Mudas:\t\t"  		<< this->getTotal_mudas() << std::endl;
	_os << "Ultima Muda:\t"  		<< this->get_ultima_muda() << std::endl;
	//_os << "Ibama:\t\t"    	<< this->get_ibama() << std::endl;
	_os << "UF Origem:\t"    	<< this->getUf_origem() << std::endl;
	_os << "Autorizacao:\t"    << this->getAutorizacao() << std::endl;
	_os << std::endl;

	return _os;

}

AnfibioNativo::~AnfibioNativo() {}