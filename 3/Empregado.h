#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <string>

using namespace std;

class Empregado{
	private:
	string nome;
	string sobrenome;
	float salario;	

	public:
	Empregado(string nome, string sobrenome, float salario);
	
	string getNome();
	string getSobrenome();
	float getSalario();
	void setNome(string nome);
	void setSobrenome(string sobrenome);
	void setSalario(float salario);
	
	
};


#endif
