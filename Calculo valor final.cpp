#include <iostream>
using namespace std;
main ( )
{
	setlocale (LC_ALL, "Portuguese");
	
	//variaveis
	float custo, comissao, impostos, preco_final;
	
	//entrada
	cout << "-----Calculadora de pre�o final----- \n \n";
	cout << "Informe o pre�o de custo: ";
	cin >> custo; 
	
	//processo
	impostos = custo * 0.45;
	comissao = custo * 0.10;
	preco_final = custo + impostos + comissao; 
	
	//saida
	cout << endl;
	cout << "O custo de f�brica �: " << custo; 
	cout << endl;
	cout << "Os impostos correspondem a: " << impostos;
	cout << endl;
	cout << "A comiss�o �: " << comissao; 
	cout << endl;
	cout << "o pre�o final ao consumidor �: ";
	cout << preco_final;
	
	
}
