#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>
using namespace std;


float calculaImposto();
int soma(int vlr1, int vlr2);
void alterarDado(int& vlr1);

int main() {
	
	//float resultado;	
	
	//resultado = calculaImposto();
	
	//cout<<"Resultado do calculo: "<< resultado << endl << endl;
	
	/*int resultado;
	resultado = soma(10, 20);
	
	cout<<"Resultado do calculo: "<< resultado << endl << endl;*/
	
	int vlr1;
	
	
	vlr1 = 20;
	
	alterarDado(vlr1);
	
	cout << "Valor alterado: " << vlr1 << "\n\n";
	
	system("pause");
	return 0;

}
float calculaImposto() {
	float sal;
	float vlrImposto;
	
	sal = 2000;
	
	vlrImposto = sal * 0.1;
	
	return vlrImposto;
}

int soma(int vlr1, int vlr2) {
	int total;
	
	total = vlr1 + vlr2;
	
	return total;
}

void alterarDado(int& vlr1) {
	
	vlr1 = 100;
}



