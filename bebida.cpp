#include <iomanip>
#include "bebida.h"

Bebida::Bebida() {}

Bebida::Bebida(std::string _codigo, std::string _descricao, short _preco, 
	short _teoralc):
	Produto(_codigo, _descricao, _preco), m_teor_alcoolico(_teoralc) {}

Bebida::~Bebida() {}

short 
Bebida::getTeorAlc() {
	return m_teor_alcoolico;
}

void 
Bebida::setTeorAlc(short _teoralc) {
	m_teor_alcoolico = _teoralc;
}
 
std::ostream& 
Bebida::print(std::ostream &o) const {
	o << std::setfill (' ') << std::setw (10) << m_cod_barras << " | " 
		<< std::setfill ('.') << std::setw (20) << m_descricao << " | " 
		<< std::setfill (' ') << std::setw (5) << m_preco << " | "
		<< std::setfill (' ') << std::setw (3) << m_teor_alcoolico;
	return o;
}
