#include <iostream>
#include <vector>
#include <memory>
#include "produto.h"
#include "fruta.h"
#include "bebida.h"
#include "roupa.h"

using namespace std;

int main(int argc, char const *argv[])
{
	std::vector<shared_ptr<Produto>> lista;
	
	lista.push_back(make_shared<Fruta>("001002003-45","Maca verde",8.70,"01/10/2017",18));
	lista.push_back(make_shared<Fruta>("001002004-44","Laranja",4.75,"23/09/2017",15));
	lista.push_back(make_shared<Fruta>("001002005-11","Limao verde",2.30,"01/10/2017",25));

	lista.push_back(make_shared<Bebida>("001002006-36","Skol",4.25,20));
	lista.push_back(make_shared<Bebida>("001002007-58","Smirnoff",8.50,5));
	lista.push_back(make_shared<Bebida>("001002008-69","Dolly",3.10,0));

	lista.push_back(make_shared<Roupa>("001002009-24","Camisa",29.90,"Marisa",'M','G'));
	lista.push_back(make_shared<Roupa>("001002010-78","Jaqueta",69.90,"C&A",'M','M'));
	lista.push_back(make_shared<Roupa>("001002011-00","Vestido",129.60,"Riachuelo",'F','P'));

	for (auto i = lista.begin(); i != lista.end(); ++i)
	{
		std::cout << (**i) << std::endl;	
	}

	return 0;
}