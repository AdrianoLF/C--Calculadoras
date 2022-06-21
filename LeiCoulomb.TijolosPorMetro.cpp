#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;
int main(){
//Calcular Lei de coulomb(N) = ( k (N.m^2/C^2) . Q [carga eletrica](C) . q [carga eletrica de prova](C)) / d^2 (m)
//Calcular quantidade de tijolos por metro quadrado = base (m) . altura (m) . 16

	setlocale(LC_ALL, "Portuguese");//Leitura de caracteres especiais em português
	char resposta1;
	cout << "Seja muito bem vindo à minha interface! Escolha uma das seguintes calculadoras:" << endl;
	comeco://Para criar um loop infinito com uso do goto
	cout << "Para escolher 'Lei de coulomb', insira 0.\nJá para escolher 'Tijolos por metro quadrado', digite 1\n";
	cin >> resposta1;//atribuindo valor à 'resposta1'
	
	if(resposta1 == '0'){//Se o valor que o usuário inseriu é '0', começar o calculo de lei de coulomb
		double forca, cargaE, cargaEP, d, potencia, k;//Criando variáveis
		cout << "\nLei de Coulomb\n";
		
		potencia=pow(10, 9);//Potenciação
		k=9*potencia;
		
		//Recolhendo valores para as variáveis
		cout << "Qual o valor da carga elétrica (Q), em coulombs?" << endl;
		cin >> cargaE;
		cout << "Qual o valor da carga elétrica de prova (q), em coulombs?" << endl;
		cin >> cargaEP;
		cout << "Qual a distância entre as cargas, em metros?" << endl;
		cin >> d;
		
		//Realizando cálculo final e imprimindo resultado
		forca=(k*cargaE*cargaEP)/(d*d);
		cout << "A força eletrostática é de: " << forca << " N.\n\n";
	}
	
	
	
			
	else if(resposta1 == '1'){//Se o valor que o usuário inseriu é '0', começar o calculo de Tijolos por metro quadrado
		double base, altura, tijolos, area;
				
		cout << "\nTijolos por metro quadrado\n";
		
		//Recolhendo valores para 'base'
		baseBack:
		cout << "\nQual o tamanho da base em metros?" << endl;
		cin >> base;
		if(base<=0){//Se o comprimento é menor que 0, impimir mensagem e ir para 'baseBack:'
			cout << "\nValor inválido. Tente algum número positivo\n";
			goto baseBack;
		}
		
		//Recolhendo valores para 'altura'
		alturaBack:
		cout << "Qual o tamanho da altura em metros?" << endl;
		cin >> altura;
		if(altura<=0){
			cout << "\nValor inválido. Tente algum número positivo\n";
			goto alturaBack;
		}
		
		//Calculo final e impressão de resultado
		area=base*altura;
		tijolos=area*39.68;
		cout << "É possível colocar uma média de " << trunc(tijolos) << " tijolos inteiros (6 furos padrão) em " << area << " metros quadrados.\n\n\n";
	}	
	
	
	
		
	else{//Se o valor que o usuário inseriu não é nenhum dos dois, imprimir mensagem, e retornar para o goto
		cout << "\nValor inválido.\n";
	}
			
	
	goto comeco;
	}

	


