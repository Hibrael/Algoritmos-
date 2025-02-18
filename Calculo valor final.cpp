#include <iostream>
using namespace std;
main ( )
{
	setlocale (LC_ALL, "Portuguese");
	
	//variaveis
	float custo, comissao, impostos, preco_final;
	
	//entrada
	cout << "-----Calculadora de preço final----- \n \n";
	cout << "Informe o preço de custo: ";
	cin >> custo; 
	
	//processo
	impostos = custo * 0.45;
	comissao = custo * 0.10;
	preco_final = custo + impostos + comissao; 
	
	//saida
	cout << endl;
	cout << "O custo de fábrica é: " << custo; 
	cout << endl;
	cout << "Os impostos correspondem a: " << impostos;
	cout << endl;
	cout << "A comissão é: " << comissao; 
	cout << endl;
	cout << "o preço final ao consumidor é: ";
	cout << preco_final;
	
	
}
