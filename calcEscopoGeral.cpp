#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	
	comeco://Ponto de partida que est� sendo usado para recome�ar o c�lculo

	setlocale(LC_ALL, "Portuguese");//Comando para o cmd ler caracteres em portugu�s
	
	float num1, num2, resultado;
	int answer1;//Vari�veis sendo criadas para recolher valores
	char op;//Vari�vel opera��o
	bool answer1Bool;//Var com valor boolean
	
	cout << "Digite o primeiro numero: " << endl;//Recolhendo valor para var 'num1'
	cin >> num1;
	
	operacao:
	cout << "Digite uma opera��o [+, -, /, *]" << endl;//Recolhendo valor para var 'op'
	cin >> op;

	cout << "Digite o segundo numero: " << endl;//Recolhendo valor para var 'num2'
	cin >> num2;
	
	if(op == '+')
		resultado = num1 + num2;
	else if(op == '-')
		resultado = num1 - num2;
	else if(op == '*')
		resultado = num1 * num2;
	else if(op == '/')
		resultado = num1 / num2;
	else{
		cout << "\nOperador inv�lido, digite novamente:\n";
		goto operacao;
	}
	
	cout << "Deseja ver os valores inseridos? Se sim, digite 1, caso contr�rio, digite 2" << endl;
	cin >> answer1;//O valor inserido pelo usu�rio � atribuido a var 'answer1'
	answer1Bool = answer1<2;//Se 'answer1' � maior que 1, 'true'
	
	
	if(answer1Bool)//Se answer1Bool � 'true', aplicar a senten�a
	{
		cout << endl << "Primeiro Numero:" << num1 << endl;
		cout << "Opera��o escolhida:" << op << endl;
		cout << "Segundo Numero:" << num2 << endl;
	}
	
	cout << endl << "Seu resultado �: "<< resultado << "\n\n";//imprimir resultado

	system("pause");
	goto comeco;

	return 0;
}
