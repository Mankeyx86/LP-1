#include <iostream>
#include "Pessoa.h"
#include <string>
using namespace std;

int main(){
	Pessoa pessoa1=Pessoa("Carlos",22,"84 9 96140828");
	Pessoa pessoa2=Pessoa("Karol");
	Pessoa pessoa3=Pessoa("");

	pessoa2.setIdade(22);
	pessoa2.setTelefone("84 9 96133122");
	
	pessoa3.setNome("Kaliane");
	pessoa3.setIdade(30);
	pessoa3.setTelefone("84 9 91233731");

	cout << pessoa1.getNome() << endl << pessoa1.getIdade() << " " << pessoa1.getTelefone() << endl << endl;
	cout << pessoa2.getNome() << endl << pessoa2.getIdade() << " " << pessoa2.getTelefone() << endl << endl;
	cout << pessoa3.getNome() << endl << pessoa3.getIdade() << " " << pessoa3.getTelefone() << endl << endl;


	return 0;
}
