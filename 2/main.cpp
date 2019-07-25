#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

int main(){
	Invoice mouse=Invoice(1,1,"Mouse usb",30.00);
	Invoice teclado=Invoice(0,0," ",0);
	Invoice monitor=Invoice(3,3,"Monitor Full HD",200.00);

	teclado.setNum(2);
	teclado.setQtd(1);
	teclado.setDesc("Teclado usb");
	teclado.setPreco(60.00);
	
	cout << mouse.getNum() << endl << mouse.getQtd() << endl << mouse.getDesc() << endl << mouse.getPreco() << endl << endl;
	cout << teclado.getNum() << endl << teclado.getQtd() << endl << teclado.getDesc() << endl << teclado.getPreco() << endl << endl;
	cout << monitor.getNum() << endl << monitor.getQtd() << endl << monitor.getDesc() << endl << monitor.getPreco() << endl << monitor.getInvoiceAmount() << endl;


	return 0;
}
