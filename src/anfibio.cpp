#include "anfibio.h"


int Anfibio::getTotal_de_mudas( void )
{
	return m_total_mudas;
}

std::string Anfibio::get_ultima_muda( void )
{
	return m_ultima_muda;
}

void Anfibio::setTotal_de_mudas( int new_total )
{
	m_total_mudas = new_total;
}
void Anfibio::set_ultima_muda( std::string new_muda )
{
	m_ultima_muda = new_muda;
}

std::ostream& Anfibio::printAnimal( std::ostream & _os )
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
	//_os << "Mudas:\t\t"  		<< this->getTotal_mudas() << std::endl;
	_os << "Ultima Muda:\t"  		<< this->get_ultima_muda() << std::endl;
	_os << std::endl;

	return _os;
}