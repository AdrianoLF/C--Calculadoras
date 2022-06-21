#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	
	comeco://Ponto de partida que está sendo usado para recomeçar o cálculo

	setlocale(LC_ALL, "Portuguese");//Comando para o cmd ler caracteres em português
	
	float num1, num2, resultado;
	int answer1;//Variáveis sendo criadas para recolher valores
	char op;//Variável operação
	bool answer1Bool;//Var com valor boolean
	
	cout << "Digite o primeiro numero: " << endl;//Recolhendo valor para var 'num1'
	cin >> num1;
	
	operacao:
	cout << "Digite uma operação [+, -, /, *]" << endl;//Recolhendo valor para var 'op'
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
		cout << "\nOperador inválido, digite novamente:\n";
		goto operacao;
	}
	
	cout << "Deseja ver os valores inseridos? Se sim, digite 1, caso contrário, digite 2" << endl;
	cin >> answer1;//O valor inserido pelo usuário é atribuido a var 'answer1'
	answer1Bool = answer1<2;//Se 'answer1' é maior que 1, 'true'
	
	
	if(answer1Bool)//Se answer1Bool é 'true', aplicar a sentença
	{
		cout << endl << "Primeiro Numero:" << num1 << endl;
		cout << "Operação escolhida:" << op << endl;
		cout << "Segundo Numero:" << num2 << endl;
	}
	
	cout << endl << "Seu resultado é: "<< resultado << "\n\n";//imprimir resultado

	system("pause");
	goto comeco;

	return 0;
}
