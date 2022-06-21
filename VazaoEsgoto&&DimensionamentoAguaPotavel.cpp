#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");//Lendo caracteres do c�digo em Portugu�s

//Fiz o c�digo a seguir para fazer o calculo de 'Vaz�o de esgoto' e 'Dimensionamento de �gua pot�vel'
//F�rmula para 'Vaz�o de esgoto' (Litros/segundo) = '�rea edificada' (m^2) . 232 . 10^(-6)
//F�rmula para 'Dimensionamento de �gua pot�vel' (L) = 'N�mero de pessoas' . 'Litros por pessoa' (L) . 'Dias de reserva'
	
	start0://Retorno para o come�o do c�digo
	char tipoCalculo;
	cout << "Ol�! Voc� est� na minha calculadora, escolha uma das seguintes op��es de calculo:" << endl;
	start://Retorno para cabe�ario do c�digo
	cout << "Vaz�o de esgoto (digite 0)" << endl;
	cout << "Dimensionamento de �gua pot�vel (digite 1)" << endl;
	cin >> tipoCalculo;
	
	
	if(isdigit(tipoCalculo))//Se 'tipoCalculo' � lido como um n�mero, fazer:
	{
		if(tipoCalculo == '1')//Se 'tipoCalculo � igual a 1
		{
			double dimAguaP, litroPessoa, dias;//Criando vari�veis
			int pessoas;
			cout << "Voc� escolheu Dimensionamento de �gua pot�vel\n";
			
			//Dando valor �s vari�veis
			pessoasReturn://Retorno caso 'pessoas' seja igual menor que 0
			cout << "\nInsira o valor de litros por pessoa:\n";
			cin >> pessoas;
			if(pessoas<=0){
				cout << "O n�mero de pessoas deve ser maior que 0\n";
				goto pessoasReturn;
			}
			
			litrosPessoaReturn://Retorno caso 'litroPessoa' seja igual menor que 0
			cout << "\nInsira quantas pessoas est�o sendo levadas em considera��o para o calculo:\n";
			cin >> litroPessoa;
			if(litroPessoa<=0){
				cout << "O n�mero de litros por pessoa deve ser maior que 0\n";
				goto litrosPessoaReturn;
			}
			
			diasReturn://Retorno caso dias seja igual menor que 0
			cout << "\nInsira a quantidade de dias de reserva est�o sendo considerados para o calculo:\n";
			cin >> dias;
			if(dias<=0){
				cout << "O n�mero de dias deve ser maior que 0\n";
				goto diasReturn;
			}
			
			dimAguaP=pessoas*litroPessoa*dias;
			cout << "O dimensionamento de �gua pot�vel ideal � de " << dimAguaP << " litros";		
			
		}
		else if(tipoCalculo == '0')//Se 'tipoCalculo � igual a 0
		{
			double areaE, vazaoEsgoto;//Criando vari�veis
			cout << "Voc� escolheu Vaz�o de esgoto\n";
			
			areaEconfirm://Retorno para confirmar se area � positivo
			cout << "\nPara calcularmos a vaz�o de esgoto insira o valor da �rea edificada (em metros quadrados)\n";
			cin >> areaE;
			
			if(areaE <= '0')//Se 'areaE' � menor igual a zero, fazer:
			{
				cout << "O valor de �rea tem de ser maior que 0. Portanto, digite novamente";
				goto areaEconfirm;
			}
			vazaoEsgoto=areaE*232*0.000001;
			cout << "A vaz�o de esgoto � de " << vazaoEsgoto << " litros por segundo";	
		}
		
		else//Se nem 1, nem 0 foram digitados
		{
			cout << "Voc� n�o escolheu um valor v�lido.\n\n";
			goto start;//Fazendo retorno para cabe�ario do c�digo
		}	
	}
	
	else{
		cout << "Atente-se que voc� digitou um caractere inv�lido.\n\n";
		goto start;//Fazendo retorno para cabe�ario do c�digo
	}
	
	cout << "\n\nCaso queira fazer mais c�lculos ";
	system ("pause");
	goto start0;//Retorno para o come�o do c�digo

}
