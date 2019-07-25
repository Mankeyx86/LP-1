#include <iostream>
#include "Data.h"

using namespace std;

int main(){
	Data data1=Data(25,3,1997), data2=Data(35,14,1);
	Data data3=Data(0,0,0);

	data3.setDia(31);
	data3.setMes(12);
	data3.setAno(2010);

	cout << "Data1: "<< data1.getDia() << ":" << data1.getMes() << ":" << data1.getAno() << endl;
	cout << "Data2: "<< data2.getDia() << ":" << data2.getMes() << ":" << data2.getAno() << endl;
	cout << "Data3: "<< data3.getDia() << ":" << data3.getMes() << ":" << data3.getAno() << endl;

	data3.avancarDia();

	cout << "Data3: "<< data3.getDia() << ":" << data3.getMes() << ":" << data3.getAno() << endl;

	return 0;
}
