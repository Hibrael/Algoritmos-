#include <iostream>
using namespace std;
main ( )
{
	setlocale (LC_ALL, "Portuguese");
	
	//variaveis
	string nome;
	float preco_unitario, comissao;
	int qtde;
	
	//entrada
	cout << "-----Calculadora de comiss�o----- \n \n";
	cout << "Informe seu nome: ";
	cin >> nome;
	cout << endl;
	cout << "informe o pre�o da pe�a: ";
	cin >> preco_unitario;
	cout << "Informe a quantidade vendida: ";
	cin >> qtde;
	
	//processo
	comissao = (qtde * preco_unitario) * 0.05;
	
	//saida
	cout << endl;
	cout << "Parab�ns! Voc� vendeu " << qtde << " pe�a, no valor de " <<preco_unitario;
	cout << endl;
	cout << "O valor da comiss�o �: " << comissao;

}
