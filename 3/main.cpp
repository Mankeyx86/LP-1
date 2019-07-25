#include <iostream>
#include <string>
#include "Empregado.h"

using namespace std;

int main() {
	Empregado empregado1=Empregado("Carlos","Maia",2000.00);
	Empregado empregado2=Empregado("","",0);

	empregado2.setNome("Karol");
	empregado2.setSobrenome("Maia");
	empregado2.setSalario(3500.00);

	cout << "O salario anual de " << empregado1.getNome() << " " << empregado1.getSobrenome() << " eh: " << empregado1.getSalario()*12 << endl; 
	cout << "O salario anual de " << empregado2.getNome() << " " << empregado2.getSobrenome() << " eh: " << empregado2.getSalario()*12 << endl; 
	cout << endl << endl;
	cout << "O salario anual de " << empregado1.getNome() << " " << empregado1.getSobrenome() << " eh: " << empregado1.getSalario()*12*1.1 << endl; 
	cout << "O salario anual de " << empregado2.getNome() << " " << empregado2.getSobrenome() << " eh: " << empregado2.getSalario()*12*1.1 << endl;
	
  
	return 0;
}
