#include <iostream>
using namespace std;
main ( )
{
	setlocale (LC_ALL, "Portuguese");
 float base, altura, area; //declara��o de vari�veis 
 cout << "--------C�lculo da base de um ret�ngulo--------- \n \n"; //enunciado da aplica��o
 cout << "Digite a base: "; //cout << = Console.Writeline("")
 cin >> base; //cin >> = Console.Readline()
 cout << "Digite a altura:  ";
 cin >> altura;
 area = base * altura;
 cout << "A �rea do ret�ngulo �: " << area; 
}
