#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");//Lendo caracteres do código em Português

//Fiz o código a seguir para fazer o calculo de 'Vazão de esgoto' e 'Dimensionamento de água potável'
//Fórmula para 'Vazão de esgoto' (Litros/segundo) = 'Área edificada' (m^2) . 232 . 10^(-6)
//Fórmula para 'Dimensionamento de água potável' (L) = 'Número de pessoas' . 'Litros por pessoa' (L) . 'Dias de reserva'
	
	start0://Retorno para o começo do código
	char tipoCalculo;
	cout << "Olá! Você está na minha calculadora, escolha uma das seguintes opções de calculo:" << endl;
	start://Retorno para cabeçario do código
	cout << "Vazão de esgoto (digite 0)" << endl;
	cout << "Dimensionamento de água potável (digite 1)" << endl;
	cin >> tipoCalculo;
	
	
	if(isdigit(tipoCalculo))//Se 'tipoCalculo' é lido como um número, fazer:
	{
		if(tipoCalculo == '1')//Se 'tipoCalculo é igual a 1
		{
			double dimAguaP, litroPessoa, dias;//Criando variáveis
			int pessoas;
			cout << "Você escolheu Dimensionamento de água potável\n";
			
			//Dando valor às variáveis
			pessoasReturn://Retorno caso 'pessoas' seja igual menor que 0
			cout << "\nInsira o valor de litros por pessoa:\n";
			cin >> pessoas;
			if(pessoas<=0){
				cout << "O número de pessoas deve ser maior que 0\n";
				goto pessoasReturn;
			}
			
			litrosPessoaReturn://Retorno caso 'litroPessoa' seja igual menor que 0
			cout << "\nInsira quantas pessoas estão sendo levadas em consideração para o calculo:\n";
			cin >> litroPessoa;
			if(litroPessoa<=0){
				cout << "O número de litros por pessoa deve ser maior que 0\n";
				goto litrosPessoaReturn;
			}
			
			diasReturn://Retorno caso dias seja igual menor que 0
			cout << "\nInsira a quantidade de dias de reserva estão sendo considerados para o calculo:\n";
			cin >> dias;
			if(dias<=0){
				cout << "O número de dias deve ser maior que 0\n";
				goto diasReturn;
			}
			
			dimAguaP=pessoas*litroPessoa*dias;
			cout << "O dimensionamento de água potável ideal é de " << dimAguaP << " litros";		
			
		}
		else if(tipoCalculo == '0')//Se 'tipoCalculo é igual a 0
		{
			double areaE, vazaoEsgoto;//Criando variáveis
			cout << "Você escolheu Vazão de esgoto\n";
			
			areaEconfirm://Retorno para confirmar se area é positivo
			cout << "\nPara calcularmos a vazão de esgoto insira o valor da área edificada (em metros quadrados)\n";
			cin >> areaE;
			
			if(areaE <= '0')//Se 'areaE' é menor igual a zero, fazer:
			{
				cout << "O valor de área tem de ser maior que 0. Portanto, digite novamente";
				goto areaEconfirm;
			}
			vazaoEsgoto=areaE*232*0.000001;
			cout << "A vazão de esgoto é de " << vazaoEsgoto << " litros por segundo";	
		}
		
		else//Se nem 1, nem 0 foram digitados
		{
			cout << "Você não escolheu um valor válido.\n\n";
			goto start;//Fazendo retorno para cabeçario do código
		}	
	}
	
	else{
		cout << "Atente-se que você digitou um caractere inválido.\n\n";
		goto start;//Fazendo retorno para cabeçario do código
	}
	
	cout << "\n\nCaso queira fazer mais cálculos ";
	system ("pause");
	goto start0;//Retorno para o começo do código

}
