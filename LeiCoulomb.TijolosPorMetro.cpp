#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;
int main(){
//Calcular Lei de coulomb(N) = ( k (N.m^2/C^2) . Q [carga eletrica](C) . q [carga eletrica de prova](C)) / d^2 (m)
//Calcular quantidade de tijolos por metro quadrado = base (m) . altura (m) . 16

	setlocale(LC_ALL, "Portuguese");//Leitura de caracteres especiais em portugu�s
	char resposta1;
	cout << "Seja muito bem vindo � minha interface! Escolha uma das seguintes calculadoras:" << endl;
	comeco://Para criar um loop infinito com uso do goto
	cout << "Para escolher 'Lei de coulomb', insira 0.\nJ� para escolher 'Tijolos por metro quadrado', digite 1\n";
	cin >> resposta1;//atribuindo valor � 'resposta1'
	
	if(resposta1 == '0'){//Se o valor que o usu�rio inseriu � '0', come�ar o calculo de lei de coulomb
		double forca, cargaE, cargaEP, d, potencia, k;//Criando vari�veis
		cout << "\nLei de Coulomb\n";
		
		potencia=pow(10, 9);//Potencia��o
		k=9*potencia;
		
		//Recolhendo valores para as vari�veis
		cout << "Qual o valor da carga el�trica (Q), em coulombs?" << endl;
		cin >> cargaE;
		cout << "Qual o valor da carga el�trica de prova (q), em coulombs?" << endl;
		cin >> cargaEP;
		cout << "Qual a dist�ncia entre as cargas, em metros?" << endl;
		cin >> d;
		
		//Realizando c�lculo final e imprimindo resultado
		forca=(k*cargaE*cargaEP)/(d*d);
		cout << "A for�a eletrost�tica � de: " << forca << " N.\n\n";
	}
	
	
	
			
	else if(resposta1 == '1'){//Se o valor que o usu�rio inseriu � '0', come�ar o calculo de Tijolos por metro quadrado
		double base, altura, tijolos, area;
				
		cout << "\nTijolos por metro quadrado\n";
		
		//Recolhendo valores para 'base'
		baseBack:
		cout << "\nQual o tamanho da base em metros?" << endl;
		cin >> base;
		if(base<=0){//Se o comprimento � menor que 0, impimir mensagem e ir para 'baseBack:'
			cout << "\nValor inv�lido. Tente algum n�mero positivo\n";
			goto baseBack;
		}
		
		//Recolhendo valores para 'altura'
		alturaBack:
		cout << "Qual o tamanho da altura em metros?" << endl;
		cin >> altura;
		if(altura<=0){
			cout << "\nValor inv�lido. Tente algum n�mero positivo\n";
			goto alturaBack;
		}
		
		//Calculo final e impress�o de resultado
		area=base*altura;
		tijolos=area*39.68;
		cout << "� poss�vel colocar uma m�dia de " << trunc(tijolos) << " tijolos inteiros (6 furos padr�o) em " << area << " metros quadrados.\n\n\n";
	}	
	
	
	
		
	else{//Se o valor que o usu�rio inseriu n�o � nenhum dos dois, imprimir mensagem, e retornar para o goto
		cout << "\nValor inv�lido.\n";
	}
			
	
	goto comeco;
	}

	


